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

class Instance
{
public:
	bool isDescendantOf(Instance* instance);
};

Instance* getDataModel();

// FUNCTION: ROBLOXSTUDIO 0x0078a3d0
ChangeHistoryService* ChangeHistoryService::getChangeHistoryService()
{
	Instance* instance = (Instance*)(&_vtable_or_head)[3];
	if (instance->isDescendantOf(getDataModel()))
		return (ChangeHistoryService*)((char*)this - 0x1c);
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
