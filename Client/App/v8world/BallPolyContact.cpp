#include "v8world/BallPolyContact.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00bd0930
int BallPolyContact::getFirstField()
{
	return _vtable_or_head;
}

extern "C" long _InterlockedExchangeAdd(long volatile* Addend, long Value);
extern "C" unsigned char _interlockedbittestandset(long volatile* Base, long Offset);
#pragma intrinsic(_InterlockedExchangeAdd, _interlockedbittestandset)

extern "C" __declspec(dllimport) long __stdcall SetEvent(void* hEvent);

struct BallPolyContactPool
{
	volatile long state;
	void* event;
	void* head;
};

extern "C" BallPolyContactPool* __cdecl BallPolyContact_getPool();
extern "C" void __fastcall BallPolyContact_lockPool(BallPolyContactPool* pool);
extern "C" void* __fastcall BallPolyContact_allocFromPool(void* headPtr);
extern "C" void* __fastcall BallPolyContact_waitPool(BallPolyContactPool* pool);

// FUNCTION: ROBLOXSTUDIO 0x00bd0c40
void* BallPolyContact::allocateContact()
{
	BallPolyContactPool* pool = BallPolyContact_getPool();
	BallPolyContact_lockPool(pool);

	void* node = pool->head;
	if (node)
		pool->head = *(void**)node;
	else
		node = BallPolyContact_allocFromPool(&pool->head);

	long oldState = _InterlockedExchangeAdd(&pool->state, 0x80000000);
	if ((oldState & 0x40000000) == 0 && oldState > (long)0x80000000)
	{
		if (_interlockedbittestandset(&pool->state, 30) == 0)
			SetEvent(BallPolyContact_waitPool(pool));
	}

	return node;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
