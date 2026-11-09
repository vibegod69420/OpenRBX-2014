#include "v8datamodel/VerbContainer.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00960cb0
void VerbContainer::setField0C(int value)
{
	field_000c = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00960ad0
void* VerbContainer::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
