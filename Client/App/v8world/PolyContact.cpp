#include "v8world/PolyContact.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bc88e0
void PolyContact_deleteEdge(PolyContact* contact, void* edge, void* face);

void __cdecl PolyContact::deleteEdge(void* edge)
{
	PolyContact_deleteEdge(this, edge, *(void**)((char*)this + 0x10));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
