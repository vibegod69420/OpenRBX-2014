#include "v8world/BallBallContact.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a4fcd0
int BallBallContact::isColliding()
{
	return *(int*)((char*)this + 0x2C) != 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
