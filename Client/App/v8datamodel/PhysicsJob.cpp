#include "v8datamodel/PhysicsJob.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008c5810
int PhysicsJob::getErrorEmphasis() const
{
	if (*(const unsigned char*)0x012FCE30)
		return 0x400;
	return 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
