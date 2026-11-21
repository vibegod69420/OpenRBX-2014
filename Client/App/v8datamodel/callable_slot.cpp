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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
