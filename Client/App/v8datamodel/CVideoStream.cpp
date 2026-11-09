#include "v8datamodel/CVideoStream.h"

#include "decomp.h"

namespace RBX {
namespace DS {

// FUNCTION: ROBLOXSTUDIO 0x006b1400
int CVideoStream::getField30() const
{
	return field_0030;
}

// FUNCTION: ROBLOXSTUDIO 0x00427de0
void* CVideoStream::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace DS
} // namespace RBX
