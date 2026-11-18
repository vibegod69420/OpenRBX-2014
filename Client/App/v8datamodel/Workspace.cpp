#include "v8datamodel/Workspace.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009688c0
void* Workspace::getBasePtr()
{
	return reinterpret_cast<char*>(this) - 0x128;
}

extern "C" int __cdecl rbx_helper_0x7b3b40();

// FUNCTION: ROBLOXSTUDIO 0x00888300
int Workspace::method_00888300()
{
    return rbx_helper_0x7b3b40() + 6;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
