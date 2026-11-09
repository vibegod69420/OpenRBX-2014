#include "Network/SharedStringProtectedDictionary.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c84740
void SharedStringProtectedDictionary::destroySubPtr0C()
{
	SharedStringProtectedDictionary* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
