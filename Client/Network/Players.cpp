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

__declspec(dllimport) void* __cdecl allocationFailure();

// FUNCTION: ROBLOXSTUDIO 0x00c27ce0
Players::Players()
{
	*(volatile int*)((int*)this + 0) = 0;
	*(int*)((int*)this + 1) = 0;
	*(int*)((int*)this + 2) = 0;
	*(int*)((int*)this + 3) = 0;
	*(int*)((int*)this + 4) = 0;

	void* head = ::operator new(8);
	if (head == 0)
		head = allocationFailure();

	*(int*)this = (int)head;
	*(volatile int*)head = 0;
	*((int*)head + 1) = 0;
	*(int*)*(int*)this = (int)this;

	*(int*)((int*)this + 5) = 0;
	*(int*)((int*)this + 6) = 0;
}

struct PlayersListSub
{
	void* head;
	int size;
	void func00c2ce90();
};

struct PlayersStringMember
{
	union
	{
		char* ptr;
		char buf[16];
	};
	unsigned int size;
	unsigned int capacity;
};

// FUNCTION: ROBLOXSTUDIO 0x00c286f0
void Players::func00c286f0()
{
	((PlayersListSub*)((char*)this + 0x3C))->func00c2ce90();
	::operator delete(((PlayersListSub*)((char*)this + 0x3C))->head);

	if (((PlayersStringMember*)((char*)this + 0x24))->capacity >= 0x10)
		::operator delete(((PlayersStringMember*)((char*)this + 0x24))->ptr);
	((PlayersStringMember*)((char*)this + 0x24))->capacity = 0x0F;
	((PlayersStringMember*)((char*)this + 0x24))->size = 0;
	((PlayersStringMember*)((char*)this + 0x24))->buf[0] = 0;

	if (((PlayersStringMember*)((char*)this + 0x04))->capacity >= 0x10)
		::operator delete(((PlayersStringMember*)((char*)this + 0x04))->ptr);
	((PlayersStringMember*)((char*)this + 0x04))->capacity = 0x0F;
	((PlayersStringMember*)((char*)this + 0x04))->size = 0;
	((PlayersStringMember*)((char*)this + 0x04))->buf[0] = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
