#include "DocTabManager.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0044fc00
void* DocTabManager::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


