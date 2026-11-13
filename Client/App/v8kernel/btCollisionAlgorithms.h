#pragma once

// Bullet collision algorithms answer calculateTimeOfImpact with a constant when
// they cannot produce an impact: 1.0f means "no hit before the end of the frame".
class btBoxBoxCollisionAlgorithm
{
public:
	float calculateTimeOfImpact(void* body0, void* body1, const void* dispatchInfo, void* resultOut);
};

class btCompoundCompoundCollisionAlgorithm
{
public:
	float calculateTimeOfImpact(void* body0, void* body1, const void* dispatchInfo, void* resultOut);
};
