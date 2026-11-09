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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
