#include "v8datamodel/OcclusionRequest.h"

#include "decomp.h"

namespace RBX {
namespace Path {

// FUNCTION: ROBLOXSTUDIO 0x00a868b0
void* OcclusionRequest::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Path
} // namespace RBX
