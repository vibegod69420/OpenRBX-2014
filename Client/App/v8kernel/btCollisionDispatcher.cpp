#include "btCollisionDispatcher.h"

// FUNCTION: ROBLOXSTUDIO 0x0058f6a0
btPersistentManifold* btCollisionDispatcher::getManifoldByIndexInternal(int index) const
{
	return m_manifoldsPtr[index];
}

// FUNCTION: ROBLOXSTUDIO 0x004956c0
int btCollisionDispatcher::getField0C() const
{
	return field0C;
}

// FUNCTION: ROBLOXSTUDIO 0x0058f6b0
int btCollisionDispatcher::getField44() const
{
	return field44;
}

// FUNCTION: ROBLOXSTUDIO 0x0058f690
void* btCollisionDispatcher::getManifoldsIfAny() const
{
	if (field0C)
		return m_manifoldsPtr;
	return 0;
}
