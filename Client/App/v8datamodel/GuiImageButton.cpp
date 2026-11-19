#include "v8datamodel/GuiImageButton.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00872a50
bool GuiImageButton::getFlag278() const
{
	return flag_0278;
}

// FUNCTION: ROBLOXSTUDIO 0x008a8740
int GuiImageButton::getFieldA4() const
{
	return field_00a4;
}

// FUNCTION: ROBLOXSTUDIO 0x0098e060
int GuiImageButton::getFieldA0() const
{
	return field_00a0;
}

// FUNCTION: ROBLOXSTUDIO 0x00873c50
bool GuiImageButton::isHoverState() const
{
	return *(const int*)((const char*)this + 0x68) == 0
		&& *(const int*)((const char*)this + 0x64) == 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
