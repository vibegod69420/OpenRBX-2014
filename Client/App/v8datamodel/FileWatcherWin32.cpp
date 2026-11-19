#include "v8datamodel/FileWatcherWin32.h"

#include "decomp.h"

namespace FW {

extern "C" __declspec(dllimport) unsigned long __stdcall MsgWaitForMultipleObjectsEx(
	unsigned long nCount,
	void* const* pHandles,
	unsigned long dwMilliseconds,
	unsigned long dwWakeMask,
	unsigned long dwFlags);

// FUNCTION: ROBLOXSTUDIO 0x00451560
void FileWatcherWin32::idle()
{
	MsgWaitForMultipleObjectsEx(0, 0, 0, 0x4FFu, 2u);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace FW
