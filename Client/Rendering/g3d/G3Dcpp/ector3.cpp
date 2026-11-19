#include "G3D/ector3.h"

#include "decomp.h"

namespace G3D {

// FUNCTION: ROBLOXSTUDIO 0x00ac2490
void __cdecl ector3::call(int a, int b, int c)
{
	typedef void (__thiscall *Func)(void*, int*, int*, int*);
	char* base = (char*)this;
	int target = *(int*)(base + 8);
	target += *(int*)(base + 4);
	(*(Func*)base)((void*)target, &a, &b, &c);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
