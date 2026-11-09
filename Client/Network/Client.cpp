#include "Network/Client.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c95990
void* Client::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
