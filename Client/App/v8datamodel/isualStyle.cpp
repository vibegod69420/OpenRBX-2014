#include "v8datamodel/isualStyle.h"

#include "decomp.h"

namespace RBX {
namespace Handles {

// FUNCTION: ROBLOXSTUDIO 0x0080df70
void* isualStyle::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Handles
} // namespace RBX
