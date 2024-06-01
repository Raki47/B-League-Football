// Entry point for the dll Is done In Assembly but starts of here to make It work

// Exclude rarely-used stuff from Windows headers
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

// Forward declaration of the MASM DllMain function
extern BOOL __stdcall DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved);

BOOL __stdcall DllMainCRTStartup(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    return DllMain(hModule, ul_reason_for_call, lpReserved);
}