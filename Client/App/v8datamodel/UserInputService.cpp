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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
