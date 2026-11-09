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

// FUNCTION: ROBLOXSTUDIO 0x0086c470
void* WeakFunctionRef::scalarDeletingDestructor_c470(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0086c4a0
void* WeakFunctionRef::scalarDeletingDestructor_c4a0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
