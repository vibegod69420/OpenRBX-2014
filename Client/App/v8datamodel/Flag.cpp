#include "v8datamodel/Flag.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00925b30
void Flag::resetField78()
{
	*(int*)((char*)this + 0x78) = 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00924110
int Flag::isCtfWon()
{
	return *(int*)((char*)this + 0x1BC) >= 5;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
