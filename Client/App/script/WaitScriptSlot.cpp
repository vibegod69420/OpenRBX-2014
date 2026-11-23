#include "script/WaitScriptSlot.h"

#include "decomp.h"

namespace RBX {
namespace Lua {

void waitScriptSlotAux(void*, const char*, int);

// FUNCTION: ROBLOXSTUDIO 0x00b850e0
int __cdecl WaitScriptSlot::execute(void* L)
{
	waitScriptSlotAux(L, "GenericAsyncFunction", 20);
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00b85100
int __cdecl WaitScriptSlot::executeConnection(void* L)
{
	waitScriptSlotAux(L, "Connection", 10);
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00b850a0
int __cdecl WaitScriptSlot::executeWeakThreadRef(void* L)
{
	waitScriptSlotAux(L, "WeakThreadRef", 13);
	return 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
