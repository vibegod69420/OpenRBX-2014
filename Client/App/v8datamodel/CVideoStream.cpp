#include "v8datamodel/CVideoStream.h"

#include "decomp.h"

namespace RBX {
namespace DS {

// FUNCTION: ROBLOXSTUDIO 0x006b1400
int CVideoStream::getField30() const
{
	return field_0030;
}

extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void* lpCriticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void* lpCriticalSection);

// FUNCTION: ROBLOXSTUDIO 0x004285d0
int CVideoStream::sub_4285D0()
{
	void* cs = reinterpret_cast<char*>(this) + 0x138;
	EnterCriticalSection(cs);
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x150) = 0;
	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x154) = 0;
	LeaveCriticalSection(cs);
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace DS
} // namespace RBX
