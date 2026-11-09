#include "humanoid/RunningBase.h"

#include "decomp.h"

namespace RBX {
namespace HUMAN {

// FUNCTION: ROBLOXSTUDIO 0x00bb94a0
float RunningBase::someMethod() const
{
    // Assuming the method loads a float from an offset of 0xf8 from the 'this' pointer
    // and returns it. The offset 0xf8 is just a guess based on the provided assembly.
    return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0xf8);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
