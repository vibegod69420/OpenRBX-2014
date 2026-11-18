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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
