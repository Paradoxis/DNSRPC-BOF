#ifdef _DEBUG
    #include <stdio.h>
    #define BeaconPrintf(type, fmt, ...) printf(fmt "", ##__VA_ARGS__)
#endif

#ifdef _DEBUG
    #define API(x, y) y
#else
    #define API(x, y) x##$##y
#endif

#ifndef _DEBUG
DECLSPEC_IMPORT HANDLE KERNEL32$GetProcessHeap();
DECLSPEC_IMPORT LPVOID KERNEL32$HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
DECLSPEC_IMPORT BOOL KERNEL32$HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);
#else
#pragma comment(lib, "kernel32.lib")
#endif

#define BofHeapAlloc(size) API(KERNEL32, HeapAlloc)(API(KERNEL32, GetProcessHeap)(), HEAP_ZERO_MEMORY, size)
#define BofHeapFree(buf) API(KERNEL32, HeapFree)(API(KERNEL32, GetProcessHeap)(), 0, buf)
