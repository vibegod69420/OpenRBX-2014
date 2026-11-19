#include "v8datamodel/UserInputService.h"

#include "decomp.h"

namespace RBX {

struct UserInputServiceStringVectorHelper
{
	void destroyRange(void* first, void* last);
};

void (__cdecl *g_userInputServiceHook_0xE10268)();

// FUNCTION: ROBLOXSTUDIO 0x00975020
void UserInputService::destructorHelper()
{
	void** data = reinterpret_cast<void**>(&_vtable_or_head);
	if (data[0] != 0)
	{
		g_userInputServiceHook_0xE10268();
		reinterpret_cast<UserInputServiceStringVectorHelper*>(this)->destroyRange(data[0], data[1]);
		::operator delete(data[0]);
		data[0] = 0;
		data[1] = 0;
		data[2] = 0;
	}
}

class UserInputNavigationFocus;
UserInputNavigationFocus* getUserInputNavigationFocus(UserInputService*);

class UserInputNavigationFocus
{
public:
	bool isNavigationSuppressed();
};

// FUNCTION: ROBLOXSTUDIO 0x0097aea0
int UserInputService::getNavigationGamepadInputType()
{
	if ((unsigned int)(*(int*)((char*)this + 0x11C) - 1) <= 1)
	{
		UserInputNavigationFocus* focus = getUserInputNavigationFocus(this);
		if (focus && !focus->isNavigationSuppressed())
		{
			return (*(int*)((char*)this + 0x11C) != 1) + 3;
		}
	}

	return *(int*)((char*)this + 0x120);
}

struct UserInputServiceStep97D7B0
{
	void step();
};

struct UserInputServiceStep97D470
{
	void step();
};

struct UserInputServiceStep97DD80
{
	void step();
};

struct UserInputServiceStep97D250
{
	void step();
};

struct UserInputServiceStep97DC20
{
	void step();
};

struct UserInputServiceSub368
{
	void clear();
};

// FUNCTION: ROBLOXSTUDIO 0x0097d040
void UserInputService::step()
{
	reinterpret_cast<UserInputServiceStep97D7B0*>(this)->step();
	reinterpret_cast<UserInputServiceStep97D470*>(this)->step();
	reinterpret_cast<UserInputServiceStep97DD80*>(this)->step();
	reinterpret_cast<UserInputServiceStep97D250*>(this)->step();
	reinterpret_cast<UserInputServiceStep97DC20*>(this)->step();

	if (*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x118) != 0)
	{
		reinterpret_cast<UserInputServiceSub368*>(reinterpret_cast<char*>(this) + 0x368)->clear();
		*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x118) = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
