#include "v8datamodel/CameraZoomOutCommand.h"

#include "decomp.h"

namespace RBX {

class Camera
{
public:
	bool zoom(int delta);
};

struct CameraOwner
{
	virtual void vf0();
	virtual void vf1();
	virtual Camera* getCamera();
};

// FUNCTION: ROBLOXSTUDIO 0x0082e9c0
void CameraZoomOutCommand::zoomOut()
{
	CameraOwner* owner = (CameraOwner*)(*(char**)((char*)this + 0x0C) + 0x128);
	Camera* camera = owner->getCamera();
	camera->zoom(0);
}

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

// FUNCTION: ROBLOXSTUDIO 0x00935be0
unsigned char CameraZoomOutCommand::isEnabled()
{
	unsigned char result = 0;
	unsigned char* p = *(unsigned char**)((char*)this + 4);
	if (p)
		result = p[0x0D1D];
	return result;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
