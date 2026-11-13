#pragma once

// Bullet's convex shapes keep their collision margin at +0x30; the matched
// setter stores it and the matched getter returns it through ST0.
class btConvexInternalShape
{
public:
	void setMargin(float margin);
	float getMarginNonVirtual() const;

private:
	char _pad[0x30];
	float m_collisionMargin;
};
