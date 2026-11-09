#include "v8datamodel/BoundVerb.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x004d1ce0
void* BoundVerb::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
