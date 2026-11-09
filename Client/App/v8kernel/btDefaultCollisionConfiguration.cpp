#include "v8kernel/btDefaultCollisionConfiguration.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004956b0
int btDefaultCollisionConfiguration::getField10() const
{
	return field_0010;
}

// FUNCTION: ROBLOXSTUDIO 0x0058f090
void* btDefaultCollisionConfiguration::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


