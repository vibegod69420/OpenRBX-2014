#include "script/CoreScript.h"

#include "decomp.h"

namespace RBX {

class BaseScript
{
public:
	void construct();
};

// FUNCTION: ROBLOXSTUDIO 0x00a55c40
CoreScript::CoreScript()
{
	((BaseScript*)this)->construct();
	*(int*)((char*)this + 0x30) = 0;
	*(int*)((char*)this + 0x34) = 0;
	*(int*)((char*)this + 0x38) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
