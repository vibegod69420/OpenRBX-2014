#include "EnvMap.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x0061fba0
void* EnvMap::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
