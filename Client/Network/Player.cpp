#include "Network/Player.h"

#include "decomp.h"

namespace RBX {
namespace Network {

struct VftableArg
{
	void* vftable;
};

class PlayerEventTarget
{
public:
	void fire(VftableArg* arg);
};

// FUNCTION: ROBLOXSTUDIO 0x00c4f740
void Player::fireEventTarget()
{
	PlayerEventTarget* target = *(PlayerEventTarget**)((char*)this + 0x64);
	if (target)
	{
		VftableArg arg;
		arg.vftable = (void*)0x00C50FA0;
		target->fire(&arg);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
