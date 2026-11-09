#include "script/ScriptSideWidget.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00548d80
void* ScriptSideWidget::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


