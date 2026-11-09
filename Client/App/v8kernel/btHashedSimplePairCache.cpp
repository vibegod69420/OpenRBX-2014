#include "v8kernel/btHashedSimplePairCache.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005ce4e0
void* btHashedSimplePairCache::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


