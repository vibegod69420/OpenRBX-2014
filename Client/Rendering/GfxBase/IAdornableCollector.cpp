#include "IAdornableCollector.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00873a00
void __cdecl IAdornableCollector::dispatch(void* arg1, void* arg2)
{
	struct Thunk
	{
		void (__thiscall *function)(void*, void*, void*);
		int offset;
		char* target;
	};

	Thunk* thunk = reinterpret_cast<Thunk*>(this);
	thunk->function(thunk->target + thunk->offset, &arg1, &arg2);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
