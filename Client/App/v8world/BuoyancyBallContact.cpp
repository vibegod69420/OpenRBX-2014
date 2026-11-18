#include "v8world/BuoyancyBallContact.h"

#include "decomp.h"

namespace RBX {

class BuoyancyPrimitive
{
public:
	float* getRadiusData();
};

// FUNCTION: ROBLOXSTUDIO 0x00bda3a0
void BuoyancyBallContact::update()
{
	BuoyancyPrimitive* primitive = *(BuoyancyPrimitive**)((char*)this + 0x50);
	float radius = *primitive->getRadiusData() * 0.5f;
	float area = radius * 3.1415927f;
	*(float*)((char*)this + 0x54) = radius;
	area = area * radius;
	*(float*)((char*)this + 0x68) = area;
	*(float*)((char*)this + 0x58) = area * 4.0f;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
