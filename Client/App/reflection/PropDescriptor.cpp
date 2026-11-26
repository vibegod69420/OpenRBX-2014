#include "reflection/PropDescriptor.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00410d30
void __cdecl PropDescriptor::read(void* out) const
{
	if (out)
		*(unsigned char*)out = *(const unsigned char*)this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
