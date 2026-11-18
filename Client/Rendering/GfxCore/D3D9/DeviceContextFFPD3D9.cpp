#include "DeviceContextFFPD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x005e0070
void DeviceContextFFPD3D9::executeCallback()
{
	typedef void (*CallbackFn)();
	CallbackFn callback = *(CallbackFn*)((char*)this + 0xC4);
	if (callback)
		return callback();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
