#include "v8datamodel/ResetCommand.h"

#include "decomp.h"

namespace RBX {

struct ResetCommandState
{
    unsigned char pad[0x78];
    int state;
};

struct ResetCommandMember10
{
    ResetCommandState* getState();
};

int __cdecl ResetCommandCanReset(void* target);

// FUNCTION: ROBLOXSTUDIO 0x0082eeb0
bool ResetCommand::isEnabled()
{
    ResetCommandMember10* member = reinterpret_cast<ResetCommandMember10*>(
        reinterpret_cast<char*>(this) + 0x10);
    ResetCommandState* stateObj = member->getState();

    if (stateObj->state == 1 || stateObj->state == 2)
    {
        void* target = *reinterpret_cast<void**>(
            reinterpret_cast<char*>(this) + 0x0C);
        if (ResetCommandCanReset(target) == 0)
            return true;
    }

    return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
