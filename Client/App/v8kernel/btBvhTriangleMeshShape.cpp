#include "btBvhTriangleMeshShape.h"

// FUNCTION: ROBLOXSTUDIO 0x0059b8a0
const char* btBvhTriangleMeshShape::getName() const
{
	return "BVHTRIANGLEMESH";
}

// FUNCTION: ROBLOXSTUDIO 0x0059b8b0
int btBvhTriangleMeshShape::calculateSerializeBufferSize() const
{
	return 0x3c;
}

// FUNCTION: ROBLOXSTUDIO 0x005b87e0
void* btBvhTriangleMeshShape::getField30Plus10() const
{
	return (char*)*(void* const*)((const char*)this + 0x30) + 0x10;
}
