#include "reflection/PropertyTreeWidget.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004fa700
void* PropertyTreeWidget::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


