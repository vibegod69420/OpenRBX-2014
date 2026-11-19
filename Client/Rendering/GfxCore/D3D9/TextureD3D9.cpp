#include "TextureD3D9.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct TextureFormatEntry
{
	int flag;
	unsigned int d3dFormat;
};

void* sub_5EA030(void* device, unsigned int width, unsigned int height, unsigned int levels, unsigned int usage, unsigned int format, unsigned int pool, int sharedHandle, unsigned int d3dFormat);

// FUNCTION: ROBLOXSTUDIO 0x005e9f80
void TextureD3D9::uploadTexture()
{
	int formatIndex = *(int*)((char*)this + 0x40);

	if (((TextureFormatEntry*)0x00E1B7B0)[formatIndex].flag == 0)
	{
		void* deviceOwner = *(void**)((char*)this + 4);

		*(void**)((char*)this + 0x4C) = sub_5EA030(
			*(void**)((char*)deviceOwner + 0x14),
			*(unsigned int*)((char*)this + 0x28),
			*(unsigned int*)((char*)this + 0x2C),
			*(unsigned int*)((char*)this + 0x30),
			*(unsigned int*)((char*)this + 0x34),
			*(unsigned int*)((char*)this + 0x38),
			*(unsigned int*)((char*)this + 0x3C),
			0,
			((TextureFormatEntry*)0x00E1B7B0)[formatIndex].d3dFormat);
	}
}

struct TextureD3D9_ListHelper
{
	void sub_5EB040(void* out, void* node, void* head);
};

// FUNCTION: ROBLOXSTUDIO 0x005eae00
void TextureD3D9::sub_5EAE00()
{
	void* local;
	void* head = *(void**)this;
	reinterpret_cast<TextureD3D9_ListHelper*>(this)->sub_5EB040(&local, *(void**)head, head);
	::operator delete(*(void**)this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
