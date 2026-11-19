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

void* __fastcall PathInterpolatedCFrame_computeField20(const PathInterpolatedCFrame* self);

// FUNCTION: ROBLOXSTUDIO 0x00a0fac0
void* PathInterpolatedCFrame::getField20() const
{
	void* value = *reinterpret_cast<void* const*>(reinterpret_cast<const char*>(this) + 0x20);
	if (!value)
		return PathInterpolatedCFrame_computeField20(this);
	return value;
}

// FUNCTION: ROBLOXSTUDIO 0x00892520
float PathInterpolatedCFrame::getFieldE0_118() const
{
	const char* ptr = *reinterpret_cast<char* const*>(reinterpret_cast<const char*>(this) + 0xE0);
	return *reinterpret_cast<const float*>(ptr + 0x118);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
