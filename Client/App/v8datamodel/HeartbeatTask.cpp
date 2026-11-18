#include "v8datamodel/HeartbeatTask.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008c5c70
void __cdecl HeartbeatTask::get_deleter(void* arg2, void* arg3, void* arg4)
{
	typedef void (__thiscall *fn_t)(void*, void*, void*);
	int target = *(int*)((char*)this + 8);
	target += *(int*)((char*)this + 4);
	(*(fn_t*)this)((void*)target, &arg2, &arg4);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
