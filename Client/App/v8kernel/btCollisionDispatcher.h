#pragma once

class btPersistentManifold;

// Bullet's dispatcher keeps its manifolds in a pointer array at +0x14.
class btCollisionDispatcher
{
public:
	btPersistentManifold* getManifoldByIndexInternal(int index) const;

private:
	char _pad[0x14];
	btPersistentManifold** m_manifoldsPtr;
};
