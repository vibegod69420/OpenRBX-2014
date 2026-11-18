#include "v8datamodel/GamePerfMonitor.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00c63780
void GamePerfMonitor::destroySubPtr0C()
{
	GamePerfMonitor* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
