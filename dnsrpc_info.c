//
// dnsrpc_info
//
// Used to query basic information from the ADIDNS server
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
#else
#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")
#endif


VOID print_addresses(LPCWSTR label, PDNS_ADDR_ARRAY arr)
{
    if (!arr || arr->AddrCount == 0)
    {
        BeaconPrintf(CALLBACK_OUTPUT, "%ls: (none)\n", label);
        return;
    }

    WCHAR buf[512] = {0};
    INT pos = 0;

    for (DWORD i = 0; i < arr->AddrCount; i++)
    {
        BYTE *sa = (BYTE *)arr->AddrArray[i].MaxSa;
        WORD family = *(WORD *)sa;

        if (i > 0)
            pos += API(USER32, wsprintfW)(buf + pos, L", ");

        if (family == 2)
        {
            BYTE *addr = sa + 4;
            pos += API(USER32, wsprintfW)(buf + pos, L"%u.%u.%u.%u",
                addr[0], addr[1], addr[2], addr[3]);
        }
        else if (family == 23)
        {
            BYTE *addr = sa + 8;
            pos += API(USER32, wsprintfW)(buf + pos,
                L"%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x",
                addr[0],  addr[1],  addr[2],  addr[3],
                addr[4],  addr[5],  addr[6],  addr[7],
                addr[8],  addr[9],  addr[10], addr[11],
                addr[12], addr[13], addr[14], addr[15]);
        }
        else
        {
            pos += API(USER32, wsprintfW)(buf + pos, L"unknown-family-%u", family);
        }
    }

    BeaconPrintf(CALLBACK_OUTPUT, "%ls: %ls\n", label, buf);
}

VOID print_server_info(PDNS_RPC_SERVER_INFO info)
{
    BeaconPrintf(CALLBACK_OUTPUT, "server name: %hs\n",                         info->pszServerName);
    BeaconPrintf(CALLBACK_OUTPUT, "server version: %08lX (%lu.0 build %lu)\n",  info->dwVersion, info->dwVersion & 0xFFFF, (info->dwVersion >> 16) & 0xFFFF);
    BeaconPrintf(CALLBACK_OUTPUT, "rpc structure version: %lu (%ls)\n",         info->dwRpcStructureVersion, dnsrpc_structure_version_to_string(info->dwRpcStructureVersion));
    BeaconPrintf(CALLBACK_OUTPUT, "directory services available: %s\n",         info->fDsAvailable     ? "yes" : "no");
    BeaconPrintf(CALLBACK_OUTPUT, "admin configured: %s\n",                     info->fAdminConfigured ? "yes" : "no");
    BeaconPrintf(CALLBACK_OUTPUT, "allow update: %s\n",                         info->fAllowUpdate     ? "yes" : "no");
    BeaconPrintf(CALLBACK_OUTPUT, "is read-only domain controller: %s\n",       info->fReadOnlyDC      ? "yes" : "no");
    BeaconPrintf(CALLBACK_OUTPUT, "boot method: %lu (%ls)\n",                   info->fBootMethod, dnsrpc_boot_method_to_string(info->fBootMethod));
    BeaconPrintf(CALLBACK_OUTPUT, "no recursion: %s\n",                         info->fNoRecursion     ? "yes" : "no");
    BeaconPrintf(CALLBACK_OUTPUT, "round robin: %s\n",                          info->fRoundRobin      ? "yes" : "no");
    BeaconPrintf(CALLBACK_OUTPUT, "secure responses: %s\n",                     info->fSecureResponses ? "yes" : "no");
    BeaconPrintf(CALLBACK_OUTPUT, "forward timeout: %lu\n",                     info->dwForwardTimeout);
    BeaconPrintf(CALLBACK_OUTPUT, "recursion retry: %lu\n",                     info->dwRecursionRetry);
    BeaconPrintf(CALLBACK_OUTPUT, "recursion timeout: %lu\n",                   info->dwRecursionTimeout);
    BeaconPrintf(CALLBACK_OUTPUT, "max cache ttl: %lu\n",                       info->dwMaxCacheTtl);
    BeaconPrintf(CALLBACK_OUTPUT, "directory services polling interval: %lu\n", info->dwDsPollingInterval);
    BeaconPrintf(CALLBACK_OUTPUT, "scavenging interval: %lu\n",                 info->dwScavengingInterval);
    BeaconPrintf(CALLBACK_OUTPUT, "log level: 0x%08lX\n",                       info->dwLogLevel);
    BeaconPrintf(CALLBACK_OUTPUT, "directory services container: %ls\n",        info->pszDsContainer  ? info->pszDsContainer          : L"(none)");
    BeaconPrintf(CALLBACK_OUTPUT, "domain name: %hs\n",                         info->pszDomainName   ? (char *)info->pszDomainName   : "(none)");
    BeaconPrintf(CALLBACK_OUTPUT, "forest name: %hs\n",                         info->pszForestName   ? (char *)info->pszForestName   : "(none)");
    BeaconPrintf(CALLBACK_OUTPUT, "log file path: %ls\n",                       info->pwszLogFilePath ? info->pwszLogFilePath         : L"(none)");

    print_addresses(L"server addresses", info->aipServerAddrs);
    print_addresses(L"listen addresses", info->aipListenAddrs);
    print_addresses(L"forwarders",       info->aipForwarders);
}

void usage() {
    BeaconPrintf(CALLBACK_ERROR, 
        "Usage: dnsrpc_info <server>\n"
        "Example: dnsrpc_info DC01.research.lab\n"
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

    ULONG type_id = 0;
    DNSSRV_RPC_UNION data = { 0 };
    DNSRPC_STATUS status = dnsrpc_query_server_info(handle, server, &type_id, &data);
    if (!DNSRPC_OK(status)) {
        if (DNSRPC_THREW(status)) {
            dnsrpc_print_exception(status.exception);
        } else {
            dnsrpc_print_exception(status.rpc_status);
        }

        goto cleanup;
    }

    switch (type_id)
    {
        case DNSSRV_TYPEID_SERVER_INFO:
            print_server_info(data.ServerInfo);
            break;

        case DNSSRV_TYPEID_SERVER_INFO_DOTNET:
            print_server_info((PDNS_RPC_SERVER_INFO)data.ServerInfoDotNet);
            break;

        case DNSSRV_TYPEID_SERVER_INFO_W2K:
            BeaconPrintf(CALLBACK_OUTPUT, "Server is too old to use LONGHORN client version, too lazy to implement this :)\n");
            break;

        default:
            BeaconPrintf(CALLBACK_OUTPUT, "RPC server returned unexpected type_id in response: %lu\n", type_id);
            break;
    }

cleanup:
    if (handle != NULL) {
        RpcBindingFree(&handle);
    }

    return;
}

