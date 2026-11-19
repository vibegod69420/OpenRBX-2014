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

struct IDSCaptureState
{
	virtual int getState() = 0;
};

// FUNCTION: ROBLOXSTUDIO 0x0042add0
int DSVideoCaptureEngine::getState()
{
	void* p = *(void**)((char*)this + 0x2C);
	if (p)
	{
		void* q = *(void**)((char*)p + 0x54);
		void* obj = *(void**)q;
		if (obj)
			obj = (char*)obj + 0xF0;
		else
			obj = 0;

		return ((IDSCaptureState*)obj)->getState();
	}
	return 0;
}

__declspec(dllimport) void __stdcall DSVideoCaptureEngine_Stop(void* pEngine);

// FUNCTION: ROBLOXSTUDIO 0x00427a20
void DSVideoCaptureEngine::stopCapture()
{
	DSVideoCaptureEngine_Stop(this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
