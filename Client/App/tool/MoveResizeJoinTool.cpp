#include "tool/MoveResizeJoinTool.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00c0a010
const float* MoveResizeJoinTool::getSnapValues()
{
	static float values[3];
	static int initialized;
	if (!(initialized & 1))
	{
		initialized |= 1;
		values[0] = 0.1f;
		values[1] = 0.6f;
		values[2] = 1.0f;
	}
	return values;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
