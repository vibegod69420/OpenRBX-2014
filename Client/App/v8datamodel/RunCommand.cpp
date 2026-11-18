#include "v8datamodel/RunCommand.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0082eee0
class RunCommandState
{
public:
	void* getStateSource();
};

bool RunCommand_Check(void* context, int flag);

bool RunCommand::isEnabled()
{
	int state = *(int*)((char*)((RunCommandState*)((char*)this + 0x10))->getStateSource() + 0x78);
	if (RunCommand_Check(*(void**)((char*)this + 0x0C), 1) || state == 1)
		return false;
	return true;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
