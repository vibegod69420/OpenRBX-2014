#include "RobloxSettingsDialog.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005159f0
void* RobloxSettingsDialog::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


