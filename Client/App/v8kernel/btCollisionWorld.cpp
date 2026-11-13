#include "btCollisionWorld.h"

// FUNCTION: ROBLOXSTUDIO 0x005964a0
bool btCollisionWorld::RayResultCallback::needsCollision(const btBroadphaseProxy* proxy) const
{
	bool collides = (proxy->collisionFilterGroup & m_collisionFilterMask) != 0;
	collides = collides && (m_collisionFilterGroup & proxy->collisionFilterMask);
	return collides;
}
