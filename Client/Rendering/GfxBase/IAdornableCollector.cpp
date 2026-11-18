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

// FUNCTION: ROBLOXSTUDIO 0x0090b590
void IAdornableCollector::destroySubPtr0C()
{
	IAdornableCollector* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
