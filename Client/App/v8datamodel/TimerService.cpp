#include "v8datamodel/TimerService.h"

#include "decomp.h"

namespace RBX {

struct TimerServiceNode
{
	TimerServiceNode* next;
	TimerServiceNode* prev;
	int pad8;
	int padC;
	void* callback; // 0x10
	int pad14;
};

// FUNCTION: ROBLOXSTUDIO 0x00aaef00
void TimerService::clearTimers()
{
	TimerServiceNode* cur = (*(TimerServiceNode**)this)->next;
	(*(TimerServiceNode**)this)->next = *(TimerServiceNode**)this;
	(*(TimerServiceNode**)this)->prev = *(TimerServiceNode**)this;
	*(int*)((char*)this + 4) = 0;

	if (cur != *(TimerServiceNode**)this)
	{
		do
		{
			TimerServiceNode* next = cur->next;
			void* cb = cur->callback;
			if (cb)
			{
				if (((unsigned int)cb & 1) == 0)
				{
					void* storage = (char*)cur + 0x18;
					void* fn = *(void**)((unsigned int)cb & ~1u);
					if (fn)
						((void (*)(void*, void*, int))fn)(storage, storage, 2);
				}
				cur->callback = 0;
			}
			::operator delete(cur);
			cur = next;
		} while (cur != *(TimerServiceNode**)this);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
