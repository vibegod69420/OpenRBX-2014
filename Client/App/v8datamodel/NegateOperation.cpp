#include "v8datamodel/NegateOperation.h"

#include "decomp.h"

namespace RBX {

__declspec(dllimport) void __cdecl NegateOperation_delete(void*);
void __stdcall NegateOperation_destroyRange(void*, void*);

// FUNCTION: ROBLOXSTUDIO 0x004198d0
NegateOperation::~NegateOperation()
{
	int* p = &_vtable_or_head;
	if (p[0])
	{
		NegateOperation_destroyRange((void*)p[0], (void*)p[1]);
		NegateOperation_delete((void*)p[0]);
		p[0] = 0;
		p[1] = 0;
		p[2] = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
