#include "DeviceContextGL.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00607010
void DeviceContextGL::vfunc_16()
{
	typedef void (*Func)();
	Func func = *(Func*)0x012DB2AC;
	if (func)
		return func();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
