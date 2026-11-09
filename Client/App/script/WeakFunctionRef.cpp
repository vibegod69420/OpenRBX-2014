#include "script/WeakFunctionRef.h"

#include "decomp.h"

namespace RBX {
namespace Lua {

// FUNCTION: ROBLOXSTUDIO 0x0086c4d0
void* WeakFunctionRef::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
