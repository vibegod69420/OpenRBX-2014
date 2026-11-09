#include "v8datamodel/erb.h"

#include "decomp.h"

namespace RBX {
namespace VAxisRotateTool {

// FUNCTION: ROBLOXSTUDIO 0x00b97210
void* erb::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace VAxisRotateTool
} // namespace RBX
