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

// FUNCTION: ROBLOXSTUDIO 0x009689f0
void* Workspace::getSomeField()
{
	void* v = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0xB4);
	if (v != 0)
		return v;
	return *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0xBC);
}

// FUNCTION: ROBLOXSTUDIO 0x00969740
bool Workspace::method_00969740()
{
	if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x68) == 0 &&
		*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x64) == 2)
	{
		return true;
	}
	return false;
}

// FUNCTION: ROBLOXSTUDIO 0x00969760
bool Workspace::method_00969760()
{
	if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x68) == 2 &&
		*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x64) == 2)
	{
		return true;
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
