#include "Network/ClientReplicator.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00ca97e0
struct ClientReplicatorSendDataOutTarget
{
    void sendDataOut();
};

void ClientReplicator::sendDataOutStep()
{
    if (*reinterpret_cast<const unsigned char*>(reinterpret_cast<const char*>(this) + 0x45DC) != 0)
    {
        return reinterpret_cast<ClientReplicatorSendDataOutTarget*>(this)->sendDataOut();
    }
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
