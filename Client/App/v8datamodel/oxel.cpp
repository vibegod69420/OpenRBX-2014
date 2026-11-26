#include "v8datamodel/oxel.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00814510
struct OxelRefCount
{
	virtual ~OxelRefCount();
	virtual void release();
	virtual void dispose();
	int unknown4;
	volatile long refCount;
};

struct OxelNode
{
	OxelNode* next;
	OxelNode* prev;
	int unknown8;
	OxelRefCount* refCount;
};

extern "C" long __cdecl _InterlockedDecrement(long volatile* lpAddend);

void oxel::clear()
{
	OxelNode* head = *(OxelNode**)this;
	OxelNode* cur = head->next;
	head->next = head;
	head = *(OxelNode**)this;
	head->prev = head;
	((int*)this)[1] = 0;

	if (cur != *(OxelNode**)this)
	{
		do
		{
			OxelRefCount* rc = cur->refCount;
			OxelNode* next = cur->next;
			if (rc)
			{
				if (_InterlockedDecrement(&rc->refCount) == 0)
					rc->dispose();
			}
			operator delete(cur);
			cur = next;
		}
		while (cur != *(OxelNode**)this);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
