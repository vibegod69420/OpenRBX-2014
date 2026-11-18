#include "v8datamodel/Platform.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009d97d0
int Platform::getFlagAt0x38() const
{
	return *reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x38) & 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
