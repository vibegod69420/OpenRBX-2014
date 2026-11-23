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

__declspec(dllimport) __declspec(noreturn) void __cdecl _Xbad_alloc();

// FUNCTION: ROBLOXSTUDIO 0x0078c430
void* ChangeHistoryService::create()
{
	void* mem = ::operator new(0x58);
	if (mem == 0)
		_Xbad_alloc();

	int* p = (int*)((char*)mem + 4);
	*(int*)mem = *(int*)this;
	if (p)
		*p = *(int*)this;

	p = (int*)((char*)mem + 8);
	if (p)
		*p = *(int*)this;

	return mem;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
