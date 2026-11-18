#include "RenderbufferD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

namespace
{
struct IUnknownD3D
{
	virtual long __stdcall QueryInterface(const void* riid, void** ppvObject) = 0;
	virtual unsigned long __stdcall AddRef() = 0;
	virtual unsigned long __stdcall Release() = 0;
};
}

// FUNCTION: ROBLOXSTUDIO 0x005e3d00
void RenderbufferD3D9::releaseResource()
{
	IUnknownD3D* resource = *(IUnknownD3D**)((char*)this + 0x38);
	if (resource)
	{
		resource->Release();
		*(IUnknownD3D**)((char*)this + 0x38) = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
