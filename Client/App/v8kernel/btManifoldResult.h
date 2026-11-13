#pragma once

// Bullet manifold result. The shape identifiers are the (partId, index) pairs
// stored at +0x10/+0x14 and +0x18/+0x1c, which is what the two vtable setters
// write, so their layout is proven rather than guessed.
class btManifoldResult
{
public:
	void setShapeIdentifiersA(int partId0, int index0);
	void setShapeIdentifiersB(int partId1, int index1);

private:
	char _pad[0x10];
	int m_partId0;
	int m_partId1;
	int m_index0;
	int m_index1;
};
