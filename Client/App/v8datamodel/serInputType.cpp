#include "v8datamodel/serInputType.h"

#include "decomp.h"

namespace RBX {
namespace InputObject {

// FUNCTION: ROBLOXSTUDIO 0x0080df10
void* serInputType::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace InputObject
} // namespace RBX
