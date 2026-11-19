#include "v8datamodel/ExtrudedPartInstance.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a026a0
int ExtrudedPartInstance::getConst19178964() const
{
	return 19178964;
}

// FUNCTION: ROBLOXSTUDIO 0x00892710
class ExtrudedPartCallee00892710
{
public:
    char* get();
};

char* ExtrudedPartInstance::extrudedPartInstance_00892710()
{
    return reinterpret_cast<char*>(
        reinterpret_cast<ExtrudedPartCallee00892710*>(
            *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0xe0)
        )->get()
    ) + 0x30;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
