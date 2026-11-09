#include "RobloxPropertyWidget.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004fc9a0
void* RobloxPropertyWidget::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


