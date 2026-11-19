#include "v8datamodel/Smoke.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a0a240
struct SmokeParticleCount {
    char _pad[0x18];
    unsigned int count;
};

int Smoke::hasParticles() const
{
    return 0u < reinterpret_cast<const SmokeParticleCount*>(this)->count;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
