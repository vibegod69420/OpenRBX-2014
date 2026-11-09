#include "RobloxTaskScheduler.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005331e0
void* RobloxTaskScheduler::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


