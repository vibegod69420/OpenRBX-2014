#include "v8datamodel/BadgeService.h"

#include "decomp.h"

namespace RBX {

struct BadgeServiceListNode
{
	BadgeServiceListNode* next;
	BadgeServiceListNode* prev;
};

struct BadgeServiceList
{
	BadgeServiceListNode* head;

	void erase(BadgeServiceListNode** it, BadgeServiceListNode* first, BadgeServiceListNode* last);
};

// FUNCTION: ROBLOXSTUDIO 0x00a5af20
BadgeService::~BadgeService()
{
	BadgeServiceListNode* it;
	BadgeServiceList* list = reinterpret_cast<BadgeServiceList*>(reinterpret_cast<char*>(this) + 4);
	list->erase(&it, list->head->next, list->head);
	::operator delete(list->head);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
