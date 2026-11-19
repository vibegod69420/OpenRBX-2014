#include "G3D/Vector2int16.h"

#include "decomp.h"

namespace G3D {

// FUNCTION: ROBLOXSTUDIO 0x00ac85f0

class HelperObject
{
public:
    bool check();
};

struct ContainerView
{
    char pad[0xf8];
    void** begin;
    void** end;
};

bool Vector2int16::hasAny()
{
    ContainerView* self = reinterpret_cast<ContainerView*>(this);
    void** it = self->begin;
    while (it != self->end)
    {
        if (reinterpret_cast<HelperObject*>(*it)->check())
        {
            return true;
        }
        ++it;
    }
    return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace G3D
