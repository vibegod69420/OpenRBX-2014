#include "v8datamodel/PriorityThreadPoolData.h"

#include "decomp.h"

namespace RBX {
namespace PriorityThreadPool {

// FUNCTION: ROBLOXSTUDIO 0x00a1bcb0
void* PriorityThreadPoolData::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace PriorityThreadPool
} // namespace RBX
