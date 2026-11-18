#include "QueryD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct IDirect3DQuery9
{
	virtual long __stdcall QueryInterface(const void* riid, void** ppvObject) = 0;
	virtual unsigned long __stdcall AddRef() = 0;
	virtual unsigned long __stdcall Release() = 0;
};

// FUNCTION: ROBLOXSTUDIO 0x005e0810
void QueryD3D9::release()
{
	IDirect3DQuery9* query = *(IDirect3DQuery9**)((char*)this + 0x2C);
	if (query)
	{
		query->Release();
		*(IDirect3DQuery9**)((char*)this + 0x2C) = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
