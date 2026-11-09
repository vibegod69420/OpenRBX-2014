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

// FUNCTION: ROBLOXSTUDIO 0x00cc0c30
void GamePerfMonitor::setField10(int value)
{
	field_0010 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00cc0c40
void GamePerfMonitor::setField8C0(int value)
{
	field_08c0 = value;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
