#include "v8datamodel/GetSetImpl.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0040d810
void __cdecl GetSetImpl::get(int* out) const
{
	if (out)
		*out = _vtable_or_head;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
