#include "v8datamodel/DataStore.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00be9a10
int DataStore::getConst15617916() const
{
	return 15617916;
}

// FUNCTION: ROBLOXSTUDIO 0x00be5a60
void* DataStore::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
