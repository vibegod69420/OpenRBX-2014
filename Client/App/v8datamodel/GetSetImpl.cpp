#include "v8datamodel/GetSetImpl.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0040d810
void __cdecl GetSetImpl::get(int* out) const
{
	if (out)
		*out = _vtable_or_head;
}

// FUNCTION: ROBLOXSTUDIO 0x007b3d20
void __cdecl GetSetImpl::set(void* arg) const
{
	typedef void (__cdecl *SetFunc)(void*, void*);
	(*(SetFunc*)this)(*((void**)this + 1), arg);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
