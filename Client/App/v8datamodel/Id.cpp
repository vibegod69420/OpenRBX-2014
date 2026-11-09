#include "v8datamodel/Id.h"

#include "decomp.h"

namespace RBX {
namespace SpatialRegion {

// FUNCTION: ROBLOXSTUDIO 0x00c5dc60
void* Id::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00c5dc90
void* Id::scalarDeletingDestructor_slot1(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace SpatialRegion
} // namespace RBX
