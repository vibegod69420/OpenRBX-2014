#include "v8datamodel/BulletConvexDecomposition.h"

#include "decomp.h"

namespace RBX {

void __fastcall BulletConvexDecomposition_BaseCtor(void*);

// FUNCTION: ROBLOXSTUDIO 0x00b68400
BulletConvexDecomposition::BulletConvexDecomposition()
{
	BulletConvexDecomposition_BaseCtor(this);

	*(int*)this = 0x00ED0B0C;
	*((unsigned char*)this + 0x64) = 1;
	*(int*)((char*)this + 0x60) = 0;
	*(int*)((char*)this + 0x58) = 0;
	*(int*)((char*)this + 0x5C) = 0;
	*(int*)((char*)this + 0x50) = 0;
	*(int*)((char*)this + 0xA0) = 0;
	*(int*)((char*)this + 4) = 25;
	*(float*)((char*)this + 0x10) = 3.402823466e+38f;
	*(float*)((char*)this + 0x14) = 3.402823466e+38f;
	*(float*)((char*)this + 0x18) = 3.402823466e+38f;
	*(float*)((char*)this + 0x20) = -3.402823466e+38f;
	*(float*)((char*)this + 0x24) = -3.402823466e+38f;
	*(float*)((char*)this + 0x28) = -3.402823466e+38f;
	*((unsigned char*)this + 0x30) = 1;
	*(float*)((char*)this + 0x40) = 1.0f;
	*(float*)((char*)this + 0x44) = 1.0f;
	*(float*)((char*)this + 0x48) = 1.0f;
	*(int*)((char*)this + 0x4C) = 0;
}

struct BulletConvexDecomposition_sub_402FD0
{
	int fn(int, int, const char*, unsigned int);
};

// FUNCTION: ROBLOXSTUDIO 0x00403040
int __cdecl BulletConvexDecomposition::bufferMatch(const void* str)
{
	const char* p = (const char*)str;
	unsigned int len;
	const char* data = p;
	if (*(unsigned int*)(p + 0x14) < 0x10)
	{
		len = *(unsigned int*)(p + 0x10);
	}
	else
	{
		len = *(unsigned int*)(p + 0x10);
		data = *(const char**)p;
	}

	int result = ((BulletConvexDecomposition_sub_402FD0*)this)->fn(
		0, *(int*)((char*)this + 0x10), data, len);
	return result == 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
