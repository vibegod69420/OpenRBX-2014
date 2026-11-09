#include "v8world/TreeStage.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00ba2b30
int TreeStage::getConst5() const
{
	return 5;
}

// FUNCTION: ROBLOXSTUDIO 0x00ba2630
void* TreeStage::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
