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

// FUNCTION: ROBLOXSTUDIO 0x00676640
bool RenderView::testAndClearFlagA0()
{
	bool* pFlag = (bool*)((char*)this + 0xA0);
	bool oldValue = *pFlag;
	*pFlag = false;
	return oldValue;
}

// FUNCTION: ROBLOXSTUDIO 0x006762e0
void RenderView::noop()
{

}

// FUNCTION: ROBLOXSTUDIO 0x00676290
void RenderView::initResources()
{
	unsigned char flag = *(volatile unsigned char*)0x01210363;
	if (flag)
	{
		void __cdecl sub_6B8A90(int, const char*, const void*);
		sub_6B8A90(flag, "RenderView::initResources - %p", this);

		flag = *(volatile unsigned char*)0x01210363;
		if (flag)
		{
			sub_6B8A90(flag, "RenderView::initResources finish", (const void*)0);
		}
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
