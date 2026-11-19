#include "v8datamodel/FlyweightService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0048b5e0
void FlyweightService::addAssign(int* p, int v)
{
	*p += v;
}

// FUNCTION: ROBLOXSTUDIO 0x0048b110
void __cdecl FlyweightService::subAssign(int* p, int v)
{
	int cur = *p;
	if ((unsigned int)v <= (unsigned int)cur)
		*p = cur - v;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
