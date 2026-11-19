#include "v8datamodel/FriendService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009bc990
struct FriendService_ListHelper
{
	void erase(void* it, void* next, void* node);
};

void FriendService::sub_9BC990()
{
	void* it;
	((FriendService_ListHelper*)this)->erase(&it, *(void**)_vtable_or_head, (void*)_vtable_or_head);
	delete (char*)_vtable_or_head;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
