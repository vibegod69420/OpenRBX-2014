#include "DeviceGL.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x006077e0
int DeviceGL::getField34() const
{
	return field34;
}

// FUNCTION: ROBLOXSTUDIO 0x00609580
void* DeviceGL::getField0CPtr() const
{
	return (void*)((char*)this + 0x0c);
}

} // namespace Graphics
} // namespace RBX
