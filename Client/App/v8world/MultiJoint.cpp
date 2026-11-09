#include "v8world/MultiJoint.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b8d250
void* MultiJoint::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
