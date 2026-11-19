#include "v8datamodel/SimpleThrottlingArbiter.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x006c10d0
void __stdcall sub_6C1210(void* out, void* arg2, void* arg3);

SimpleThrottlingArbiter::~SimpleThrottlingArbiter()
{
	void* local;
	sub_6C1210(&local, *(void**)(void*)this->_vtable_or_head, (void*)this->_vtable_or_head);
	::operator delete((void*)this->_vtable_or_head);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
