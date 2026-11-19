#include "v8datamodel/KeyframeSequenceProvider.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b26bc0
void __cdecl KeyframeSequenceProvider::deallocate(int, int, int, int, unsigned int capacity)
{
	if (capacity >= 0x10)
		::operator delete(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
