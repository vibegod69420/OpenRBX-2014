#include "v8world/EdgeStage.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00c11320
__declspec(dllimport) __declspec(noreturn) void RbxAllocFailed();

void* EdgeStage::allocateEdge()
{
	void* edge = ::operator new(0x14u);
	if (!edge)
		RbxAllocFailed();

	void** p = (void**)edge;
	void** p1 = p + 1;
	*p = *(void**)this;
	if (p1)
		*p1 = *(void**)this;

	void** p2 = p + 2;
	if (p2)
		*p2 = *(void**)this;

	return edge;
}

extern char EdgeStage_vftable[];

struct EdgeStageEdgeList
{
	void construct();
};

// FUNCTION: ROBLOXSTUDIO 0x00c11270
EdgeStage::EdgeStage()
{
	EdgeStageEdgeList* list = (EdgeStageEdgeList*)((char*)this + 4);
	*(void**)this = EdgeStage_vftable;
	list->construct();
	*(int*)((char*)this + 0x14) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
