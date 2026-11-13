#pragma once

// Slot 6 of the striding-mesh interface returns the int at +0x24.
class btTriangleIndexVertexArray
{
public:
	int getField24() const;
	bool isIndexedMesh() const;
	int calculateSerializeBufferSize() const;
	void setMeshData(const void* first, const void* second);
	void getSubPart(int* out0, int* out1, int* out2, int* out3,
		int* out4, int* out5, int* out6, int* out7, int index) const;

private:
	char _pad[0x24];
	int field24;
	char _pad28[0x14];
	int field3C;
};
