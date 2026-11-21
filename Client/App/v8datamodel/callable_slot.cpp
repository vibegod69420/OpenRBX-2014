#include "v8datamodel/callable_slot.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00496260
int __cdecl callable_slot::invoke()
{
	struct callable_data
	{
		int* (__cdecl* func)(void*);
		void* param;
	};

	callable_data* data = (callable_data*)this;
	return *data->func(data->param);
}

// FUNCTION: ROBLOXSTUDIO 0x00930600
float __cdecl callable_slot::invoke_float()
{
	struct callable_data
	{
		float* (__cdecl* func)(void*);
		void* param;
	};

	callable_data* data = (callable_data*)this;
	return *data->func(data->param);
}

// FUNCTION: ROBLOXSTUDIO 0x00496100
void* __cdecl callable_slot::get()
{
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00b655f0
int callable_slot::size()
{
	int** data = (int**)this;
	return data[1] - data[0];
}

// FUNCTION: ROBLOXSTUDIO 0x0076faf0
int callable_slot::notEmpty()
{
	int* data = (int*)this;
	int value = data[3];
	return value != data[4];
}

void __cdecl callable_slot_manage(void* slot, int state);

// FUNCTION: ROBLOXSTUDIO 0x00966340
void __cdecl callable_slot::clear()
{
	callable_slot_manage(this, 0);
}

// FUNCTION: ROBLOXSTUDIO 0x00cbf3c0
bool callable_slot::hasValue()
{
	if (*(unsigned int*)((char*)this + 0x878) > 0)
		return true;

	int result = 0;
	return *(int*)((char*)this + 0x990) != result;
}

__declspec(dllimport) void __stdcall callable_slot_dispatch(void* slot, int arg2, int flags, void* pArg1, int size);

// FUNCTION: ROBLOXSTUDIO 0x00cc4c40
void __cdecl callable_slot::dispatch(int arg1, int arg2)
{
	callable_slot_dispatch(this, arg2, 14, &arg1, 4);
}

// FUNCTION: ROBLOXSTUDIO 0x00b19460
void* callable_slot::resolve()
{
	void** vtable = *(void***)this;
	void* entry = vtable[7];
	if (entry)
	{
		*(void**)this = (char*)entry - 0x1c;
		return this;
	}
	*(void**)this = 0;
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00cc0fc0
int __cdecl callable_slot::compare(void* arg)
{
	unsigned short left = *(unsigned short*)this;
	void* ptr = *(void**)arg;
	ptr = *(void**)((char*)ptr + 8);
	ptr = *(void**)ptr;
	unsigned short right = *(unsigned short*)((char*)ptr + 0xE);

	if (left < right)
		return -1;
	return left != right;
}

class callable_slot_node
{
public:
	char pad[0x38];
	callable_slot_node* field_38;

	bool __thiscall sub_532480(callable_slot_node* target);
};

callable_slot_node* __cdecl sub_865D20(callable_slot_node* node);

// FUNCTION: ROBLOXSTUDIO 0x0076fb00
bool __cdecl callable_slot::isReachable()
{
	callable_slot_node* node = (callable_slot_node*)this;
	callable_slot_node* target = sub_865D20(node);

	if (target)
	{
		callable_slot_node* parent = node->field_38;
		if (target == parent || (parent && parent->sub_532480(target)))
			return true;
	}

	return false;
}

__declspec(dllimport) void* __stdcall callable_slot_resolve(void* slot);
__declspec(dllimport) int __stdcall callable_slot_execute(void* value);

// FUNCTION: ROBLOXSTUDIO 0x00cc47e0
int __cdecl callable_slot::runSlot()
{
	void* p = callable_slot_resolve(this);
	if (p)
	{
		void* v = *(void**)((char*)p + 0x0C);
		v = *(void**)v;
		if (v)
			return callable_slot_execute(*(void**)v);
	}
	return 0;
}

struct callable_slot_string_cmp
{
	int __thiscall compare(const char* str, int pos, int len);
};

// FUNCTION: ROBLOXSTUDIO 0x009d62c0
bool __cdecl callable_slot::getEffectId(int* out)
{
	if (((callable_slot_string_cmp*)this)->compare("Poison", 0, 6))
	{
		*out = 0;
		return true;
	}
	if (((callable_slot_string_cmp*)this)->compare("Confusion", 0, 9))
	{
		*out = 1;
		return true;
	}
	return false;
}

struct callable_slot_element_40
{
	char pad[0x40];
	void __thiscall destroy();
};

__declspec(dllimport) void __cdecl callable_slot_guard_0xe10268();
void __cdecl callable_slot_free_0xcf6522(void*);

// FUNCTION: ROBLOXSTUDIO 0x00658710
void callable_slot::destroyElements()
{
	if (*(char**)this == 0)
		return;

	callable_slot_guard_0xe10268();

	char* end = *(char**)((char*)this + 4);
	char* it = *(char**)this;
	if (it != end)
	{
		do
		{
			((callable_slot_element_40*)it)->destroy();
			it += 0x40;
		} while (it != end);
	}

	callable_slot_free_0xcf6522(*(void**)this);
	*(void**)this = 0;
	*(void**)((char*)this + 4) = 0;
	*(void**)((char*)this + 8) = 0;
}

struct callable_slot_element_70
{
	char pad[0x70];
	void __thiscall destroy();
};

// FUNCTION: ROBLOXSTUDIO 0x008d2730
void callable_slot::destroyEntries()
{
	if (*(void**)this == 0)
		return;

	callable_slot_guard_0xe10268();

	char* end = *(char**)((char*)this + 4);
	char* it = *(char**)this;
	if (it != end)
	{
		do
		{
			((callable_slot_element_70*)it)->destroy();
			it += 0x70;
		} while (it != end);
	}

	callable_slot_free_0xcf6522(*(void**)this);
	*(void**)this = 0;
	*(void**)((char*)this + 4) = 0;
	*(void**)((char*)this + 8) = 0;
}

__declspec(dllimport) int __stdcall callable_slot_primary(void* a1, char* a2, void* a3, int a4, void* a5, int a6);
__declspec(dllimport) void __cdecl callable_slot_error(const char* a1, int a2, int a3, void* a4);

// FUNCTION: ROBLOXSTUDIO 0x00cc4bf0
int __cdecl callable_slot::process(char* a2, void* a3, void* a4)
{
	int result = 0;

	do
	{
		if (*(short*)a4 == 2)
		{
			result = callable_slot_primary(this, a2, a3, 0, a4, 0x10);
		}

		if (result < 0)
		{
			callable_slot_error((const char*)0x00eff680, result, (int)(signed char)*a2, a3);
		}
	} while (result == 0);

	return result;
}

extern "C" long _InterlockedExchangeAdd(long volatile* Addend, long Value);
extern "C" unsigned char _interlockedbittestandset(long volatile* a, long b);
#pragma intrinsic(_InterlockedExchangeAdd, _interlockedbittestandset)

__declspec(dllimport) void __stdcall callable_slot_signal(void*);

struct callable_slot_pool
{
	volatile long state;
	void* field4;
	void* freeList;

	void __thiscall sub_40ED30();
	void* __thiscall sub_40FB10();
};

struct callable_slot_alloc
{
	void* __thiscall sub_68B610();
};

callable_slot_pool* __cdecl sub_68B320();

// FUNCTION: ROBLOXSTUDIO 0x0068b4e0
void* callable_slot::allocate()
{
	callable_slot_pool* pool = sub_68B320();
	pool->sub_40ED30();

	void* node = pool->freeList;
	if (node)
	{
		pool->freeList = *(void**)node;
	}
	else
	{
		node = ((callable_slot_alloc*)&pool->freeList)->sub_68B610();
	}

	long oldState = _InterlockedExchangeAdd(&pool->state, 0x80000000);
	if (!(oldState & 0x40000000) && oldState > (long)0x80000000)
	{
		if (!_interlockedbittestandset(&pool->state, 30))
		{
			callable_slot_signal(pool->sub_40FB10());
		}
	}

	return node;
}

callable_slot_pool* __cdecl sub_68B390();

// FUNCTION: ROBLOXSTUDIO 0x0068b540
void* callable_slot::allocate2()
{
	callable_slot_pool* pool = sub_68B390();
	pool->sub_40ED30();

	void* node = pool->freeList;
	if (node)
	{
		pool->freeList = *(void**)node;
	}
	else
	{
		node = ((callable_slot_alloc*)&pool->freeList)->sub_68B610();
	}

	long oldState = _InterlockedExchangeAdd(&pool->state, 0x80000000);
	if (!(oldState & 0x40000000) && oldState > (long)0x80000000)
	{
		if (!_interlockedbittestandset(&pool->state, 30))
		{
			callable_slot_signal(pool->sub_40FB10());
		}
	}

	return node;
}

callable_slot_pool* __cdecl sub_8A3D90();

struct callable_slot_alloc_48AF30
{
	void* __thiscall sub_48AF30();
};

// FUNCTION: ROBLOXSTUDIO 0x00b65350
void* callable_slot::allocate3()
{
	callable_slot_pool* pool = sub_8A3D90();
	pool->sub_40ED30();

	void* node = pool->freeList;
	if (node)
	{
		pool->freeList = *(void**)node;
	}
	else
	{
		node = ((callable_slot_alloc_48AF30*)&pool->freeList)->sub_48AF30();
	}

	long oldState = _InterlockedExchangeAdd(&pool->state, 0x80000000);
	if (!(oldState & 0x40000000) && oldState > (long)0x80000000)
	{
		if (!_interlockedbittestandset(&pool->state, 30))
		{
			callable_slot_signal(pool->sub_40FB10());
		}
	}

	return node;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
