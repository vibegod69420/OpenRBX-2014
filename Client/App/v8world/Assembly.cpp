#include "v8world/Assembly.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b5c020
void Assembly::setSleepEligible()
{
	reinterpret_cast<unsigned char*>(this)[0x74] = 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
