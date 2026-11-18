#include "v8datamodel/StopCommand.h"

#include "decomp.h"

namespace RBX {

struct StopCommandState
{
	char pad[0x78];
	int state;
};

struct StopCommandStateProvider
{
	StopCommandState* getState();
};

// FUNCTION: ROBLOXSTUDIO 0x0082efb0
bool StopCommand::isEnabled()
{
	return reinterpret_cast<StopCommandStateProvider*>(reinterpret_cast<char*>(this) + 0x10)
		->getState()->state == 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
