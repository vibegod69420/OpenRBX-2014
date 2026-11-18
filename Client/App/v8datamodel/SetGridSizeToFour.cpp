#include "v8datamodel/SetGridSizeToFour.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0082e3a0
int SetGridSizeToFour::isChecked()
{
	int gridSize = (int)*(float*)0x0122AA54;
	return gridSize == 4;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
