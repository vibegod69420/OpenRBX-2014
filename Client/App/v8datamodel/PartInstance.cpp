#include "v8datamodel/PartInstance.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00403b30
int PartInstance::getField70() const
{
	return field_0070;
}

// FUNCTION: ROBLOXSTUDIO 0x00403b40
int PartInstance::getField74() const
{
	return field_0074;
}

// FUNCTION: ROBLOXSTUDIO 0x00825850
int PartInstance::getGlobal_5850() const
{
	return s_value_00825850;
}

// FUNCTION: ROBLOXSTUDIO 0x00892460
bool PartInstance::getSubFlagE0_110() const
{
	return subb_00e0_0110->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00892470
float PartInstance::getSubFloatE0_11C() const
{
	return *(float*)((char*)subb_00e0_0110 + 0x11C);
}

// FUNCTION: ROBLOXSTUDIO 0x00891b90
int PartInstance::getSubFlagE0_112IsZero() const
{
	return *(unsigned char*)((char*)subb_00e0_0110 + 0x112) == 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00890430
bool PartInstance::hasHingeMotorOrSteppedSurface() const
{
	const SubBool_PartInstance_00e0_0110* sub = subb_00e0_0110;
	int i = 0;
	const int* surface = reinterpret_cast<const int*>(
		reinterpret_cast<const char*>(sub) + 0x120);

	for (; i < 6; ++i, ++surface)
	{
		int surfaceType = *surface;
		if (surfaceType == 6 || surfaceType == 8 || surfaceType == 7)
			return true;
	}

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
