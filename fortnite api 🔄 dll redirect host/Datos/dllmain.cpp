#include "pch.h"

#include "util.h"
#include "curl.h"

VOID Main() {
    Util::InitConsole();

    printf("[+] txt\n");
    Sleep(1000);
    printf("[+] txt\n");
    Sleep(2000);
    printf("[+] txt\n");
    Sleep(3000);
    printf("[+] txt\n");
    Sleep(4000);
    printf("[+] txt\n");
    Sleep(5000);
    printf("[+] txt\n");
    Sleep(6000);

    InitCurl();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH)
        Main();

    return TRUE;
}
