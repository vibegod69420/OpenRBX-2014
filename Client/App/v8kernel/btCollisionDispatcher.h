#pragma once

class btPersistentManifold;

// Bullet's dispatcher keeps its manifolds in a pointer array at +0x14.
class btCollisionDispatcher
{
public:
	btPersistentManifold* getManifoldByIndexInternal(int index) const;
	int getField0C() const;
	int getField44() const;

private:
	char _pad[0x0c];
	int field0C;
	char _pad10[0x04];
	btPersistentManifold** m_manifoldsPtr;
	char _pad18[0x44 - 0x18];
	int field44;
};
