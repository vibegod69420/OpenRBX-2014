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

// FUNCTION: ROBLOXSTUDIO 0x00913e10
float Motor6D::getAngle()
{
	char* internalData = *(char**)((char*)this + 0x8C);
	return *(float*)(internalData + 0xA8);
}

// FUNCTION: ROBLOXSTUDIO 0x00913d10
float Motor6D::getTargetAngle()
{
    char* internalData = *(char**)((char*)this + 0x8C);
    return *(float*)(internalData + 0xD4);
}

int __cdecl sub_7B3B40();

// FUNCTION: ROBLOXSTUDIO 0x00913fc0
const char* Motor6D::getClassName()
{
	return (const char*)(sub_7B3B40() + 4);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
