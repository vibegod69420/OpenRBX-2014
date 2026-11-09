#include "RobloxIDEDoc.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x004bb180
int RobloxIDEDoc::getField80() const
{
	return field_0080;
}

// FUNCTION: ROBLOXSTUDIO 0x004b6ae0
void* RobloxIDEDoc::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


