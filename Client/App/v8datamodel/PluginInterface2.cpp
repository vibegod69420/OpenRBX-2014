#include "v8datamodel/PluginInterface2.h"

#include "decomp.h"

namespace RakNet {

// FUNCTION: ROBLOXSTUDIO 0x00cc7320
bool PluginInterface2::IsEmpty() const
{
	void* value = *(void**)((char*)this + 4);
	return value == 0 || value == (void*)((char*)this + 4);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RakNet
