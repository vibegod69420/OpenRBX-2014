#include "v8datamodel/PluginMouse.h"

#include "decomp.h"

namespace RBX {

struct PluginMouseCtorBase
{
	void ctor();
};

// FUNCTION: ROBLOXSTUDIO 0x00b1acd0
PluginMouse::PluginMouse()
{
	((PluginMouseCtorBase*)this)->ctor();
	*(void**)this = (void*)0x00EC5754;
	*(void**)((char*)this + 4) = (void*)0x00EC5804;
	*(void**)((char*)this + 0x18) = (void*)0x00EC580C;
	*(void**)((char*)this + 0x1C) = (void*)0x00EC5818;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
