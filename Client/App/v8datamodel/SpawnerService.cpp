#include "v8datamodel/SpawnerService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00aac5b0
struct SpawnerListNode
{
	SpawnerListNode* next;
	SpawnerListNode* prev;
};

void SpawnerService::clear()
{
	SpawnerListNode* head = *(SpawnerListNode**)((char*)this + 0x68);
	SpawnerListNode* node = head->next;

	head->next = head;
	head = *(SpawnerListNode**)((char*)this + 0x68);
	head->prev = head;
	*(int*)((char*)this + 0x6c) = 0;

	if (node != *(SpawnerListNode**)((char*)this + 0x68))
	{
		do
		{
			SpawnerListNode* next = node->next;
			::operator delete(node);
			node = next;
		} while (node != *(SpawnerListNode**)((char*)this + 0x68));
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
