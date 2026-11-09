#include "MobileDevelopmentDeployer.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00467fb0
void* MobileDevelopmentDeployer::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


