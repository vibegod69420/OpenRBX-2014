#include "ArchiveBinder.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x009062f0
void* ArchiveBinder::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


