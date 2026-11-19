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

struct PlayerListNode
{
	PlayerListNode* next;
	PlayerListNode* prev;
};

struct PlayerListNodeData
{
	void destroy();
};

struct PlayersListLayout
{
	PlayerListNode* head;
	int size;
};

// FUNCTION: ROBLOXSTUDIO 0x00c2cf10
void Players::func00c2cf10()
{
	PlayersListLayout* list = (PlayersListLayout*)this;
	PlayerListNode* node = list->head->next;
	list->head->next = list->head;
	list->head->prev = list->head;
	list->size = 0;

	if (node != list->head)
	{
		PlayerListNode* next;
		do
		{
			next = node->next;
			((PlayerListNodeData*)(node + 1))->destroy();
			::operator delete(node);
			node = next;
		}
		while (next != list->head);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
