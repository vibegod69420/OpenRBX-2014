#include "DummyWatchItem.h"

#include "decomp.h"



__declspec(dllimport) int __cdecl sub_E110A8(const char *name);
__declspec(dllimport) void __cdecl sub_E10F50(int a1, DummyWatchItem *a2, int a3);

// FUNCTION: ROBLOXSTUDIO 0x004452c0
void DummyWatchItem::updateButtonsStatus()
{
	if (*((unsigned char *)this + 0x28) == 0)
	{
		*((unsigned char *)this + 0x28) = 1;
		sub_E10F50(0, this, sub_E110A8("1updateButtonsStatus()"));
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


