#include "Network/NetworkOwnerJob.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c67970
void* NetworkOwnerJob::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
