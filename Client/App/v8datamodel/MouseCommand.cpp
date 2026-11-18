#include "v8datamodel/MouseCommand.h"

#include "decomp.h"

namespace RBX {

struct MouseCommandSubObject
{
	virtual void destroy(int);
};

struct MouseCommandObject
{
	char pad[0x1C];
	MouseCommandSubObject sub;
};

// FUNCTION: ROBLOXSTUDIO 0x00a541c0
void MouseCommand::clear()
{
	MouseCommandObject* obj = *(MouseCommandObject**)((char*)this + 0x0C);
	if (obj)
	{
		obj->sub.destroy(1);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
