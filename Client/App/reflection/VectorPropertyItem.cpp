#include "reflection/VectorPropertyItem.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004709f0
void* VectorPropertyItem::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


