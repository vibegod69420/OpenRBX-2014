#include "script/ScriptContext.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008e1fa0
void ScriptContext::resetPtr(ScriptContext* newPtr)
{
	ScriptContext* old = ptr_0000;
	ptr_0000 = newPtr;
	if (old) {
		old->onDestroy();
		rbx_free_mem(old);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x008d1ba0
void* ScriptContext::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
