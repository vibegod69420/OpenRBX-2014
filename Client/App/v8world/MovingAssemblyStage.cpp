#include "v8world/MovingAssemblyStage.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00ba4120
int MovingAssemblyStage::getConst10() const
{
	return 10;
}

// FUNCTION: ROBLOXSTUDIO 0x00ba40f0
void* MovingAssemblyStage::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
