#include "DeviceGL.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x006077e0
int DeviceGL::getField34() const
{
	return field_0034;
}

// FUNCTION: ROBLOXSTUDIO 0x00609580
const int* DeviceGL::getMemberPtr0C() const
{
	return &member_000c;
}

class DeviceGLContext;

class DeviceGLResource
{
public:
	char pad[0x28];
	int m_width;  // 0x28
	int m_height; // 0x2c

	void setViewport(int w, int h);
};

class DeviceGLContext
{
public:
	virtual void func0();
	virtual void activate();
	virtual void func2();
	virtual void func3();
	virtual void func4();
	virtual void* getViewportSize(void* out, int width, int height);
};

// FUNCTION: ROBLOXSTUDIO 0x006076a0
bool DeviceGL::applyViewport()
{
	(*(DeviceGLContext**)((char*)this + 0x50))->activate();

	DeviceGLResource* resource = (DeviceGLResource*)field_0034;
	int size[2];
	int* outSize = (int*)(*(DeviceGLContext**)((char*)this + 0x50))->getViewportSize(
		size, resource->m_width, resource->m_height);

	((DeviceGLResource*)field_0034)->setViewport(outSize[0], outSize[1]);

	return true;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
