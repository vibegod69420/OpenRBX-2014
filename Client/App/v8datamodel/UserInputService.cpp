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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
