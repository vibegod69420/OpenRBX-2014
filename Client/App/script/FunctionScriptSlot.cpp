#include "script/FunctionScriptSlot.h"

#include "decomp.h"

namespace RBX {
namespace Lua {

struct IGenericSlotDisposer
{
	virtual void operator()(int) = 0;
};

// FUNCTION: ROBLOXSTUDIO 0x00b842a0
void FunctionScriptSlot::dispose()
{
	char* base = reinterpret_cast<char*>(this);
	if (base[0x10] != 0)
	{
		IGenericSlotDisposer* disposer = reinterpret_cast<IGenericSlotDisposer*>(base + 0x14);
		disposer->operator()(0);
		base[0x10] = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Lua
} // namespace RBX
