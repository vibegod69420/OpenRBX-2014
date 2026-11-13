#pragma once

class btGImpactShapeInterface;

// btAlignedObjectArray's element pointer sits at +0xd8 in this build, which is
// what the matched slot indexes.
class btGImpactCompoundShape
{
public:
	btGImpactShapeInterface* getChildShape(int index) const;
	bool isCompound() const;

private:
	char _padBC[0xBC];
	int fieldBC;
	char _padC0[0xD8 - 0xC0];
	btGImpactShapeInterface** m_childShapes;
};
