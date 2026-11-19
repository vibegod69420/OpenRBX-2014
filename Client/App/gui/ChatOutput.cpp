#include "gui/ChatOutput.h"

#include "decomp.h"

namespace RBX {

struct ChatOutputNode
{
	ChatOutputNode* next;
	ChatOutputNode* prev;
};

struct ChatOutputListOps
{
	void Unlink(void* it, ChatOutputNode* first, ChatOutputNode* last);
};

// FUNCTION: ROBLOXSTUDIO 0x00bfcdf0
ChatOutput::~ChatOutput()
{
	void* it;
	ChatOutputNode* head = *(ChatOutputNode**)this;
	((ChatOutputListOps*)this)->Unlink(&it, head->next, head);
	operator delete(*(void**)this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
