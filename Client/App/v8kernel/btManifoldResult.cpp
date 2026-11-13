#include "btManifoldResult.h"

// FUNCTION: ROBLOXSTUDIO 0x0058f650
void btManifoldResult::setShapeIdentifiersA(int partId0, int index0)
{
	m_partId0 = partId0;
	m_index0 = index0;
}

// FUNCTION: ROBLOXSTUDIO 0x0058f670
void btManifoldResult::setShapeIdentifiersB(int partId1, int index1)
{
	m_partId1 = partId1;
	m_index1 = index1;
}
