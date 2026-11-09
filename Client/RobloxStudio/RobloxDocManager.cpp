#include "RobloxDocManager.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004a4d30
void* RobloxDocManager::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


