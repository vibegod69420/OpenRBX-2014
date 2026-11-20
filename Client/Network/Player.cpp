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

// FUNCTION: ROBLOXSTUDIO 0x00c4a1a0
int Player::getField1E4() const
{
	return field_01e4;
}

typedef bool (__cdecl *FrontendProcessingAssertCallback)(const char*, const char*, int);

extern unsigned char g_FrontendProcessingEnabled;
extern FrontendProcessingAssertCallback g_FrontendProcessingAssertCallback;

bool canProcessPlayerFrontend(Player* player, int flag);
void reportFrontendProcessingFailure(int level, const char* message);

struct FrontendProcessingTimestamp
{
	int low;
	int high;
};

FrontendProcessingTimestamp* getFrontendProcessingTimestamp(FrontendProcessingTimestamp* out);

// FUNCTION: ROBLOXSTUDIO 0x00c4f590
void Player::frontendProcessing()
{
	if (g_FrontendProcessingEnabled)
	{
		if (!canProcessPlayerFrontend(this, 1))
		{
			if (g_FrontendProcessingAssertCallback)
			{
				if (!g_FrontendProcessingAssertCallback(
						"Players::frontendProcessing(this)",
						"D:\\BuildAgent\\work\\Trunk2012\\Client\\Network\\Player.cpp",
						0x3B3))
				{
					reportFrontendProcessingFailure(
						g_FrontendProcessingEnabled,
						"Players::frontendProcessing(this) file: D:\\BuildAgent\\work\\Trunk2012\\Client\\Network\\Player.cpp line: 947");
				}
			}
			else
			{
				reportFrontendProcessingFailure(
					g_FrontendProcessingEnabled,
					"Players::frontendProcessing(this) file: D:\\BuildAgent\\work\\Trunk2012\\Client\\Network\\Player.cpp line: 947");
			}
		}
	}

	FrontendProcessingTimestamp timestamp;
	FrontendProcessingTimestamp* pTime = getFrontendProcessingTimestamp(&timestamp);
	*(int*)((char*)this + 0x1D0) = pTime->low;
	*(int*)((char*)this + 0x1D4) = pTime->high;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
