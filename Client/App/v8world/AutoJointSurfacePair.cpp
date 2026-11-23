#include "v8world/AutoJointSurfacePair.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00403380
const char* AutoJointSurfacePair::c_str() const
{
	if (*reinterpret_cast<const unsigned int*>(reinterpret_cast<const char*>(this) + 0x14) >= 0x10)
		return *reinterpret_cast<const char* const*>(this);
	return reinterpret_cast<const char*>(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
