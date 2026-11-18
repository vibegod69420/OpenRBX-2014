#include "Toggle3DGridVerb.h"

#include "decomp.h"



// helper at 0x00C2FED0
int __cdecl sub_C2FED0(void*);

// FUNCTION: ROBLOXSTUDIO 0x005241c0
bool Toggle3DGridVerb::isChecked() const
{
	return sub_C2FED0(*(void**)((char*)this + 0x0C)) == 0;
}

// FUNCTION: ROBLOXSTUDIO 0x005241e0
bool Toggle3DGridVerb::isEnabled() const
{
	typedef bool (__thiscall *IsCheckedFn)(const Toggle3DGridVerb*);
	if (((IsCheckedFn*)*(void***)this)[2](this))
	{
		void* unk0C = *(void**)((char*)this + 0x0C);
		void* unkBA0 = *(void**)((char*)unk0C + 0xBA0);
		if (unkBA0)
			return *(bool*)((char*)unkBA0 + 0x1D8);
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS


