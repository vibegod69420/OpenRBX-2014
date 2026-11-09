#include "OpenToolBoxWithOptionsVerb.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00527f70
void* OpenToolBoxWithOptionsVerb::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


