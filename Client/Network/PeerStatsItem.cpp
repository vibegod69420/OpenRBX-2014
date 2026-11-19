#include "Network/PeerStatsItem.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00ca0f40
void PeerStatsItem::destroyInstance(PeerStatsItem* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

class Peer;
class PeerConnection
{
public:
	bool isLocalAddress(void* address);
};

void* getLocalAddress();

// FUNCTION: ROBLOXSTUDIO 0x00ca1840
Peer* PeerStatsItem::getPeer()
{
	PeerConnection* connection = *(PeerConnection**)((char*)this + 0x0C);
	if (connection->isLocalAddress(getLocalAddress()))
		return (Peer*)((char*)this - 0x1C);
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
