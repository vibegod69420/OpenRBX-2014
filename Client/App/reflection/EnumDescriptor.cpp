#include "reflection/EnumDescriptor.h"

#include "decomp.h"

namespace RBX {
namespace Reflection {

// FUNCTION: ROBLOXSTUDIO 0x007943b0
void* EnumDescriptor::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Reflection
} // namespace RBX
