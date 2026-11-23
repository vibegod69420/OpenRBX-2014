#include "QComboBox.h"

#include "decomp.h"



struct QComboBoxSlotTarget
{
	__declspec(dllimport) bool check(void* slot);
};

extern QComboBoxSlotTarget g_QComboBoxSlotTarget;

// FUNCTION: ROBLOXSTUDIO 0x0044db50
bool QComboBox::sub_44DB50()
{
	void* slot = (*(void***)this)[4];
	if (slot == (void*)&g_QComboBoxSlotTarget)
		return true;
	return g_QComboBoxSlotTarget.check(slot);
}

// FUNCTION: ROBLOXSTUDIO 0x0044da30
void __cdecl QComboBox::sub_44DA30(int* dst)
{
	if (dst)
	{
		dst[0] = ((int*)this)[0];
		dst[1] = ((int*)this)[1];
		dst[2] = ((int*)this)[2];
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


