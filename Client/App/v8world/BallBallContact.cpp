#include "v8world/BallBallContact.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a4fcd0
int BallBallContact::isColliding()
{
	return *(int*)((char*)this + 0x2C) != 0;
}

} // namespace RBX

#include <intrin.h>

extern "C" __declspec(dllimport) int __stdcall SetEvent(void* hEvent);

namespace RBX {

struct BallBallContactFreeList
{
	void* head;
	int unk4;
	int unk8;
	int unkC;

	void* allocate();
};

struct BallBallContactPool
{
	volatile long state;
	void* unk4;
	BallBallContactFreeList freeList;

	void acquire();
	void* getWakeEvent();
};

BallBallContactPool* getBallBallContactPool();

// FUNCTION: ROBLOXSTUDIO 0x00a4f940
void* BallBallContact::allocate()
{
	BallBallContactPool* pool = getBallBallContactPool();
	pool->acquire();

	void* node = pool->freeList.head;
	if (node)
	{
		pool->freeList.head = *(void**)node;
	}
	else
	{
		node = pool->freeList.allocate();
	}

	long oldState = _InterlockedExchangeAdd(&pool->state, 0x80000000);
	if (!(oldState & 0x40000000) && oldState > (long)0x80000000)
	{
		if (!_interlockedbittestandset(&pool->state, 30))
		{
			SetEvent(pool->getWakeEvent());
		}
	}

	return node;
}

// FUNCTION: ROBLOXSTUDIO 0x00a4f9a0
void* BallBallContact::allocateFromPool()
{
	BallBallContactPool* pool = getBallBallContactPool();
	pool->acquire();

	void* node = pool->freeList.head;
	if (node)
	{
		pool->freeList.head = *(void**)node;
	}
	else
	{
		node = pool->freeList.allocate();
	}

	long oldState = _InterlockedExchangeAdd(&pool->state, 0x80000000);
	if (!(oldState & 0x40000000) && oldState > (long)0x80000000)
	{
		if (!_interlockedbittestandset(&pool->state, 30))
		{
			SetEvent(pool->getWakeEvent());
		}
	}

	return node;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
