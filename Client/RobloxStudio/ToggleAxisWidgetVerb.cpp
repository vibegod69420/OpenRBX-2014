#include "ToggleAxisWidgetVerb.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00524020
bool ToggleAxisWidgetVerb::isChecked()
{
	struct AxisWidgetData
	{
		char pad[0x1D9];
		bool checked;
	};

	struct VerbState
	{
		char pad[0xBA0];
		AxisWidgetData* axisWidget;
	};

	VerbState* state = *(VerbState**)((char*)this + 0x0C);
	AxisWidgetData* axisWidget = state->axisWidget;
	if (axisWidget)
		return axisWidget->checked;

	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS


