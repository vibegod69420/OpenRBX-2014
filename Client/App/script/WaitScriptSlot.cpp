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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
