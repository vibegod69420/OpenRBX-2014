#include "UploadDialog.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0058a950
int UploadDialog::getField28() const
{
	return field_0028;
}

// FUNCTION: ROBLOXSTUDIO 0x005760c0
void* UploadDialog::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


