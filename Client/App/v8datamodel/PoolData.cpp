#include "v8datamodel/PoolData.h"

#include "decomp.h"

namespace RBX {
namespace BaseThreadPool {

// FUNCTION: ROBLOXSTUDIO 0x00a1c880
void PoolData::pop()
{
	if (*(unsigned int*)((char*)this + 0x10) != 0)
	{
		unsigned int head = *(unsigned int*)((char*)this + 8);
		void** items = *(void***)((char*)this + 4);
		void* slot = items[(head - 1) & *(unsigned int*)((char*)this + 0xC)];

		unsigned int state = *(unsigned int*)slot;
		if (state != 0)
		{
			if ((state & 1) == 0)
			{
				state &= ~1u;
				void* data = (char*)slot + 8;
				void (*fn)(void*, void*, int) = *(void (**)(void*, void*, int))state;
				if (fn != 0)
					fn(data, data, 2);
			}
			*(unsigned int*)slot = 0;
		}

		if (--*(unsigned int*)((char*)this + 0x10) == 0)
		{
			*(unsigned int*)((char*)this + 0xC) = 0;
			return;
		}
		++*(unsigned int*)((char*)this + 0xC);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace BaseThreadPool
} // namespace RBX
