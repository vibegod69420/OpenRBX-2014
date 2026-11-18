#include "v8datamodel/SetGridSizeToSixteen.h"

#include "decomp.h"

namespace RBX {

extern float gGridSize;

// FUNCTION: ROBLOXSTUDIO 0x0082e3c0
int SetGridSizeToSixteen::isChecked()
{
	return (int)gGridSize == 16;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
