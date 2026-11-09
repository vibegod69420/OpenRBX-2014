#include "script/WeakThreadRef.h"

#include "decomp.h"

namespace RBX {
namespace Lua {

// FUNCTION: ROBLOXSTUDIO 0x0043eae0
void* WeakThreadRef::scalarDeletingDestructorImp(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem_imp(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
