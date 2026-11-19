#include "v8world/Block.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b9ad50
void __cdecl sub_b9c680(Block* block, void* arg);
void __cdecl sub_cf6522(void* ptr);

void __cdecl Block::destroy()
{
	if (this)
	{
		sub_b9c680(this, *(void**)((char*)this + 0x0c));
		sub_cf6522(this);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00b9ad70
void __cdecl sub_b9c7d0(Block* block, void* arg);

void __cdecl Block::destruct()
{
	if (this)
	{
		sub_b9c7d0(this, *(void**)((char*)this + 0x0c));
		sub_cf6522(this);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00b9ad90
void __cdecl sub_b9c920(Block* block, void* arg);

void __cdecl Block::release()
{
    if (this)
    {
        sub_b9c920(this, (void*)(*(int*)((char*)this + 0xc)));
        sub_cf6522(this);
    }
}

struct BlockPool
{
	long state;
	void* event;
	void* freeList;
};

void* __cdecl sub_640b30();
void __fastcall sub_40ed30(void*);
void* __fastcall sub_48af30(void*);
void* __fastcall sub_40fb10(void*);

extern "C" long _InterlockedExchangeAdd(long volatile* Addend, long Value);
extern "C" unsigned char _interlockedbittestandset(long volatile* Base, long Offset);
#pragma intrinsic(_InterlockedExchangeAdd, _interlockedbittestandset)

__declspec(dllimport) int __stdcall SetEvent(void* hEvent);

// FUNCTION: ROBLOXSTUDIO 0x00b9c3d0
Block* Block::allocate()
{
	BlockPool* pool = (BlockPool*)sub_640b30();
	sub_40ed30(pool);

	void* block = pool->freeList;
	if (block)
		pool->freeList = *(void**)block;
	else
		block = sub_48af30(&pool->freeList);

	long oldState = _InterlockedExchangeAdd((long volatile*)&pool->state, 0x80000000);
	if ((oldState & 0x40000000) == 0 && oldState > (long)0x80000000)
	{
		if (_interlockedbittestandset((long volatile*)&pool->state, 30) == 0)
		{
			SetEvent(sub_40fb10(pool));
		}
	}

	return (Block*)block;
}

void* __cdecl sub_640ba0();

// FUNCTION: ROBLOXSTUDIO 0x00b9c430
Block* Block::allocate2()
{
	BlockPool* pool = (BlockPool*)sub_640ba0();
	sub_40ed30(pool);

	void* block = pool->freeList;
	if (block)
		pool->freeList = *(void**)block;
	else
		block = sub_48af30(&pool->freeList);

	long oldState = _InterlockedExchangeAdd((long volatile*)&pool->state, 0x80000000);
	if ((oldState & 0x40000000) == 0 && oldState > (long)0x80000000)
	{
		if (_interlockedbittestandset((long volatile*)&pool->state, 30) == 0)
		{
			SetEvent(sub_40fb10(pool));
		}
	}

	return (Block*)block;
}

void* __cdecl sub_b9c1b0();

// FUNCTION: ROBLOXSTUDIO 0x00b9c490
Block* Block::allocate3()
{
	BlockPool* pool = (BlockPool*)sub_b9c1b0();
	sub_40ed30(pool);

	void* block = pool->freeList;
	if (block)
		pool->freeList = *(void**)block;
	else
		block = sub_48af30(&pool->freeList);

	long oldState = _InterlockedExchangeAdd((long volatile*)&pool->state, 0x80000000);
	if ((oldState & 0x40000000) == 0 && oldState > (long)0x80000000)
	{
		if (_interlockedbittestandset((long volatile*)&pool->state, 30) == 0)
		{
			SetEvent(sub_40fb10(pool));
		}
	}

	return (Block*)block;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
