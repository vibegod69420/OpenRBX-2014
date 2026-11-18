#include "v8datamodel/FirstPersonCommand.h"

#include "decomp.h"

namespace RBX {

// 0x009D8750
void* __cdecl FirstPersonCommand_resolveContext(void*);

struct FirstPersonCommandTarget
{
    bool canUseFirstPerson(); // 0x00A48380
};

// FUNCTION: ROBLOXSTUDIO 0x0082eb00
bool FirstPersonCommand::isEnabled()
{
    void* context = FirstPersonCommand_resolveContext(reinterpret_cast<void**>(this)[3]);
    if (context)
        return reinterpret_cast<FirstPersonCommandTarget*>(
            reinterpret_cast<char*>(context) + 0x128)->canUseFirstPerson();

    return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
