#include "v8datamodel/CameraZoomInCommand.h"

#include "decomp.h"

namespace RBX {

class Camera
{
public:
	void zoom(int steps); // 0x007bb030
};

class CameraController
{
public:
	virtual void unk0();
	virtual void unk1();
	virtual Camera* getCamera();
};

// FUNCTION: ROBLOXSTUDIO 0x0082e9a0
void CameraZoomInCommand::execute()
{
	char* base = *(char**)((char*)this + 0x0C);
	CameraController* controller = reinterpret_cast<CameraController*>(base + 0x128);
	Camera* camera = controller->getCamera();
	camera->zoom(1);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
