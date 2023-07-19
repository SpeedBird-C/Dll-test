// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#define EXPORTING_DLL
#include "sampleDLL.h"
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    /*switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }*/
    return TRUE;
}

void HelloWorld()
{
     MessageBox(NULL, TEXT("Hello World"),
          TEXT("In a DLL"), MB_OK);
}