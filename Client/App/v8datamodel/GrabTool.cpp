#include "v8datamodel/GrabTool.h"

#include "decomp.h"

namespace RBX {

class GrabToolManager
{
public:
	void __declspec(dllimport) __thiscall registerTool(GrabTool* tool, void* arg, int flag);
};

extern GrabToolManager g_grabToolManager;

// FUNCTION: ROBLOXSTUDIO 0x0042f470
GrabTool* __fastcall GrabTool::init(void* arg)
{
	volatile int local;
	local = 0;
	g_grabToolManager.registerTool(this, arg, 0);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
