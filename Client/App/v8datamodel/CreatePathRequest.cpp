#include "v8datamodel/CreatePathRequest.h"

#include "decomp.h"

namespace RBX {
namespace PathfindingService {

// FUNCTION: ROBLOXSTUDIO 0x00a86880
void* CreatePathRequest::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace PathfindingService
} // namespace RBX
