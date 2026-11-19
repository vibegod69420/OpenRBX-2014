#include "QDoubleSpinBox.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x00478740
void __cdecl QDoubleSpinBox::copyInternalData(void* target)
{
	if (target)
	{
		((int*)target)[0] = ((const int*)this)[0];
		((int*)target)[1] = ((const int*)this)[1];
		((int*)target)[2] = ((const int*)this)[2];
		((int*)target)[3] = ((const int*)this)[3];
	}
}

// AUTO-GENERATED IMPLEMENTATIONS


