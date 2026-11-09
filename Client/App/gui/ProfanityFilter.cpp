#include "gui/ProfanityFilter.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00935900
void ProfanityFilter::destroySubPtr0C()
{
	ProfanityFilter* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
