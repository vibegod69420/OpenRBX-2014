#include "Network/Players.h"

#include "decomp.h"

namespace RBX {
namespace Network {

struct PlayersListNode
{
	PlayersListNode* next;
};

struct PlayersList
{
	PlayersListNode* head;
	void unlinkRange(void* result, PlayersListNode* first, PlayersListNode* last);
};

void __cdecl operator delete(void*);

// FUNCTION: ROBLOXSTUDIO 0x00c282e0
void Players::func00c282e0()
{
	void* it;
	PlayersList* list = (PlayersList*)(&this->_vtable_or_head + 1);

	list->unlinkRange(&it, list->head->next, list->head);
	::operator delete(list->head);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
