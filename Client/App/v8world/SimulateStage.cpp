#include "v8world/SimulateStage.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00c169f0
int SimulateStage::getConst14() const
{
	return 14;
}

// FUNCTION: ROBLOXSTUDIO 0x00c12ff0
void* SimulateStage::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
