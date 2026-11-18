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

// FUNCTION: ROBLOXSTUDIO 0x005e5380
static int s_indexBufferD3D9Info[8][2];

void IndexBufferD3D9::release()
{
    IDirect3DIndexBuffer9* buffer = *reinterpret_cast<IDirect3DIndexBuffer9**>(reinterpret_cast<char*>(this) + 0x34);
    if (buffer != 0)
    {
        int index = *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x30);
        if (s_indexBufferD3D9Info[index][0] == 0)
        {
            buffer->slot2();
            *reinterpret_cast<IDirect3DIndexBuffer9**>(reinterpret_cast<char*>(this) + 0x34) = 0;
        }
    }
}

IDirect3DIndexBuffer9* sub_5E55D0(void* device, unsigned int size, unsigned int flags, int index);

// FUNCTION: ROBLOXSTUDIO 0x005e53b0
void IndexBufferD3D9::upload()
{
	int index = *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x30);
	if (s_indexBufferD3D9Info[index][0] == 0)
	{
		void* owner = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 4);
		*reinterpret_cast<IDirect3DIndexBuffer9**>(reinterpret_cast<char*>(this) + 0x34) =
			sub_5E55D0(
				*reinterpret_cast<void**>(reinterpret_cast<char*>(owner) + 0x14),
				*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x28),
				*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x2c),
				index);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
