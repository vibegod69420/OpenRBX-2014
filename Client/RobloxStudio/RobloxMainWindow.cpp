#include "RobloxMainWindow.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004eb1c0
void* RobloxMainWindow::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


