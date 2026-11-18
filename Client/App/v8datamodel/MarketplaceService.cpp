#include "v8datamodel/MarketplaceService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a5c5b0
int MarketplaceService::getFlag()
{
	return *(int*)((char*)this + 0x30) & 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00ac2600
int MarketplaceService::getFlag2()
{
	return *(int*)((char*)this + 0x34) & 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
