#pragma once

// btGImpactShapeInterface inherits the base collision shape, whose margin member
// sits at +0x0c; the matched getter loads exactly that slot.
class btGImpactShapeInterface
{
public:
	float getMarginNonVirtual() const;
	int calculateSerializeBufferSize() const;
	void setField30();

private:
	char _pad[0x0c];
	float m_collisionMargin;
};
