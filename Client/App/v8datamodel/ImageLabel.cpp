#include "v8datamodel/ImageLabel.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x008789b0
struct ImageLabelRenderItem
{
	void update(bool visible);
};

struct ImageLabelSliceRenderItem
{
	void update(bool visible);
};

void ImageLabel::updateRenderItems()
{
	*(unsigned char*)((char*)this + 0x210) = 1;

	((ImageLabelRenderItem*)((char*)this + 0x124))->update(*(int*)((char*)this + 0xF8) != 0);
	((ImageLabelRenderItem*)((char*)this + 0x144))->update(*(int*)((char*)this + 0x100) != 0);
	((ImageLabelRenderItem*)((char*)this + 0x164))->update(*(int*)((char*)this + 0x108) != 0);
	((ImageLabelRenderItem*)((char*)this + 0x184))->update(*(int*)((char*)this + 0x110) != 0);
	((ImageLabelRenderItem*)((char*)this + 0x1A4))->update(*(int*)((char*)this + 0x118) != 0);
	((ImageLabelSliceRenderItem*)((char*)this + 0x1F4))->update(*(int*)((char*)this + 0x1C8) != 0);
	((ImageLabelRenderItem*)((char*)this + 0x1D4))->update(*(int*)((char*)this + 0x1C0) != 0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
