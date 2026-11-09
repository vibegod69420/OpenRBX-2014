#include "v8datamodel/ThreadPoolData.h"

#include "decomp.h"

namespace RBX {
namespace ThreadPool {

// FUNCTION: ROBLOXSTUDIO 0x00a1bce0
void* ThreadPoolData::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace ThreadPool
} // namespace RBX
