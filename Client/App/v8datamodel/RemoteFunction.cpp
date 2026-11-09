#include "v8datamodel/RemoteFunction.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a6ebb0
void* RemoteFunction::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
