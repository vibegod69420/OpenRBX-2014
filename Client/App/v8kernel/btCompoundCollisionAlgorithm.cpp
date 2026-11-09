#include "v8kernel/btCompoundCollisionAlgorithm.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005aa6b0
void* btCompoundCollisionAlgorithm::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


