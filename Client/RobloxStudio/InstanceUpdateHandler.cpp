#include "InstanceUpdateHandler.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00536300
void* InstanceUpdateHandler::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


