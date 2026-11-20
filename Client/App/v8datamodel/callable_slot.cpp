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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
