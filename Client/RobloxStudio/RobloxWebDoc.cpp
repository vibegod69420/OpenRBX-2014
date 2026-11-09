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

// FUNCTION: ROBLOXSTUDIO 0x00526730
void RobloxWebDoc::onDestroy()
{
    // The assembly sets the byte at [ecx + 0xc] to 0 and then returns.
    // This is likely a cleanup or reset operation.
    *((char*)((char*)this + 0xc)) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS


