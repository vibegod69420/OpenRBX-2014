#include "RobloxFindWidget.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004554f0
void* RobloxFindWidget::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


