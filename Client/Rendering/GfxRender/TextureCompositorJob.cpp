#include "TextureCompositorJob.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x006a03c0
struct TextureCompositorJobCalls : TextureCompositorJob
{
	void sub_6a0f50(int);
	void sub_6a1280(int);
};

void TextureCompositorJob::update()
{
	static_cast<TextureCompositorJobCalls*>(this)->sub_6a0f50(*(int*)((char*)this + 0x0c));
	static_cast<TextureCompositorJobCalls*>(this)->sub_6a1280(0);
	*(int*)((char*)this + 0x80) = *(int*)((char*)this + 0x0c);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
