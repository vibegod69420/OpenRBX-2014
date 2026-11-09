#include "v8datamodel/MarketplaceService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a5d6e0
void MarketplaceService::setFieldCC(int value)
{
	field_00cc = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00941320
void* MarketplaceService::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00aba320
void* MarketplaceService::scalarDeletingDestructor_slot0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00aba350
void* MarketplaceService::scalarDeletingDestructor_a350(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00aba380
void* MarketplaceService::scalarDeletingDestructor_a380(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00aba3b0
void* MarketplaceService::scalarDeletingDestructor_a3b0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
