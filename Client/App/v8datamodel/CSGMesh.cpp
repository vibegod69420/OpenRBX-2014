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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
