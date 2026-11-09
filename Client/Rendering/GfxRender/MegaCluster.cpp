#include "MegaCluster.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00660dc0
void MegaCluster::setFlag41(bool value)
{
	flag_0041 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x006656c0
void* MegaCluster::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
