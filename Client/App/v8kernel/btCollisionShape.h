#pragma once

// Bullet collision-shape interface. Only the virtuals proven by the RTTI
// vtables are declared; every concrete shape overrides getName().
class btCollisionShape
{
public:
	virtual ~btCollisionShape();
	virtual const char* getName() const = 0;
};
