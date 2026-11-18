#include "v8datamodel/Vector3_2Ints.h"

#include "decomp.h"

namespace RBX {

// 0x00bb0560
void __cdecl sub_BB0560(void* token, int value);

// FUNCTION: ROBLOXSTUDIO 0x00bafb60
void Vector3_2Ints::dispose()
{
	void* px = *(void**)((char*)this + 0x0C);
	if (px)
	{
		sub_BB0560(px, *(int*)((char*)px + 0x14));
		::operator delete(px);
	}
}

// 0x00bb1e90
void __cdecl sub_BB1E90(void* token, int value);void Vector3_2Ints::disposeImpl()
{
	void* px = *(void**)((char*)this + 0x0C);
	if (px)
	{
		sub_BB1E90(px, *(int*)((char*)px + 0x14));
		::operator delete(px);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
