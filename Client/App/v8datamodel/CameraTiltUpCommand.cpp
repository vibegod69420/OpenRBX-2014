#include "v8datamodel/CameraTiltUpCommand.h"

#include "decomp.h"

namespace RBX {

class CameraTiltUpCommand_Controller
{
public:
	void onCommand(int param);
};

class CameraTiltUpCommand_SubObject
{
public:
	virtual void v0();
	virtual void v1();
	virtual CameraTiltUpCommand_Controller* getController();
};

// FUNCTION: ROBLOXSTUDIO 0x0082e850
void CameraTiltUpCommand::execute()
{
	char* obj = *(char**)((char*)this + 0x0C);
	CameraTiltUpCommand_SubObject* sub = (CameraTiltUpCommand_SubObject*)(obj + 0x128);
	CameraTiltUpCommand_Controller* controller = sub->getController();
	controller->onCommand(-1);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
