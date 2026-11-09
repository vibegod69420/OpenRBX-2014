#include "v8datamodel/serInputService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0080d850
void* serInputService::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0080d970
void* serInputService::scalarDeletingDestructor_slot0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0080dd30
void* serInputService::scalarDeletingDestructor_dd30(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
