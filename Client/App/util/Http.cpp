#include "util/Http.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b8a2f0
void Http::destroySubPtr0C()
{
	Http* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

struct HttpListNode
{
	HttpListNode* next;
	HttpListNode* prev;
};

struct HttpNodeData
{
	void destroy();
};

// FUNCTION: ROBLOXSTUDIO 0x00b89f40
void Http::clear()
{
	HttpListNode* head = *(HttpListNode**)this;
	HttpListNode* node = head->next;
	head->next = head;
	head = *(HttpListNode**)this;
	head->prev = head;
	*(int*)((char*)this + 4) = 0;

	if (node != *(HttpListNode**)this)
	{
		HttpListNode* next;
		do
		{
			next = node->next;
			((HttpNodeData*)((char*)node + 8))->destroy();
			rbx_free_mem(node);
			node = next;
		} while (node != *(HttpListNode**)this);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
