#pragma once

class btGImpactShapeInterface;

// btAlignedObjectArray's element pointer sits at +0xd8 in this build, which is
// what the matched slot indexes.
class btGImpactCompoundShape
{
public:
	btGImpactShapeInterface* getChildShape(int index) const;

private:
	char _padD8[0xD8];
	btGImpactShapeInterface** m_childShapes;
};
