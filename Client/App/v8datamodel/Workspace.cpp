#include "v8datamodel/Workspace.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009688c0
void* Workspace::getBasePtr()
{
	return reinterpret_cast<char*>(this) - 0x128;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
