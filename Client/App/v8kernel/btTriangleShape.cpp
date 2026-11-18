#include "v8kernel/btTriangleShape.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00590280
float btTriangleShape::getMargin() const
{
	return *(const float*)((const char*)this + 0x30);
}

// FUNCTION: ROBLOXSTUDIO 0x00590290
int btTriangleShape::getConst52() const
{
	return 52;
}

// AUTO-GENERATED IMPLEMENTATIONS


