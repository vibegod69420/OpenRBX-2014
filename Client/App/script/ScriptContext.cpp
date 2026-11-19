#include "script/ScriptContext.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008cfbc0
struct ScriptContextUnlinkHelper
{
	void __thiscall unlink(void** it, void* value, void* state);
};

void __cdecl ScriptContextDeleteState(void* state);

void ScriptContext::closeState()
{
	void* it;
	void* state = *(void**)this;

	((ScriptContextUnlinkHelper*)this)->unlink(&it, *(void**)state, state);
	ScriptContextDeleteState(*(void**)this);
}

// FUNCTION: ROBLOXSTUDIO 0x008cfc20
void ScriptContext::close()
{
	void* it;
	void* state = *(void**)this;

	((ScriptContextUnlinkHelper*)this)->unlink(&it, *(void**)state, state);
	ScriptContextDeleteState(*(void**)this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
