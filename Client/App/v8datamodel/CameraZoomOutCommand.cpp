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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
