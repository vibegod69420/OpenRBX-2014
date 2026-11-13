#include "BoxSelectCommand.h"

// FUNCTION: ROBLOXSTUDIO 0x007c3de0
void BoxSelectCommand::zeroTriple(int* out) const
{
	out[0] = 0;
	out[1] = 0;
	out[2] = 0;
}

// FUNCTION: ROBLOXSTUDIO 0x007c3c90
void BoxSelectCommand::clearField28()
{
	*(char*)((char*)this + 0x28) = 0;
}
