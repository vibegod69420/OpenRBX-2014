#include "DSVideoCaptureEngine.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00427a10
const int* DSVideoCaptureEngine::getMemberPtr44() const
{
	return &member_0044;
}

typedef unsigned long DWORD;
__declspec(dllimport) DWORD __stdcall GetTickCount();

// FUNCTION: ROBLOXSTUDIO 0x0042ae00
int DSVideoCaptureEngine::getElapsedTime()
{
	return (int)(GetTickCount() - *(DWORD*)((char*)this + 0x18));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
