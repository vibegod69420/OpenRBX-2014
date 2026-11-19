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

// FUNCTION: ROBLOXSTUDIO 0x00933ef0
void __cdecl MouseCommand_createImpl(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6);

// FUNCTION: ROBLOXSTUDIO 0x00933ec0
MouseCommand* __cdecl MouseCommand::create(void* a1, void* a2, void* a3)
{
	void* v1;
	void* v2;

	MouseCommand_createImpl(this, a1, a2, a3, &v2, &v1);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
