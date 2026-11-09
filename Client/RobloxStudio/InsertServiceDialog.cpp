#include "InsertServiceDialog.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004623e0
void* InsertServiceDialog::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


