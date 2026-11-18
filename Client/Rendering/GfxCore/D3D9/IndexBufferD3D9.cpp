#include "IndexBufferD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct IDirect3DIndexBuffer9
{
	virtual void __stdcall slot0() = 0;
	virtual void __stdcall slot1() = 0;
	virtual void __stdcall slot2() = 0;
	virtual void __stdcall slot3() = 0;
	virtual void __stdcall slot4() = 0;
	virtual void __stdcall slot5() = 0;
	virtual void __stdcall slot6() = 0;
	virtual void __stdcall slot7() = 0;
	virtual void __stdcall slot8() = 0;
	virtual void __stdcall slot9() = 0;
	virtual void __stdcall slot10() = 0;
	virtual void __stdcall slot11() = 0;
	virtual long __stdcall Unlock() = 0;
};

// FUNCTION: ROBLOXSTUDIO 0x005e52e0
void IndexBufferD3D9::unlock()
{
	(*(IDirect3DIndexBuffer9**)((char*)this + 0x34))->Unlock();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
