#include "util/PathInterpolatedCFrame.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0058f6b0
int PathInterpolatedCFrame::getField44() const
{
	return field_0044;
}

// FUNCTION: ROBLOXSTUDIO 0x0087bad0
bool PathInterpolatedCFrame::getFlag41() const
{
	return flag_0041;
}

// FUNCTION: ROBLOXSTUDIO 0x00892dc0
bool PathInterpolatedCFrame::getFlag40() const
{
	return flag_0040;
}

// FUNCTION: ROBLOXSTUDIO 0x00898360
void PathInterpolatedCFrame::setFlag40(bool value)
{
	flag_0040 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00a30b90
void PathInterpolatedCFrame::setField44(int value)
{
	field_0044 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x0088f340
void* PathInterpolatedCFrame::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
