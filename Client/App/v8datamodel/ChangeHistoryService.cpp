#include "v8datamodel/ChangeHistoryService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x007929c0
int ChangeHistoryService::IsRecording()
{
	return (&_vtable_or_head)[1] == 2;
}

// FUNCTION: ROBLOXSTUDIO 0x007929d0
int ChangeHistoryService::IsPlaying()
{
	return (&_vtable_or_head)[1] == 3;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
