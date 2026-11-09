#include "v8kernel/btTriangleShape.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00590290
int btTriangleShape::getConst52() const
{
	return 52;
}

// FUNCTION: ROBLOXSTUDIO 0x00590280

inline float btTriangleShape::getFloatFromOffset(int offset) const {
    return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + offset);
}

float btTriangleShape::getFloat30() const {
    return getFloatFromOffset(0x30);
}

// AUTO-GENERATED IMPLEMENTATIONS


