#include "v8datamodel/RenderRequestJob.h"

#include "decomp.h"

namespace RobloxView {

// FUNCTION: ROBLOXSTUDIO 0x005402b0
void* RenderRequestJob::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RobloxView
