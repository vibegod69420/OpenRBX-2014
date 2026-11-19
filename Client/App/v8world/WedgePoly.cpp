#include "v8world/WedgePoly.h"

#include "decomp.h"

namespace RBX {

void __cdecl sub_6B9740(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00babde0
void* WedgePoly::getEdgeData()
{
	unsigned char flag = *(unsigned char*)0x012DE657;
	if (flag)
	{
		int* begin = *(int**)((char*)this + 4);
		int* end = *(int**)((char*)this + 8);
		if ((unsigned int)(end - begin) < 3)
		{
			typedef unsigned char (__cdecl *AssertCallback)(const char*, const char*, int);
			AssertCallback callback = *(AssertCallback*)0x012DE694;
			if (callback)
			{
				if (callback((const char*)0x00EDE440, (const char*)0x00EA3F40, 0xBD))
					goto done;
				flag = *(unsigned char*)0x012DE657;
			}
			sub_6B9740((int)flag, (const char*)0x00EDE458);
		}
	}

done:
	return (char*)this + 0x10;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
