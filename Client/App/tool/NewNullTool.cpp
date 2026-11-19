#include "tool/NewNullTool.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b9ecf0
struct NewNullTool_UnlinkHelper
{
	void __thiscall unlink(void* out, void* a, void* b);
};

void __cdecl NewNullTool_stub_delete(void* ptr);

void NewNullTool::clear()
{
	void* local;
	void* p = *(void**)this;
	((NewNullTool_UnlinkHelper*)this)->unlink(&local, *(void**)p, p);
	NewNullTool_stub_delete(*(void**)this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
