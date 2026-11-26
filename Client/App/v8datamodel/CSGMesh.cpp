#include "v8datamodel/CSGMesh.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00985e50
struct CSGMeshListOps
{
	void eraseRange(void* out, void* first, void* last);
};

void CSGMesh::clear()
{
	void* it;
	((CSGMeshListOps*)this)->eraseRange(&it, **(void***)this, *(void**)this);
	operator delete(*(void**)this);
}

// FUNCTION: ROBLOXSTUDIO 0x00985280
static CSGMesh* g_csgMeshGlobal;

void __cdecl CSGMesh::setGlobalMesh()
{
	g_csgMeshGlobal = this;
}

// FUNCTION: ROBLOXSTUDIO 0x00985e80
__declspec(dllimport) __declspec(noreturn) void __cdecl csgMeshAllocFail();

void* CSGMesh::buyNode()
{
	void* node = ::operator new(0x28u);
	if (node == NULL)
		csgMeshAllocFail();

	void* head = *(void**)this;
	void** p1 = (void**)((char*)node + 4);
	*(void**)node = head;
	if (p1)
		*p1 = *(void**)this;

	void** p2 = (void**)((char*)node + 8);
	if (p2)
		*p2 = *(void**)this;

	return node;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
