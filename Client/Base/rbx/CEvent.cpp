#include "rbx/CEvent.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x006befa0
void CEvent::destroySubPtr0C()
{
	CEvent* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
