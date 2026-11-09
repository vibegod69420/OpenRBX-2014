#include "InsertObjectWidget.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00416b50
void* InsertObjectWidget::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


