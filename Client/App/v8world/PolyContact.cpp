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

// FUNCTION: ROBLOXSTUDIO 0x00bc6fc0
void __cdecl PolyContact::addEdge(void* edge, unsigned char info)
{
	void* face = *(void**)((char*)this + 0x10);
	void* oldHead = *(void**)((char*)face + 0x1C);
	*(void**)edge = oldHead;
	unsigned char low2 = *(unsigned char*)((char*)face + 0x14) & 0x03u;
	*(void**)((char*)face + 0x1C) = edge;
	*((unsigned char*)edge + 5) = low2;
	*((unsigned char*)edge + 4) = info;
}

// FUNCTION: ROBLOXSTUDIO 0x00bca5b0
void __cdecl PolyContact::init(void* target, void* arg2, void* arg3)
{
	char* p = (char*)target;
	*(void**)(p + 0x10) = this;
	*(void**)(p + 0x08) = arg2;
	*(void**)(p + 0x0C) = arg3;
	*(void**)p = 0;
	*(void**)(p + 0x04) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
