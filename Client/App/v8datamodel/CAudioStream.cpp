#include "v8datamodel/CAudioStream.h"

#include "decomp.h"

namespace RBX {
namespace DS {

extern void __stdcall sub_CF6970(int, int, int, int);

// FUNCTION: ROBLOXSTUDIO 0x00427ac0
void CAudioStream::sub_427AC0()
{
	sub_CF6970(((int*)this)[20], ((int*)this)[21], 10000, 0);
}

typedef struct _RTL_CRITICAL_SECTION {
	void* DebugInfo;
	long LockCount;
	long RecursionCount;
	void* OwningThread;
	void* LockSemaphore;
	unsigned long SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION;

extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(RTL_CRITICAL_SECTION* lpCriticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(RTL_CRITICAL_SECTION* lpCriticalSection);

// FUNCTION: ROBLOXSTUDIO 0x00429310
int CAudioStream::sub_429310()
{
	RTL_CRITICAL_SECTION* cs = (RTL_CRITICAL_SECTION*)((char*)this + 0x124);
	EnterCriticalSection(cs);
	*(int*)((char*)this + 0x140) = 0;
	*(int*)((char*)this + 0x144) = 0;
	LeaveCriticalSection(cs);
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace DS
} // namespace RBX
