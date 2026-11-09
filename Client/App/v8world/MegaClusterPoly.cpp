#include "v8world/MegaClusterPoly.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b61fa0
const int* MegaClusterPoly::getMemberPtr04() const
{
	return &member_0004;
}

// FUNCTION: ROBLOXSTUDIO 0x00b608b0
void* MegaClusterPoly::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
