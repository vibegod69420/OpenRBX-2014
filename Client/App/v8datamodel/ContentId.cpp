#include "v8datamodel/ContentId.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009aa9b0
__declspec(dllimport) __declspec(noreturn) void __cdecl rbxAllocFailure();

void* ContentId::allocData()
{
	char* mem = (char*)::operator new(0x68u);
	if (!mem)
		rbxAllocFailure();

	int v = this->_vtable_or_head;
	int* p = (int*)(mem + 4);
	*(int*)mem = v;
	if (p)
		*p = this->_vtable_or_head;

	p = (int*)(mem + 8);
	if (p)
		*p = this->_vtable_or_head;

	return mem;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
