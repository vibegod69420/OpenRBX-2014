#include "MainLogManager.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0045f760
extern "C" __declspec(dllimport) void * __stdcall GetProcAddress(void *hModule, const char *lpProcName);
extern "C" __declspec(dllimport) int __stdcall FreeLibrary(void *hLibModule);

void __cdecl MainLogManager::FreeLoadedModule()
{
	FreeLibrary(GetProcAddress(0, (const char *)this));
}

// AUTO-GENERATED IMPLEMENTATIONS


