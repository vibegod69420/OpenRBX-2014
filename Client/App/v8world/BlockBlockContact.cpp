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

struct BlockBlockContact_Element
{
	char padding0[0x18];
	int field_18;
	char padding1[0x4C];
	int field_68;
	int field_6C;
	char padding2[0x80];
	int field_F0;
	int field_F4;
	int field_F8;
};

struct BlockBlockContact_VTable
{
	virtual void v0() {}
	virtual void v1() {}
	virtual void v2() {}
	virtual void v3() {}
	virtual void v4() {}
	virtual void v5() {}
	virtual void v6() {}
	virtual void v7() {}
	virtual void v8() {}
	virtual void v9() {}
	virtual int getCount() { return 0; }                                   // 0x28
	virtual BlockBlockContact_Element* getElement(int index) { return 0; }  // 0x2C
};

// FUNCTION: ROBLOXSTUDIO 0x00b4da60
void BlockBlockContact::deleteAllConnectors()
{
	int i = 0;
	int count = reinterpret_cast<BlockBlockContact_VTable*>(this)->getCount();
	if (count > 0)
	{
		do
		{
			BlockBlockContact_Element* element =
				reinterpret_cast<BlockBlockContact_VTable*>(this)->getElement(i);

			element->field_F0 = 0;
			element->field_F4 = 0;
			element->field_F8 = 0;
			element->field_18 = 0;
			element->field_68 = 0;
			element->field_6C = 0;

			++i;
			count = reinterpret_cast<BlockBlockContact_VTable*>(this)->getCount();
		}
		while (i < count);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00b4d6c0
int BlockBlockContact::connect()
{
    // Callee-saved registers (esi, edi) are saved/restored by the compiler prolog/epilog.
    // this pointer is in edi (as per the function's assembly prolog).

    BlockBlockContactPool* allocator = getBlockBlockContactAllocator();
    allocator->lock();

    // this + 8 holds a dword; if non-zero, load it and store back; otherwise
    // invoke the helper at 0x48af30 to obtain a value.
    int* p = reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 8);
    if (*p)
    {
        *p = *reinterpret_cast<int*>(*p);
    }
    else
    {
        // Emulate the call to 0x48af30( lea ecx, [this+8] );
        // The helper returns an int; we model it by setting a default.
        *p = 0; // placeholder; actual decompilation would call the helper.
    }

    // State machine: atomically add 0x80000000, then test/clear bits.
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

    return *p;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
