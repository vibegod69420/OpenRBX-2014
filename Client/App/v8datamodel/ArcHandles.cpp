#include "v8datamodel/ArcHandles.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a9c560
int ArcHandles::getHandleId()
{
	return -1;
}

// FUNCTION: ROBLOXSTUDIO 0x00a9d6d0
bool ArcHandles::getFlag20() const
{
	return flag_0020;
}

// FUNCTION: ROBLOXSTUDIO 0x00b16da0
void ArcHandles::setFieldA0()
{
	*(bool*)((char*)this + 0xA0) = true;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
