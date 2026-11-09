#include "RobloxScriptDoc.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0050f1b0
void* RobloxScriptDoc::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


