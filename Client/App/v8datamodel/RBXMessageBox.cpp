#include "v8datamodel/RBXMessageBox.h"

#include "decomp.h"

namespace QtUtilities {

__declspec(dllimport) void __stdcall RBXMessageBox_Func_00E110FC(int);

// FUNCTION: ROBLOXSTUDIO 0x004794a0
RBXMessageBox::RBXMessageBox()
{
	volatile int state = 0;
	RBXMessageBox_Func_00E110FC(0x00F12F2D);
}

__declspec(dllimport) void __cdecl RBXMessageBox_Func_00E10CAC(RBXMessageBox*, int, int);

// FUNCTION: ROBLOXSTUDIO 0x0047aa20
RBXMessageBox* __fastcall RBXMessageBox::initialize(void** param)
{
	void* data = *param;
	volatile int local = 0;
	RBXMessageBox_Func_00E10CAC(this, ((int*)data)[3], ((int*)data)[2]);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace QtUtilities
