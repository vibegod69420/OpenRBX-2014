#include "RenderView.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00676640
bool RenderView::consumeFlagA0()
{
	bool value = flagA0;
	flagA0 = false;
	return value;
}

// FUNCTION: ROBLOXSTUDIO 0x00676930
void RenderView::setFlag9D(bool value)
{
	flag9D = value;
}

// FUNCTION: ROBLOXSTUDIO 0x006766d0
void* RenderView::getField8C_BA0() const
{
	return *(void**)((char*)field8C + 0xba0);
}

// FUNCTION: ROBLOXSTUDIO 0x006766e0
void* RenderView::getField0C_1C8() const
{
	return *(void**)((char*)field0C + 0x1c8);
}

// FUNCTION: ROBLOXSTUDIO 0x006766f0
// FUNCTION: ROBLOXSTUDIO 0x0042f280
void* RenderView::getField8CRaw() const
{
	return field8C;
}

void* RenderView::getField0C_1B0() const
{
	return *(void**)((char*)field0C + 0x1b0);
}

} // namespace Graphics
} // namespace RBX
