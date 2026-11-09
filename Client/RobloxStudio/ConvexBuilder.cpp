#include "ConvexBuilder.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0059c5a0
void* ConvexBuilder::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


