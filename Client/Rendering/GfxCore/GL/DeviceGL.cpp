#include "DeviceGL.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x006077e0
int DeviceGL::getField34() const
{
	return field_0034;
}

// FUNCTION: ROBLOXSTUDIO 0x00609580
const int* DeviceGL::getMemberPtr0C() const
{
	return &member_000c;
}

// FUNCTION: ROBLOXSTUDIO 0x006094e0
void* DeviceGL::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
