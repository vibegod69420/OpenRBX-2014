#include "Network/TopNErrorsPhysicsSender.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00ce1130
void* TopNErrorsPhysicsSender::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
