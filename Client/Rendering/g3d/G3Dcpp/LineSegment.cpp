#include "G3D/LineSegment.h"

#include "decomp.h"

namespace G3D {

} // namespace G3D

extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(long volatile* Addend);

namespace G3D {

void sub_7022e0(void* p);

// FUNCTION: ROBLOXSTUDIO 0x007024f0
LineSegment::~LineSegment()
{
	void* p = *(void**)((char*)this + 0x28);
	if (p != 0)
	{
		if (InterlockedDecrement((long volatile*)((char*)p + 0x38)) <= 0)
		{
			sub_7022e0(*(void**)((char*)this + 0x28));
		}
	}
	*(void**)((char*)this + 0x28) = 0;
}

void* sub_7021c0(void*);

// FUNCTION: ROBLOXSTUDIO 0x00702520
void LineSegment::ensureInternalState()
{
	if (*(void**)((char*)this + 0x28) == 0)
	{
		*(void**)((char*)this + 0x28) = sub_7021c0(*(void**)((char*)this + 0x18));
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
