#include "v8datamodel/AncestryChangedSignalData.h"

#include "decomp.h"

namespace RBX {
namespace Instance {

// FUNCTION: ROBLOXSTUDIO 0x007b0d80
void* AncestryChangedSignalData::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Instance
} // namespace RBX
