#include "SelectionPointLasso.h"

// FUNCTION: ROBLOXSTUDIO 0x00ac9b60
bool SelectionPointLasso::getPoint(G3DVector3* point) const
{
	point->x = m_point.x;
	point->y = m_point.y;
	point->z = m_point.z;
	return true;
}
