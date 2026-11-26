#include "MainLogManager.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0045f760
extern "C" __declspec(dllimport) void * __stdcall GetProcAddress(void *hModule, const char *lpProcName);
extern "C" __declspec(dllimport) int __stdcall FreeLibrary(void *hLibModule);

void __cdecl MainLogManager::FreeLoadedModule()
{
	FreeLibrary(GetProcAddress(0, (const char *)this));
}

struct MainLogManager_45F780
{
	void __thiscall call(int a1, int a2);
};

// FUNCTION: ROBLOXSTUDIO 0x0045f880
MainLogManager* __cdecl MainLogManager::sub_45F880(int a1)
{
	volatile int local = 0;
	((MainLogManager_45F780*)this)->call(a1, 1);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


