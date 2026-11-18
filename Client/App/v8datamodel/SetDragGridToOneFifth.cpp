#include "v8datamodel/SetDragGridToOneFifth.h"

#include "decomp.h"

namespace RBX {

static int s_dragGridToOneFifth;

// FUNCTION: ROBLOXSTUDIO 0x0082e390
int SetDragGridToOneFifth::isEnabled()
{
	return s_dragGridToOneFifth == 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
