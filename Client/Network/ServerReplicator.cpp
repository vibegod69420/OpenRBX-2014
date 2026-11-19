#include "Network/ServerReplicator.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c53ce0
int ServerReplicator::getField46AC() const
{
	return field_46ac;
}

// FUNCTION: ROBLOXSTUDIO 0x00cb94e0
int ServerReplicator::getGlobal_94e0() const
{
	return s_value_00cb94e0;
}

// FUNCTION: ROBLOXSTUDIO 0x00c85cb0
void* ServerReplicator::getPtr1E90() const
{
    if (*(const int*)((const char*)this + 0xea8) != 0)
        return (void*)((char*)this + 0x1e90);
    return 0;
}

class ReplicatorPeer
{
public:
	bool isPeer(void* peer);
};

void* getPeerContext();

// FUNCTION: ROBLOXSTUDIO 0x00cb97e0
void* ServerReplicator::getReplicator() const
{
	ReplicatorPeer* peer = *(ReplicatorPeer**)((char*)this + 0x0C);
	if (peer->isPeer(getPeerContext()))
		return (char*)this - 0x1C;
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
