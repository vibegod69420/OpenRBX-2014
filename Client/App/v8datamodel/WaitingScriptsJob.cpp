#include "v8datamodel/WaitingScriptsJob.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008d1da0
__declspec(dllimport) __declspec(noreturn) void __cdecl allocationFailure();

void* WaitingScriptsJob::allocate()
{
	void* mem = ::operator new(0x18u);
	if (!mem)
		allocationFailure();

	*(int*)mem = this->_vtable_or_head;

	if ((int*)mem + 1)
		*((int*)mem + 1) = this->_vtable_or_head;

	if ((int*)mem + 2)
		*((int*)mem + 2) = this->_vtable_or_head;

	return mem;
}

// FUNCTION: ROBLOXSTUDIO 0x008d1d20
void* WaitingScriptsJob::allocate76()
{
	void* mem = ::operator new(0x4Cu);
	if (!mem)
		allocationFailure();

	*(int*)mem = this->_vtable_or_head;

	if ((int*)mem + 1)
		*((int*)mem + 1) = this->_vtable_or_head;

	if ((int*)mem + 2)
		*((int*)mem + 2) = this->_vtable_or_head;

	return mem;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
