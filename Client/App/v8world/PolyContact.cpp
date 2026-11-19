#include "v8world/PolyContact.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bc88e0
void PolyContact_deleteEdge(PolyContact* contact, void* edge, void* face);

void __cdecl PolyContact::deleteEdge(void* edge)
{
	PolyContact_deleteEdge(this, edge, *(void**)((char*)this + 0x10));
}

void* PolyContact_findClosestFeature(PolyContact* contact, void* feature);

// FUNCTION: ROBLOXSTUDIO 0x00bc8790
void __cdecl PolyContact::findClosestFeature()
{
	*(void**)((char*)this + 0x20) = PolyContact_findClosestFeature(this, (char*)this + 0x28);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
