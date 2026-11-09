#include "RecordToggleVerb.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00525b70
void* RecordToggleVerb::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


