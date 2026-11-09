#include "InsertObjectListWidget.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00460e40
void* InsertObjectListWidget::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


