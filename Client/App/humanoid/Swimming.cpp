#include "humanoid/Swimming.h"

#include "decomp.h"

namespace RBX {
namespace HUMAN {

// FUNCTION: ROBLOXSTUDIO 0x00c17e70
void __cdecl Swimming::onEvent(int* event)
{
	if (event[0] == 12)
	{
		int data = event[2];
		if ((data & 0x100) == 0)
		{
			if (data >= *(unsigned char*)((char*)this + 0x32))
				--*(int*)((char*)this + 0x24);
		}
	}
}

void __cdecl sub_C18030(Swimming* self, int packed, int arg3);

// FUNCTION: ROBLOXSTUDIO 0x00c18100
void __cdecl Swimming::setState(int a, int b, int c)
{
	sub_C18030(this, ((c << 8) | b) << 6 | a, (*(int**)((char*)this + 0x0C))[2]);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
