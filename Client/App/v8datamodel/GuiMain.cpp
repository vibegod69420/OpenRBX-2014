#include "v8datamodel/GuiMain.h"

#include "decomp.h"

namespace RBX {

class GuiMainListHelper
{
public:
	void unlink(void* result, void* link, void* node);
};

void __cdecl GuiMainDestroyNode(void* node);

// FUNCTION: ROBLOXSTUDIO 0x008b1720
void GuiMain::removeNode()
{
	void* local;
	void* node = (void*)_vtable_or_head;
	((GuiMainListHelper*)this)->unlink(&local, *(void**)node, node);
	GuiMainDestroyNode((void*)_vtable_or_head);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
