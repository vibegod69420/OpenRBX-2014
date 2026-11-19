#include "reflection/ClassDescriptor.h"

#include "decomp.h"

namespace RBX {
namespace Reflection {

// FUNCTION: ROBLOXSTUDIO 0x00411990
int __cdecl ClassDescriptor::is(const ClassDescriptor* target) const
{
	return *(const ClassDescriptor* const*)((const char*)this + 0x14) == target;
}

void __cdecl sub_4114B0(unsigned long value, char* dest);
void __cdecl sub_411520(unsigned long value, char* dest);

__declspec(dllimport) unsigned long __stdcall GetCurrentProcessId();
__declspec(dllimport) void* __stdcall OpenEventA(unsigned long dwDesiredAccess, int bInheritHandle, const char* lpName);

extern "C" void* __cdecl memcpy(void* dst, const void* src, unsigned int count);

// FUNCTION: ROBLOXSTUDIO 0x004113b0
void* __cdecl ClassDescriptor::ensureOnceEvent(unsigned long value)
{
	if (*reinterpret_cast<char*>(this) == 0)
	{
		static const char kOnceFlagName[] = "Local\\{C15730E2-145C-4c5e-B005-3BC753F42475}-once-flag";
		memcpy(this, kOnceFlagName, 55);

		sub_4114B0(value, reinterpret_cast<char*>(this) + 0x36);
		sub_411520(GetCurrentProcessId(), reinterpret_cast<char*>(this) + 0x3e);
	}

	return OpenEventA(0x100002, 0, reinterpret_cast<const char*>(this));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Reflection
} // namespace RBX
