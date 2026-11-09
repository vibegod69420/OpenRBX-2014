#include "RobloxPluginHost.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x005765c0
void RobloxPluginHost::setField04(int value)
{
	field_0004 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x005764c0
void* RobloxPluginHost::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


