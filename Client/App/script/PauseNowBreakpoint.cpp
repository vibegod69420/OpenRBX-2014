#include "script/PauseNowBreakpoint.h"

#include "decomp.h"

namespace RBX {
namespace Scripting {

// FUNCTION: ROBLOXSTUDIO 0x007a0f10
void* PauseNowBreakpoint::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x007a0f40
void* PauseNowBreakpoint::scalarDeletingDestructor_0f40(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Scripting
} // namespace RBX
