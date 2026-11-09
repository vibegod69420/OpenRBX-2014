#include "v8datamodel/ContentProviderJob.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bbe180
void ContentProviderJob::setField264(int value)
{
	field_0264 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00bbd920
void* ContentProviderJob::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
