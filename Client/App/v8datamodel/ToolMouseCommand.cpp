#include "v8datamodel/ToolMouseCommand.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x007c3c90
void ToolMouseCommand::resetDown()
{
	*(bool*)((char*)this + 0x28) = false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
