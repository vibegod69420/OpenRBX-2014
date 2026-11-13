#include "Workspace.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009688c0
void* Workspace::getBasePtr() const
{
	return (void*)((char*)this - 0x128);
}

} // namespace RBX
