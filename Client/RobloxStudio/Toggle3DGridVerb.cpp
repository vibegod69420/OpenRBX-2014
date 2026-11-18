#include "Toggle3DGridVerb.h"

#include "decomp.h"



// helper at 0x00C2FED0
int __cdecl sub_C2FED0(void*);

// FUNCTION: ROBLOXSTUDIO 0x005241c0
bool Toggle3DGridVerb::isChecked() const
{
	return sub_C2FED0(*(void**)((char*)this + 0x0C)) == 0;
}

// AUTO-GENERATED IMPLEMENTATIONS


