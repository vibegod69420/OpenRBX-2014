#pragma once

// The broadphase proxy stores its collision group and mask as the two shorts at
// +4 and +6.
struct btBroadphaseProxy
{
	char _pad[0x04];
	short collisionFilterGroup;
	short collisionFilterMask;
};

class btCollisionWorld
{
public:
	class RayResultCallback
	{
	public:
		bool needsCollision(const btBroadphaseProxy* proxy) const;

	private:
		char _pad[0x0c];
		short m_collisionFilterGroup;
		short m_collisionFilterMask;
	};
};
