#include "v8datamodel/GuiService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00af9e60
struct GuiServiceNode
{
	GuiServiceNode* next;
	GuiServiceNode* prev;
};

void rbx_delete(void* ptr);

struct GuiServiceListOps
{
	void erase(GuiServiceNode** result, GuiServiceNode* first, GuiServiceNode* last);
};

void GuiService::_Tidy()
{
	GuiServiceNode* result;
	((GuiServiceListOps*)this)->erase(&result, (*(GuiServiceNode**)this)->next, *(GuiServiceNode**)this);
	rbx_delete(*(GuiServiceNode**)this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
