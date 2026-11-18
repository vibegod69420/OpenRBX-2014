#include "v8kernel/btSphereShape.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00596500
int btSphereShape::getConst17002028() const
{
	return 17002028;
}

// FUNCTION: ROBLOXSTUDIO 0x00596510
float btSphereShape::getRadius() const
{
	float result = *(const float*)((const char*)this + 0x20) * *(const float*)((const char*)this + 0x10);
	return result;
}

// AUTO-GENERATED IMPLEMENTATIONS


