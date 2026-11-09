#include "v8kernel/btCollisionDispatcher.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004956c0
int btCollisionDispatcher::getField0C() const
{
	return field_000c;
}

// FUNCTION: ROBLOXSTUDIO 0x0058f7c0
void* btCollisionDispatcher::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


