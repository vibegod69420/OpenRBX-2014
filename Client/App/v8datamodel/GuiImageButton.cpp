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

// FUNCTION: ROBLOXSTUDIO 0x00873c70
bool GuiImageButton::isDownState() const
{
	return *(const int*)((const char*)this + 0x68) == 2
		&& *(const int*)((const char*)this + 0x64) == 1;
}

void* __cdecl rtdc_00CF67F8(void* inptr, long vfDelta, void* srcType, void* destType, int isReference);
int __cdecl func_007C7A90(GuiImageButton* self);

// FUNCTION: ROBLOXSTUDIO 0x007c9470
int GuiImageButton::activateFromHierarchy()
{
	if (*(unsigned char*)((char*)this + 0x8C))
		return 0;

	void* cur = *(void**)((char*)this + 0x38);
	unsigned char found = 0;

	if (!cur)
		goto ret0;

	do
	{
		if (found)
			goto action;

		{
			void* obj = rtdc_00CF67F8(cur, 0, (void*)0x012BDBF4, (void*)0x011EF084, 0);
			if (obj)
			{
				typedef unsigned char (__thiscall* Slot0Func)(void*, GuiImageButton*);
				found = (*(Slot0Func**)obj)[0](obj, this);
			}
		}

		cur = *(void**)((char*)cur + 0x38);
	} while (cur);

	if (!found)
		goto ret0;

action:
	return func_007C7A90(this);

ret0:
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00873bc0
bool GuiImageButton::isDownOffState() const
{
	return *(const int*)((const char*)this + 0x68) == 2
		&& *(const int*)((const char*)this + 0x64) == 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
