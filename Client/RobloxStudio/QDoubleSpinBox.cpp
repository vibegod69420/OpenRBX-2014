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

extern "C" char unk_012C6C78;
typedef bool (__thiscall *unk_00E10524_t)(void*, void*);
extern "C" unk_00E10524_t unk_00E10524;

// FUNCTION: ROBLOXSTUDIO 0x004780c0
bool QDoubleSpinBox::isMetaObjectMatch() const
{
	void* vfunc = (*(void***)this)[4];
	if (vfunc == &unk_012C6C78)
		return true;
	return unk_00E10524(&unk_012C6C78, vfunc);
}

extern "C" char unk_012C6C60;

// FUNCTION: ROBLOXSTUDIO 0x00478580
bool QDoubleSpinBox::isMetaObjectMatch2() const
{
	void* vfunc = (*(void***)this)[4];
	if (vfunc == &unk_012C6C60)
		return true;
	return unk_00E10524(&unk_012C6C60, vfunc);
}

// AUTO-GENERATED IMPLEMENTATIONS


