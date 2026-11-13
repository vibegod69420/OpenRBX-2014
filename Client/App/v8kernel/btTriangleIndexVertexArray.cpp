#include "btTriangleIndexVertexArray.h"

#include <emmintrin.h>

// FUNCTION: ROBLOXSTUDIO 0x00595fa0
int btTriangleIndexVertexArray::getField24() const
{
	return field24;
}

// FUNCTION: ROBLOXSTUDIO 0x005961a0
bool btTriangleIndexVertexArray::isIndexedMesh() const
{
	return field3C == 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00595e70
int btTriangleIndexVertexArray::calculateSerializeBufferSize() const
{
	return 0x1c;
}

// FUNCTION: ROBLOXSTUDIO 0x005961b0
void btTriangleIndexVertexArray::setMeshData(const void* first, const void* second)
{
	_mm_storel_epi64((__m128i*)((char*)this + 0x40), _mm_loadl_epi64((const __m128i*)first));
	_mm_storel_epi64((__m128i*)((char*)this + 0x48), _mm_loadl_epi64((const __m128i*)((const char*)first + 8)));
	_mm_storel_epi64((__m128i*)((char*)this + 0x50), _mm_loadl_epi64((const __m128i*)second));
	_mm_storel_epi64((__m128i*)((char*)this + 0x58), _mm_loadl_epi64((const __m128i*)((const char*)second + 8)));
	*(int*)((char*)this + 0x3c) = 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00596150
void btTriangleIndexVertexArray::getSubPart(
	int* out0, int* out1, int* out2, int* out3,
	int* out4, int* out5, int* out6, int* out7, int index) const
{
	const int* part = (const int*)(*(const char* const*)((const char*)this + 0x2c) + index * 0x20);
	*out1 = part[3];
	*out0 = part[4];
	*out2 = part[7];
	*out3 = part[5];
	*out6 = part[0];
	*out4 = part[1];
	*out5 = part[2];
	*out7 = part[6];
}
