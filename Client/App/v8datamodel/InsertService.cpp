#include "v8datamodel/InsertService.h"

#include "decomp.h"

namespace RBX {

struct ListNode
{
	void unlink(void* iter, void* next, void* node);
};

// FUNCTION: ROBLOXSTUDIO 0x009a8f70
void InsertService::remove()
{
	void* iter;
	void* head = *(void**)this;
	((ListNode*)this)->unlink(&iter, *(void**)head, head);
	operator delete(*(void**)this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
