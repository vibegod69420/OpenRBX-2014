#include "RobloxInputConfigDialog.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004d24e0
void* RobloxInputConfigDialog::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


