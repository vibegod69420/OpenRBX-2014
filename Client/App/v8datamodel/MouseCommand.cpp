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

struct MouseCommandWorkspace
{
	MouseCommand* getCurrentMouseCommand();
};

extern unsigned char rbxs_assertEnabled;
extern unsigned char (__cdecl* rbxs_assertHook)(const char*, const char*, int);
void __cdecl rbxs_assertCrash(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00933550
void MouseCommand::capture()
{
	if (rbxs_assertEnabled)
	{
		MouseCommandWorkspace* workspace = *(MouseCommandWorkspace**)((char*)this + 0x2C);
		MouseCommand* current = workspace->getCurrentMouseCommand();
		if (*(unsigned char*)((char*)current + 0x28))
		{
			if (rbxs_assertHook)
			{
				if (rbxs_assertHook(
					"!workspace->getCurrentMouseCommand()->captured()",
					"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\v8datamodel\\MouseCommand.cpp",
					63))
				{
					goto done;
				}
			}
			rbxs_assertCrash(rbxs_assertEnabled, "!workspace->getCurrentMouseCommand()->captured() file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\v8datamodel\\MouseCommand.cpp line: 63");
		}
	}

done:
	*(unsigned char*)((char*)this + 0x28) = 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
