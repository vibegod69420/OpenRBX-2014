#include "util/standardout.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00773390
void StandardOut::destroySubPtr0C()
{
	StandardOut* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00772de0
void StandardOut::destroyInstance(StandardOut* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
