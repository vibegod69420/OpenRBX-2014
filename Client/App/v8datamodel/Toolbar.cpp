#include "v8datamodel/Toolbar.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009439b0
void* Toolbar::getRibbonTool()
{
	void* tool;
	void* target = *(void**)((char*)*(void**)((char*)this + 0x64) + 0x88);
	typedef bool (__thiscall *SlotFunc)(void*, void**);
	if ((*(SlotFunc**)target)[11](target, &tool))
		return tool;
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
