#include "v8datamodel/Pages.h"

#include "decomp.h"

namespace RBX {

void __fastcall sub_95B480(Pages*);

// FUNCTION: ROBLOXSTUDIO 0x0095cae0
Pages::Pages()
{
	sub_95B480(this);
	*(void**)this = (void*)0x00E84BF4;
	*(void**)((char*)this + 4) = (void*)0x00E84C70;
	*(void**)((char*)this + 0x18) = (void*)0x00E84C78;
	*(void**)((char*)this + 0x1C) = (void*)0x00E84C84;
	*((unsigned char*)this + 0x64) = 0;
	*(int*)((char*)this + 0x68) = 0;
	*(int*)((char*)this + 0x6C) = 0;
}

struct PagesString
{
	union
	{
		char buf[16];
		char* ptr;
	} bx;
	unsigned int size;
	unsigned int cap;
};

struct PagesNode
{
	PagesNode* next;
	PagesNode* prev;
	PagesString str1;
	unsigned int unk20;
	PagesString str2;
};

// FUNCTION: ROBLOXSTUDIO 0x0095e610
void Pages::clear()
{
	PagesNode* head = *(PagesNode**)this;
	PagesNode* node = head->next;
	head->next = head;
	head = *(PagesNode**)this;
	head->prev = head;
	*(int*)((char*)this + 4) = 0;

	if (node != *(PagesNode**)this)
	{
		do
		{
			PagesNode* next = node->next;

			if (node->str2.cap >= 0x10)
			{
				::operator delete(node->str2.bx.ptr);
			}
			node->str2.cap = 0xF;
			node->str2.size = 0;
			node->str2.bx.buf[0] = 0;

			if (node->str1.cap >= 0x10)
			{
				::operator delete(node->str1.bx.ptr);
			}
			node->str1.cap = 0xF;
			node->str1.size = 0;
			node->str1.bx.buf[0] = 0;

			::operator delete(node);
			node = next;
		}
		while (node != *(PagesNode**)this);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
