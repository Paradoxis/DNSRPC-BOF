//
// Shared BOF definitions for RPC calls
// The Microsoft definition for NdrClientCall3 has variadic arguments, so just resolve the damn thing at runtime ¯\_(ツ)_/¯
//

#include <windows.h>
#include <rpc.h>
#include <rpcndr.h>
#include <setjmp.h>


#ifndef _DEBUG
DECLSPEC_IMPORT FARPROC KERNEL32$GetProcAddress(HMODULE hModule, LPCSTR lpProcName);
DECLSPEC_IMPORT HMODULE KERNEL32$LoadLibraryA(LPCSTR lpLibFileName);
DECLSPEC_IMPORT BOOL KERNEL32$VirtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);
#endif

typedef CLIENT_CALL_RETURN (*NdrClientCall3Func)(MIDL_STUBLESS_PROXY_INFO *pProxyInfo, unsigned long nProcNum, void *pReturnValue, ...);
typedef RPC_STATUS (*RpcEpResolveBindingFunc)(RPC_BINDING_HANDLE Binding, RPC_IF_HANDLE IfSpec);
typedef RPC_STATUS (*RpcBindingFromStringBindingWFunc)(RPC_WSTR StringBinding, RPC_BINDING_HANDLE *Binding);
typedef RPC_STATUS (*RpcBindingFreeFunc)(RPC_BINDING_HANDLE *Binding);
typedef RPC_STATUS (*RpcBindingSetAuthInfoWFunc)(RPC_BINDING_HANDLE Binding, RPC_WSTR ServerPrincName, unsigned long AuthnLevel, unsigned long AuthnSvc, RPC_AUTH_IDENTITY_HANDLE AuthIdentity, unsigned long AuthzSvc);

#define NdrClientCall3(pProxyInfo, nProcNum, pReturnValue, ...) \
    ((NdrClientCall3Func)API(KERNEL32, GetProcAddress)(API(KERNEL32, LoadLibraryA)("rpcrt4.dll"), "NdrClientCall3"))(pProxyInfo, nProcNum, pReturnValue, ##__VA_ARGS__)

#define RpcEpResolveBinding(Binding, IfSpec) \
    ((RpcEpResolveBindingFunc)API(KERNEL32, GetProcAddress)(API(KERNEL32, LoadLibraryA)("rpcrt4.dll"), "RpcEpResolveBinding"))(Binding, IfSpec)

#define RpcBindingFromStringBindingW(StringBinding, Binding) \
    ((RpcBindingFromStringBindingWFunc)API(KERNEL32, GetProcAddress)(API(KERNEL32, LoadLibraryA)("rpcrt4.dll"), "RpcBindingFromStringBindingW"))(StringBinding, Binding)

#define RpcBindingFree(Binding) \
    ((RpcBindingFreeFunc)API(KERNEL32, GetProcAddress)(API(KERNEL32, LoadLibraryA)("rpcrt4.dll"), "RpcBindingFree"))(Binding)

#define RpcBindingSetAuthInfoW(Binding, ServerPrincName, AuthnLevel, AuthnSvc, AuthIdentity, AuthzSvc) \
    ((RpcBindingSetAuthInfoWFunc)API(KERNEL32, GetProcAddress)(API(KERNEL32, LoadLibraryA)("rpcrt4.dll"), "RpcBindingSetAuthInfoW"))(Binding, ServerPrincName, AuthnLevel, AuthnSvc, AuthIdentity, AuthzSvc)

//
// Remaining DNS RPC constants 
// Source: https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-dnsp/f97756c9-3783-428b-9451-b376f877319a
//

// From spec section 2.2.4.2.2: dwClientVersion values
#define DNS_CLIENT_VERSION_LONGHORN 0x00070000

// From spec section 2.2.1.1.1: DNSSRV_TYPEID enum values
#define DNSSRV_TYPEID_NULL               0
#define DNSSRV_TYPEID_DWORD              1
#define DNSSRV_TYPEID_LPSTR              2
#define DNSSRV_TYPEID_LPWSTR             3
#define DNSSRV_TYPEID_IPARRAY            4
#define DNSSRV_TYPEID_SERVER_INFO_W2K    7
#define DNSSRV_TYPEID_ZONE_EXPORT    19
#define DNSSRV_TYPEID_SERVER_INFO_DOTNET 21
#define DNSSRV_TYPEID_ADDRARRAY          34
#define DNSSRV_TYPEID_SERVER_INFO        35

// From spec section 3.1.1.1.1: fBootMethod values
#define DNS_BOOT_METHOD_UNINITIALIZED 1
#define DNS_BOOT_METHOD_FILE          2
#define DNS_BOOT_METHOD_REGISTRY      3
#define DNS_BOOT_METHOD_DIRECTORY     4

// From spec section 2.2.4.2.2: dwRpcStructureVersion values
#define DNS_RPC_STRUCTURE_VERSION_DOTNET   1
#define DNS_RPC_STRUCTURE_VERSION_LONGHORN 2



//
// RPC authentication level
//
#define RPC_C_AUTHN_LEVEL RPC_C_AUTHN_LEVEL_PKT_INTEGRITY
// #define RPC_C_AUTHN_LEVEL RPC_C_AUTHN_LEVEL_PKT_PRIVACY


//
// RPC status codes observed during testing
//

#define RPC_ERR_ACCESS_DENIED 5
#define RPC_ERR_INVALID_NAME 123
#define RPC_ERR_INVALID_PATH 161
#define RPC_ERR_BIND_FAILED 1753

//
// Exception handling structures
//


typedef void (WINAPI *RtlRaiseExceptionFunc)(PEXCEPTION_RECORD ExceptionRecord);
typedef void (*DNSRPC_FUNC)(PVOID ctx);
typedef int  (*setjmp_fn)(jmp_buf env);
typedef void (*longjmp_fn)(jmp_buf env, int value);

typedef struct
{
    BOOL triggered;
    DWORD exception_code;
    jmp_buf jmp;
    longjmp_fn longjmp;
} DNSRPC_HOOK_CTX;

typedef struct
{
    LONG rpc_status;
    DWORD exception;
} DNSRPC_STATUS;

#define DNSRPC_OK(s) ((s).exception == 0 && (s).rpc_status == RPC_S_OK)
#define DNSRPC_THREW(s) ((s).exception != 0)


// 
// Custom function structures
//

typedef struct
{
    RPC_BINDING_HANDLE handle;
    LPWSTR server;
    ULONG type_id;
    DNSSRV_RPC_UNION data;
    LONG result;
} DNSRPC_QUERY_SERVER_INFO_CTX;

typedef struct
{
    RPC_BINDING_HANDLE handle;
    LPWSTR server;
    LONG result;
} DNSRPC_RESTART_SERVER_CTX;

typedef struct
{
    RPC_BINDING_HANDLE handle;
    LPWSTR server;
    LPCWSTR log_path;
    LONG result;
} DNSRPC_SET_LOG_FILE_PATH_CTX;

typedef struct
{
    RPC_BINDING_HANDLE handle;
    LPWSTR server;
    LPCSTR zone;
    LPCSTR filename;
    LONG result;
} DNSRPC_ZONE_EXPORT_CTX;

typedef struct
{
    RPC_BINDING_HANDLE  handle;
    LPWSTR server;
    LONG result;
} DNSRPC_CLEAR_DEBUG_LOG_CTX;

typedef struct
{
    RPC_BINDING_HANDLE handle;
    LPWSTR server;
    LPCWSTR dll_path;
    LONG result;
} DNSRPC_SET_PLUGIN_DLL_CTX;


//
// Custom function prototypes
//

// Setup and authentication
RPC_BINDING_HANDLE dnsrpc_create_binding(CONST WCHAR* server);

// Worlds nastiest exception handling
VOID dnsrpc_print_exception(ULONG error_code);
VOID WINAPI dnsrpc_exception_handler(PEXCEPTION_RECORD ExceptionRecord);
BOOL dnsrpc_hook(LPCSTR module_name);
VOID dnsrpc_unhook(LPCSTR module_name);
BOOL dnsrpc_hook_exceptions(DNSRPC_HOOK_CTX *ctx);
VOID dnsrpc_unhook_exceptions(DNSRPC_HOOK_CTX *ctx);
DNSRPC_STATUS dnsrpc_call(DNSRPC_FUNC fn, PVOID fn_ctx);

// RPC call wrappers
DNSRPC_STATUS dnsrpc_query_server_info(RPC_BINDING_HANDLE handle, LPWSTR server, ULONG *type_id, DNSSRV_RPC_UNION *data);
DNSRPC_STATUS dnsrpc_restart_server(RPC_BINDING_HANDLE handle, LPWSTR server);
DNSRPC_STATUS dnsrpc_zone_export(RPC_BINDING_HANDLE handle, LPWSTR server, LPCSTR zone, LPCSTR filename);
DNSRPC_STATUS dnsrpc_set_log_file_path(RPC_BINDING_HANDLE handle, LPWSTR server, LPCWSTR log_path);
DNSRPC_STATUS dnsrpc_clear_debug_log(RPC_BINDING_HANDLE handle, LPWSTR server);
DNSRPC_STATUS dnsrpc_set_plugin_dll(RPC_BINDING_HANDLE handle, LPWSTR server, LPCWSTR dll_path);

// Data conversion
LPCWSTR dnsrpc_boot_method_to_string(DWORD method);
LPCWSTR dnsrpc_structure_version_to_string(DWORD version);
