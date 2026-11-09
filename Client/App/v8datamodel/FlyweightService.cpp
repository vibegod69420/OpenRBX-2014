#include "v8datamodel/FlyweightService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0048b5e0
void FlyweightService::addAssign(int* p, int v)
{
	*p += v;
}

// FUNCTION: ROBLOXSTUDIO 0x0048b5d0
void FlyweightService::pushFrontNode(int* node)
{
	*node = _vtable_or_head;
	_vtable_or_head = (int)node;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
