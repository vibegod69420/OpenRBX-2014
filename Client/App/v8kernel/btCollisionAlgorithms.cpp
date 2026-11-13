#include "btCollisionAlgorithms.h"

// 0x005948b0 is shared (ICF) by btBoxBoxCollisionAlgorithm and
// btConvexPlaneCollisionAlgorithm.
// FUNCTION: ROBLOXSTUDIO 0x005948b0
float btBoxBoxCollisionAlgorithm::calculateTimeOfImpact(void*, void*, const void*, void*)
{
	return 1.0f;
}

// FUNCTION: ROBLOXSTUDIO 0x005a88a0
float btCompoundCompoundCollisionAlgorithm::calculateTimeOfImpact(void*, void*, const void*, void*)
{
	return 0.0f;
}
