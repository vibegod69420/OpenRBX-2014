#include "reflection/ClassDescriptor.h"

#include "decomp.h"

namespace RBX {
namespace Reflection {

// FUNCTION: ROBLOXSTUDIO 0x004117b0
void* ClassDescriptor::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Reflection
} // namespace RBX
