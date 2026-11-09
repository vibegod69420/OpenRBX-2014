#include "ToggleCollisionCheckVerb.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00524420
bool ToggleCollisionCheckVerb::getFlag_4420() const
{
	return s_flag_00524420;
}

// FUNCTION: ROBLOXSTUDIO 0x0051f000
void* ToggleCollisionCheckVerb::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS


