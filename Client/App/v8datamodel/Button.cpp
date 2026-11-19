#include "v8datamodel/Button.h"

#include "decomp.h"

namespace RBX {

struct ButtonNode
{
	ButtonNode* next;
	ButtonNode* prev;
};

struct ButtonList
{
	ButtonNode* head;
	int size;

	void clear();
	void erase(void* it, ButtonNode* first, ButtonNode* last);
};

// FUNCTION: ROBLOXSTUDIO 0x00940f60
void Button::clear()
{
	void* it;
	ButtonList* list8 = reinterpret_cast<ButtonList*>(reinterpret_cast<char*>(this) + 8);

	list8->clear();
	::operator delete(list8->head);

	ButtonList* list0 = reinterpret_cast<ButtonList*>(this);
	ButtonNode* head0 = list0->head;
	list0->erase(&it, head0->next, head0);
	::operator delete(list0->head);
}

// FUNCTION: ROBLOXSTUDIO 0x00940c80
void Button::clearLists()
{
	void* it;
	ButtonList* base = reinterpret_cast<ButtonList*>(reinterpret_cast<char*>(this) + 4);

	ButtonList* list12 = reinterpret_cast<ButtonList*>(reinterpret_cast<char*>(base) + 8);
	list12->clear();
	::operator delete(list12->head);

	ButtonNode* head = base->head;
	base->erase(&it, head->next, head);
	::operator delete(base->head);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
