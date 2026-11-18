#include "v8world/Motor6D.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00913d00
float Motor6D::getDesiredAngle()
{
	char* internalData = *(char**)((char*)this + 0x8C);
	return *(float*)(internalData + 0x98);
}

// FUNCTION: ROBLOXSTUDIO 0x00a8d9a0
float Motor6D::getCurrentAngle()
{
	char* internalData = *(char**)((char*)this + 0x8C);
	return *(float*)(internalData + 0xAC);
}

// FUNCTION: ROBLOXSTUDIO 0x00913e00
float Motor6D::getMaxVelocity()
{
	char* internalData = *(char**)((char*)this + 0x8C);
	return *(float*)(internalData + 0xD0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
