#include "RobloxWebDoc.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005465f0
void* RobloxWebDoc::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


