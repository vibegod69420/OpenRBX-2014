#include "v8kernel/btCompoundCompoundCollisionAlgorithm.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005a6780
void* btCompoundCompoundCollisionAlgorithm::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


