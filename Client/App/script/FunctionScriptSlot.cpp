#include "script/FunctionScriptSlot.h"

#include "decomp.h"

namespace RBX {
namespace Lua {

// FUNCTION: ROBLOXSTUDIO 0x00b83e40
void* FunctionScriptSlot::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
