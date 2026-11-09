#include "ShortcutHelpDialog.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005559c0
int ShortcutHelpDialog::getConst16984184() const
{
	return 16984184;
}

// FUNCTION: ROBLOXSTUDIO 0x005550c0
void* ShortcutHelpDialog::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


