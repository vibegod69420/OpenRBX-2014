#include "script/ScriptDebugger.h"

#include "decomp.h"

namespace RBX {
namespace Scripting {

// FUNCTION: ROBLOXSTUDIO 0x007a0c20
void* ScriptDebugger::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Scripting
} // namespace RBX
