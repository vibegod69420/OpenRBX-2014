#include "btCollisionDispatcher.h"

// FUNCTION: ROBLOXSTUDIO 0x0058f6a0
btPersistentManifold* btCollisionDispatcher::getManifoldByIndexInternal(int index) const
{
	return m_manifoldsPtr[index];
}
