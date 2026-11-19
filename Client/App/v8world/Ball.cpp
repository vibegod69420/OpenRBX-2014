#include "v8world/Ball.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0099d2f0
float Ball::getGridVolume() const
{
	return *(const float*)((const char*)this + 0x14);
}

class Primitive;
Primitive* getPrimitiveFromBall(const Ball*);

// FUNCTION: ROBLOXSTUDIO 0x0099d070
Primitive* Ball::getPrimitive() const
{
	return getPrimitiveFromBall(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
