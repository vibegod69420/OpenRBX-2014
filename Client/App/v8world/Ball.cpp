#include "v8world/Ball.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0099d2f0
float Ball::getGridVolume() const
{
	return *(const float*)((const char*)this + 0x14);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
