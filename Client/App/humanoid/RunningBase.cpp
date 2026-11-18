#include "humanoid/RunningBase.h"

#include "decomp.h"

namespace RBX {
namespace HUMAN {

// FUNCTION: ROBLOXSTUDIO 0x00bb94a0
float RunningBase::getSpeed()
{
	return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + 0xF8);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
