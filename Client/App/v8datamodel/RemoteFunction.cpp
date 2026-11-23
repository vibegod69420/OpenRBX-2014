#include "v8datamodel/RemoteFunction.h"

#include "decomp.h"

namespace RBX {

void sub_774920(const char* serviceName, const char* className, void* context, int arg4, int arg5);

// FUNCTION: ROBLOXSTUDIO 0x009f0f30
void __cdecl RemoteFunction::sub_9f0f30()
{
	sub_774920("Game", "RemoteFunction", this, 0, 0);
}

// FUNCTION: ROBLOXSTUDIO 0x009f0f10
void __cdecl RemoteFunction::sub_9f0f10()
{
	sub_774920("Game", "RemoteEvent", this, 0, 0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
