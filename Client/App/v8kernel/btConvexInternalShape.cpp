#include "btConvexInternalShape.h"

// FUNCTION: ROBLOXSTUDIO 0x00590260
void btConvexInternalShape::setMargin(float margin)
{
	m_collisionMargin = margin;
}

// FUNCTION: ROBLOXSTUDIO 0x00590280
float btConvexInternalShape::getMarginNonVirtual() const
{
	return m_collisionMargin;
}

// FUNCTION: ROBLOXSTUDIO 0x00590290
int btConvexInternalShape::calculateSerializeBufferSize() const
{
	return 0x34;
}
