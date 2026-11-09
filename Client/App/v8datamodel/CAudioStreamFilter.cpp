#include "v8datamodel/CAudioStreamFilter.h"

#include "decomp.h"

namespace RBX {
namespace DS {

// FUNCTION: ROBLOXSTUDIO 0x006b0820
int CAudioStreamFilter::evalConstNeg2147467263(int a0, int a1) const
{
	return -2147467263;
}

// FUNCTION: ROBLOXSTUDIO 0x00427bf0
void* CAudioStreamFilter::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace DS
} // namespace RBX
