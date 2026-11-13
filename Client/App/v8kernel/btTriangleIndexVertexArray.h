#pragma once

// Slot 6 of the striding-mesh interface returns the int at +0x24.
class btTriangleIndexVertexArray
{
public:
	int getField24() const;
	bool isIndexedMesh() const;
	int calculateSerializeBufferSize() const;

private:
	char _pad[0x24];
	int field24;
	char _pad28[0x14];
	int field3C;
};
