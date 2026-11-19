#include "v8world/Mechanism.h"

#include "decomp.h"

namespace RBX {

class Mechanism;
class Callee {
public:
    void step(Mechanism* mechanism);
};

struct MechanismProxy {
    char pad[0x3c];
    Callee* world;
};

// FUNCTION: ROBLOXSTUDIO 0x00b5c470
void Mechanism::step() {
    reinterpret_cast<MechanismProxy*>(this)->world->step(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
