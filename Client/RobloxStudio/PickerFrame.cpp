#include "PickerFrame.h"

#include "decomp.h"



class PickerRegistry
{
public:
	__declspec(dllimport) void Register(PickerFrame* picker, const char* name, int param);
};

extern PickerRegistry g_pickerRegistry;

// FUNCTION: ROBLOXSTUDIO 0x0049ff40
PickerFrame::PickerFrame()
{
	volatile int state = 0;
	g_pickerRegistry.Register(this, "...", 0);
}

// AUTO-GENERATED IMPLEMENTATIONS


