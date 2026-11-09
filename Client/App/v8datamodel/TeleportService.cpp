#include "v8datamodel/TeleportService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008ee2b0
int TeleportService::getConst18957256() const
{
	return 18957256;
}

// FUNCTION: ROBLOXSTUDIO 0x008e9f30
int TeleportService::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x008edf10
void* TeleportService::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x008edf40
void* TeleportService::scalarDeletingDestructor_slot0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x009b4ce0
void* TeleportService::scalarDeletingDestructor_4ce0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
