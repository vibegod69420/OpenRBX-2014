#include "DocDockManager.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0044e4f0
void* DocDockManager::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


