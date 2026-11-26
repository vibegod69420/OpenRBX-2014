#include "UploadDialog.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x0058a950
int UploadDialog::getField28() const
{
	return field_0028;
}

class UploadDialog_Imports
{
public:
	__declspec(dllimport) void Call0();
	__declspec(dllimport) void Call1(int);
};

// FUNCTION: ROBLOXSTUDIO 0x00576180
void UploadDialog::OnCancel()
{
	((UploadDialog_Imports*)this)->Call0();
	((UploadDialog_Imports*)this)->Call1(2);
}

// AUTO-GENERATED IMPLEMENTATIONS


