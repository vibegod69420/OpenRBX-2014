#include "v8tree/Instance.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00427540
int Instance::getConst16797656() const
{
	return 16797656;
}

// FUNCTION: ROBLOXSTUDIO 0x00427550
int Instance::getConst16797664() const
{
	return 16797664;
}

// FUNCTION: ROBLOXSTUDIO 0x006b89b0
int Instance::getConst14956404() const
{
	return 14956404;
}

// FUNCTION: ROBLOXSTUDIO 0x006b7c50
void Instance::destroySubPtr0C()
{
	Instance* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00426d00
void* sub_825140();

Instance::Instance()
{
	_vtable_or_head = (int)sub_825140();
	*((int*)this + 1) = 0;
}

__declspec(dllimport) int* __cdecl sub_E10B04(int*);

// FUNCTION: ROBLOXSTUDIO 0x004f4330
void Instance::fetchContextId()
{
	int local;
	*(int*)((char*)this + 0x40C) = *sub_E10B04(&local);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
