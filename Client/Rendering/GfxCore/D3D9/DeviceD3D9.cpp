#include "DeviceD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x005e1160
int DeviceD3D9::getField40() const
{
	return field_0040;
}

// FUNCTION: ROBLOXSTUDIO 0x005e3a80
const int* DeviceD3D9::getMemberPtr1C() const
{
	return &member_001c;
}

// FUNCTION: ROBLOXSTUDIO 0x005e39b0
void* DeviceD3D9::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
