#include "v8world/Ball.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0099d2f0
float Ball::getGridVolume() const
{
	return *(const float*)((const char*)this + 0x14);
}

class Primitive;
Primitive* getPrimitiveFromBall(const Ball*);

// FUNCTION: ROBLOXSTUDIO 0x0099d070
Primitive* Ball::getPrimitive() const
{
	return getPrimitiveFromBall(this);
}

#include <intrin.h>

struct BallPool {
	volatile long state;
	void* event;
	void* head;

	void acquire();
	void* wake();
};

struct BallPoolHead {
	void* alloc();
};

BallPool* getBallPoolSingleton();
extern "C" __declspec(dllimport) void __stdcall BallPoolReleaseEvent(void*);

// FUNCTION: ROBLOXSTUDIO 0x0099daf0
void* Ball::allocateFromPool()
{
	BallPool* pool = getBallPoolSingleton();
	pool->acquire();

	void* node = pool->head;
	if (node)
	{
		pool->head = *(void**)node;
	}
	else
	{
		node = ((BallPoolHead*)&pool->head)->alloc();
	}

	long old = _InterlockedExchangeAdd(&pool->state, (long)0x80000000);
	if (!(old & 0x40000000) && old > (long)0x80000000)
	{
		if (!_interlockedbittestandset(&pool->state, 0x1e))
		{
			void* h = pool->wake();
			BallPoolReleaseEvent(h);
		}
	}

	return node;
}

void ballKernelPairHelper(Ball*, Ball*);

// FUNCTION: ROBLOXSTUDIO 0x0099de10
void __cdecl Ball::ballKernelPair(Ball* b)
{
	ballKernelPairHelper(this, b);
	ballKernelPairHelper(b, this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
