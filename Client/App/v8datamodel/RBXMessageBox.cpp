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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace QtUtilities
