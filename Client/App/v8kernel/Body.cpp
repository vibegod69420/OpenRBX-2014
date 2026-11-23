#include "v8kernel/Body.h"

#include "decomp.h"

namespace RBX {

static int s_nextStateIndex;

// FUNCTION: ROBLOXSTUDIO 0x00ba8ed0
void Body::advanceStateIndex()
{
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xA0) = ++s_nextStateIndex;
}

#include <intrin.h>

#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_interlockedbittestandset)

struct BodyPool
{
	static BodyPool* get();
	void lock();
	void* allocSlow();
	void* getWakeEvent();
};

extern "C" __declspec(dllimport) long __stdcall SetEvent(void* hEvent);

// FUNCTION: ROBLOXSTUDIO 0x00ba9710
void* Body::allocFromPool()
{
	BodyPool* pool = BodyPool::get();
	pool->lock();

	void* node = *(void**)((char*)pool + 8);
	if (node)
	{
		*(void**)((char*)pool + 8) = *(void**)node;
	}
	else
	{
		node = ((BodyPool*)((char*)pool + 8))->allocSlow();
	}

	long oldState = _InterlockedExchangeAdd((long volatile*)pool, 0x80000000);
	if ((oldState & 0x40000000) == 0)
	{
		if (oldState > (long)0x80000000)
		{
			if (_interlockedbittestandset((long volatile*)pool, 30) == 0)
			{
				SetEvent(pool->getWakeEvent());
			}
		}
	}

	return node;
}

// FUNCTION: ROBLOXSTUDIO 0x00ba9770
void* Body::allocateFromPool()
{
	BodyPool* pool = BodyPool::get();
	pool->lock();

	void* node = *(void**)((char*)pool + 8);
	if (node)
	{
		*(void**)((char*)pool + 8) = *(void**)node;
	}
	else
	{
		node = ((BodyPool*)((char*)pool + 8))->allocSlow();
	}

	long oldState = _InterlockedExchangeAdd((long volatile*)pool, 0x80000000);
	if ((oldState & 0x40000000) == 0)
	{
		if (oldState > (long)0x80000000)
		{
			if (_interlockedbittestandset((long volatile*)pool, 30) == 0)
			{
				SetEvent(pool->getWakeEvent());
			}
		}
	}

	return node;
}

// FUNCTION: ROBLOXSTUDIO 0x00ba92b0
int Body::getNextStateIndex()
{
	return ++s_nextStateIndex;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
