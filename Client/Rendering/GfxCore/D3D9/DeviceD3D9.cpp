#include "DeviceD3D9.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x005e1160
int DeviceD3D9::getField40() const
{
	return field40;
}

// FUNCTION: ROBLOXSTUDIO 0x005e3a80
void* DeviceD3D9::getField1CPtr() const
{
	return (void*)((char*)this + 0x1c);
}

} // namespace Graphics
} // namespace RBX
