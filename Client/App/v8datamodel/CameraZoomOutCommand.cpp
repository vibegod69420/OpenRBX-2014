#include "v8datamodel/CameraZoomOutCommand.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009349c0
void CameraZoomOutCommand::destroyInstance(CameraZoomOutCommand* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x009349e0
void CameraZoomOutCommand::destroyInstance_49e0(CameraZoomOutCommand* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
