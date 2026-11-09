#include "v8datamodel/OnDemandPartInstance.h"

#include "decomp.h"

namespace RBX {
namespace PartInstance {

// FUNCTION: ROBLOXSTUDIO 0x0088f2e0
void* OnDemandPartInstance::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace PartInstance
} // namespace RBX
