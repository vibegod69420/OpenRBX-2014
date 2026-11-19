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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
