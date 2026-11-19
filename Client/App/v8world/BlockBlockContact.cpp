#include "v8world/BlockBlockContact.h"

#include "decomp.h"

namespace RBX {

extern "C" long __cdecl _InterlockedExchangeAdd(long volatile* Addend, long Value);
extern "C" unsigned char __cdecl _interlockedbittestandset(long volatile* a, long b);
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_interlockedbittestandset)

extern "C" __declspec(dllimport) long __stdcall SetEvent(void* hEvent);

struct BlockBlockContactNode
{
	BlockBlockContactNode* next;
};

struct BlockBlockContactFreeList
{
	BlockBlockContactNode* head;
	BlockBlockContactNode* allocateSlow();
};

struct BlockBlockContactPool
{
	volatile long state;
	void* event;
	BlockBlockContactFreeList list;

	void lock();
	void* getEvent();
};

BlockBlockContactPool* getBlockBlockContactAllocator();

// FUNCTION: ROBLOXSTUDIO 0x00b4d660
void* BlockBlockContact::allocate()
{
	BlockBlockContactPool* allocator = getBlockBlockContactAllocator();
	allocator->lock();

	BlockBlockContactNode* node = allocator->list.head;
	if (node)
	{
		allocator->list.head = node->next;
	}
	else
	{
		node = allocator->list.allocateSlow();
	}

	long oldState = _InterlockedExchangeAdd(&allocator->state, 0x80000000);
	if ((oldState & 0x40000000) == 0)
	{
		if (oldState > (long)0x80000000)
		{
			if (!_interlockedbittestandset(&allocator->state, 30))
			{
				void* ev = allocator->getEvent();
				SetEvent(ev);
			}
		}
	}

	return node;
}

// FUNCTION: ROBLOXSTUDIO 0x00b4d720
void* BlockBlockContact::allocate(unsigned int size)
{
	BlockBlockContactPool* allocator = getBlockBlockContactAllocator();
	allocator->lock();

	BlockBlockContactNode* node = allocator->list.head;
	if (node)
	{
		allocator->list.head = node->next;
	}
	else
	{
		node = allocator->list.allocateSlow();
	}

	long oldState = _InterlockedExchangeAdd(&allocator->state, 0x80000000);
	if ((oldState & 0x40000000) == 0)
	{
		if (oldState > (long)0x80000000)
		{
			if (!_interlockedbittestandset(&allocator->state, 30))
			{
				void* ev = allocator->getEvent();
				SetEvent(ev);
			}
		}
	}

	return node;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
