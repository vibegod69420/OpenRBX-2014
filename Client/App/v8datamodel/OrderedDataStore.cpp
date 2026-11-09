#include "v8datamodel/OrderedDataStore.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00be9a20
int OrderedDataStore::getConst15618428() const
{
	return 15618428;
}

// FUNCTION: ROBLOXSTUDIO 0x00be5ac0
void* OrderedDataStore::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
