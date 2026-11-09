#include "RobloxObjectBrowserDoc.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00495630
int RobloxObjectBrowserDoc::getField1C() const
{
	return field_001c;
}

// FUNCTION: ROBLOXSTUDIO 0x004f6790
void* RobloxObjectBrowserDoc::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


