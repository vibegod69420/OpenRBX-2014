#include "v8datamodel/GamePassService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b2b740
extern char g_GamePassServiceClassDescriptor;
typedef bool (__thiscall *GamePassServiceIsAFunc)(void const*, void*);
extern GamePassServiceIsAFunc g_GamePassServiceIsA;

bool GamePassService::isA() const
{
	void* const* vptr = *(void* const* const*)this;
	void* slot = vptr[4];
	if (slot == (void*)&g_GamePassServiceClassDescriptor)
		return true;
	return g_GamePassServiceIsA(&g_GamePassServiceClassDescriptor, slot);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
