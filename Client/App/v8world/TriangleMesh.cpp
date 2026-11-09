#include "v8world/TriangleMesh.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0099c170
void* TriangleMesh::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0099d310
float TriangleMesh::someFloatGetter()
{
    return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + 0x2c);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
