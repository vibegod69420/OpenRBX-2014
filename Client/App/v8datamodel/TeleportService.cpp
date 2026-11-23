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

// FUNCTION: ROBLOXSTUDIO 0x008eef30
void __cdecl TeleportService::setUnk012FD420()
{
	*(TeleportService**)0x012FD420 = this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
