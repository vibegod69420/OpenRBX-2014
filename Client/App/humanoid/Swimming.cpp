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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
