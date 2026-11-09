#include "v8datamodel/WrapMouseJob.h"

#include "decomp.h"

namespace RobloxView {

// FUNCTION: ROBLOXSTUDIO 0x005408f0
void* WrapMouseJob::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RobloxView
