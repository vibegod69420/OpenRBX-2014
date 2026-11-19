#include "v8datamodel/RemoteEvent.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009e6d90
void __stdcall sub_9EB550(void** out, void* a, void* b);

RemoteEvent::~RemoteEvent()
{
	void* local;
	void* head = (void*)this->_vtable_or_head;

	sub_9EB550(&local, *(void**)head, head);
	::operator delete((void*)this->_vtable_or_head);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
