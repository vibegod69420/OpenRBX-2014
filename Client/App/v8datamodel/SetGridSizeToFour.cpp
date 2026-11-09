#include "v8datamodel/SetGridSizeToFour.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0082e3a0
int SetGridSizeToFour::setGridSizeToFour()
{
	// cvttss2si ecx, dword ptr [0x122aa54]
	// xor eax,eax; cmp ecx,4; sete al; ret
	extern float gridSizeSource;
	const int ecx_trunc = (int)gridSizeSource;
	return ecx_trunc == 4;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
