#include "btGImpactShapeInterface.h"

// FUNCTION: ROBLOXSTUDIO 0x00595de0
float btGImpactShapeInterface::getMarginNonVirtual() const
{
	return m_collisionMargin;
}

// FUNCTION: ROBLOXSTUDIO 0x0059ab00
int btGImpactShapeInterface::calculateSerializeBufferSize() const
{
	return 0x19;
}

// FUNCTION: ROBLOXSTUDIO 0x0059aaf0
void btGImpactShapeInterface::setField30()
{
	*(char*)((char*)this + 0x30) = 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00590230
void btGImpactShapeInterface::writeUnitScale(float* out) const
{
	out[0] = 1.0f;
	out[1] = 1.0f;
	out[2] = 1.0f;
	out[3] = 0.0f;
}
