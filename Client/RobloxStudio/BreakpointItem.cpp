#include "BreakpointItem.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004438b0
void* BreakpointItem::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


