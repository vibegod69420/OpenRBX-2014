#include "v8datamodel/RunTransition.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0041e9a0
int RunTransition::isConnected() const
{
	return *(reinterpret_cast<const int*>(this) + 4) != 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
