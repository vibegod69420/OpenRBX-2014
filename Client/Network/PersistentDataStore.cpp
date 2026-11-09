#include "Network/PersistentDataStore.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x009498c0
void PersistentDataStore::destroyInstance(PersistentDataStore* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
