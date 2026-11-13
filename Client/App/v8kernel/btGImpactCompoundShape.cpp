#include "btGImpactCompoundShape.h"

// FUNCTION: ROBLOXSTUDIO 0x0059b130
btGImpactShapeInterface* btGImpactCompoundShape::getChildShape(int index) const
{
	return m_childShapes[index];
}

// FUNCTION: ROBLOXSTUDIO 0x0059ae90
bool btGImpactCompoundShape::isCompound() const
{
	if (fieldBC)
		return true;
	return false;
}
