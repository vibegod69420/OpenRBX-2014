#include "Network/SharedStringDictionary.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c84730
void SharedStringDictionary::freeMember0C()
{
	rbx_free_mem(alloc_000c);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
