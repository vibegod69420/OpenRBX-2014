#include "G3D/CoordinateFrame.h"

#include "decomp.h"

namespace G3D {

// FUNCTION: ROBLOXSTUDIO 0x007bef50
void CoordinateFrame::setField1C4(int value)
{
	field_01c4 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x007c91c0
void* CoordinateFrame::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x007c91f0
void* CoordinateFrame::scalarDeletingDestructor_91f0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
