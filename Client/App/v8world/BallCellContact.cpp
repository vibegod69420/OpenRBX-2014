#include "v8world/BallCellContact.h"

#include "decomp.h"

namespace RBX {

namespace
{
void __stdcall deleteBallCellConnectors(void* cellContact);
}

// FUNCTION: ROBLOXSTUDIO 0x00c1af60
void BallCellContact::deleteAllConnectors()
{
	deleteBallCellConnectors(reinterpret_cast<char*>(this) + 0x38);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
