#include "v8world/MotorJoint.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00aa2d10
int MotorJoint::getConst4() const
{
	return 4;
}

#include <intrin.h>

struct MotorJoint_Pool
{
	volatile long state;
	void* field4;
	void* head;

	void lock();
	void* getEventObject();
};

struct MotorJoint_FreeList
{
	void* allocate();
};

MotorJoint_Pool* MotorJoint_getPool();

__declspec(dllimport) int __stdcall SetEvent(void* hEvent);

// FUNCTION: ROBLOXSTUDIO 0x00b8f760
void* MotorJoint::dequeueNode()
{
	MotorJoint_Pool* pool = MotorJoint_getPool();
	pool->lock();

	void* result = pool->head;
	if (result)
	{
		pool->head = *(void**)result;
	}
	else
	{
		result = ((MotorJoint_FreeList*)&pool->head)->allocate();
	}

	long prev = _InterlockedExchangeAdd(&pool->state, 0x80000000L);
	if (!(prev & 0x40000000L) && prev > (long)0x80000000L)
	{
		if (!_interlockedbittestandset(&pool->state, 30))
		{
			SetEvent(pool->getEventObject());
		}
	}

	return result;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
