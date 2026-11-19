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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
