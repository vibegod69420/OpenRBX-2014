#include "reflection/SurfaceEnumPropDescriptor.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a212a0
int SurfaceEnumPropDescriptor::getEnumCount() const
{
	return (*(char**)((char*)this + 0x10) - *(char**)((char*)this + 0x0C)) / 20;
}

// FUNCTION: ROBLOXSTUDIO 0x00a212c0
int SurfaceEnumPropDescriptor::getEnumValueCount() const
{
	return (*(char**)((char*)this + 0x04) - *(char**)((char*)this + 0x00)) / 28;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
