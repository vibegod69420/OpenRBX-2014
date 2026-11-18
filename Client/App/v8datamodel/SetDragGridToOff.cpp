#include "v8datamodel/SetDragGridToOff.h"

#include "decomp.h"

namespace RBX {

extern int g_dragGridMode; // 0x012E3580

// FUNCTION: ROBLOXSTUDIO 0x0082e370
int SetDragGridToOff::isDragGridOff()
{
	return g_dragGridMode == 2;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
