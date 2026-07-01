
//
// dnsrpc_probe
//
// Used to probe the status of the ADIDNS server
// Does not require any elevated privileges to use
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
#else
#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")
#endif


void usage() {
    BeaconPrintf(CALLBACK_ERROR, 
        "Usage: dnsrpc_probe <server>\n"
        "Example: dnsrpc_probe DC01.research.lab\n"
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

    WCHAR binding_str[MAX_PATH];
    API(MSVCRT, swprintf_s)(binding_str, MAX_PATH, L"ncacn_ip_tcp:%s", server);

    RPC_BINDING_HANDLE handle = NULL;
    RPC_STATUS status = RpcBindingFromStringBindingW((RPC_WSTR)binding_str, &handle);
    if (status != RPC_S_OK) {
        BeaconPrintf(CALLBACK_ERROR, "RpcBindingFromStringBindingW failed: %ld\n", status);
        goto cleanup;
    }

    status = RpcEpResolveBinding(handle, DnsServer_v5_0_c_ifspec);
    switch (status) {
        case RPC_S_OK:
            BeaconPrintf(CALLBACK_OUTPUT, "RPC connection successful.\n", status);
            goto cleanup;
        
        case RPC_ERR_BIND_FAILED:
            BeaconPrintf(CALLBACK_ERROR, "RPC connection failed: %ld (dns server might be offline)\n", status);
            goto cleanup;
        
        default:
            BeaconPrintf(CALLBACK_ERROR, "RPC connection failed: %ld (unknown error)\n", status);
            goto cleanup;
    }

cleanup:
    if (handle != NULL) {
        RpcBindingFree(&handle);
    }

    return;
}
