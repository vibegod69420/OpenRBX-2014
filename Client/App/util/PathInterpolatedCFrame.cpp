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

// FUNCTION: ROBLOXSTUDIO 0x00892590
double PathInterpolatedCFrame::getField48() const
{
	return *reinterpret_cast<const double*>(reinterpret_cast<const char*>(this) + 0x48);
}

// FUNCTION: ROBLOXSTUDIO 0x00892dc0
bool PathInterpolatedCFrame::getFlag40() const
{
	return flag_0040;
}

// FUNCTION: ROBLOXSTUDIO 0x00a0f420
double PathInterpolatedCFrame::getField98() const
{
    return *reinterpret_cast<const double*>(reinterpret_cast<const char*>(this) + 0x98);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
