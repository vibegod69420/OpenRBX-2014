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

class NetworkPeer
{
public:
	bool contains(NetworkPeer* peer);
};

NetworkPeer* getCurrentNetworkPeer();

// FUNCTION: ROBLOXSTUDIO 0x00c3dd00
void* Player::getReplicator()
{
	NetworkPeer* peer = *(NetworkPeer**)((char*)this + 0x0C);
	if (peer->contains(getCurrentNetworkPeer()))
		return (char*)this - 0x1C;

	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00c3dd30
void* Player::getServerReplicator()
{
	NetworkPeer* peer = *(NetworkPeer**)((char*)this + 0x0C);
	if (peer->contains(getCurrentNetworkPeer()))
		return (char*)this - 0x1C;

	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
