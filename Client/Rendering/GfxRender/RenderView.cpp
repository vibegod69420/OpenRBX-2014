#include "RenderView.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x0042f280
int RenderView::getField8C() const
{
	return field_008c;
}

// FUNCTION: ROBLOXSTUDIO 0x006766e0
int RenderView::getSubField0C_1C8() const
{
	return sub_000c_01c8->val;
}

// FUNCTION: ROBLOXSTUDIO 0x006766f0
int RenderView::getSubField0C_1B0() const
{
	return sub_000c_01b0->val;
}

// FUNCTION: ROBLOXSTUDIO 0x006766d0
int RenderView::getSubField8C_BA0() const
{
	return sub_008c_0ba0->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00676930
void RenderView::setFlag9D(bool value)
{
	flag_009d = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00676300
void RenderView::dispatchWithFlag1(int arg)
{
	onDispatchWithFlag(arg, 1);
}

// FUNCTION: ROBLOXSTUDIO 0x0067d670
void* RenderView::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
