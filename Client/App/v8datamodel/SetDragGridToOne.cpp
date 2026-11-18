#include "v8datamodel/SetDragGridToOne.h"

#include "decomp.h"

namespace RBX {

extern int g_dragGridToOne; // 0x012E3580

// FUNCTION: ROBLOXSTUDIO 0x0082e380
int SetDragGridToOne::isSetToOne()
{
	return g_dragGridToOne == 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
