#include "v8datamodel/CSGMesh.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0049b840
bool CSGMesh::canAccept(int a0, int a1) const
{
	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x00984710
void* CSGMesh::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
