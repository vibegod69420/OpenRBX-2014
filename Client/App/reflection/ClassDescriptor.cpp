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

// FUNCTION: ROBLOXSTUDIO 0x004117e0
void ClassDescriptor::clear()
{
	typedef void (__cdecl *DeallocFunc)(void*);
	DeallocFunc dealloc = *reinterpret_cast<DeallocFunc*>(0x00E10508);

	void* p = *(void**)((char*)this + 0x24);
	if (p)
	{
		dealloc(p);
		*(void**)((char*)this + 0x24) = 0;
		*(void**)((char*)this + 0x28) = 0;
		*(void**)((char*)this + 0x2C) = 0;
	}

	p = *(void**)((char*)this + 0x0C);
	if (p)
	{
		dealloc(p);
		*(void**)((char*)this + 0x0C) = 0;
		*(void**)((char*)this + 0x10) = 0;
		*(void**)((char*)this + 0x14) = 0;
	}

	p = *(void**)((char*)this + 0x00);
	if (p)
	{
		dealloc(p);
		*(void**)((char*)this + 0x00) = 0;
		*(void**)((char*)this + 0x04) = 0;
		*(void**)((char*)this + 0x08) = 0;
	}
}

__declspec(dllimport) void* __stdcall CreateEventA(void* lpEventAttributes, int bManualReset, int bInitialState, const char* lpName);

// FUNCTION: ROBLOXSTUDIO 0x00411590
void* __cdecl ClassDescriptor::createOnceEvent(unsigned long value)
{
	if (*reinterpret_cast<char*>(this) == 0)
	{
		static const char kOnceFlagName[] = "Local\\{C15730E2-145C-4c5e-B005-3BC753F42475}-once-flag";
		struct OnceFlagBuf { char data[55]; };
		*reinterpret_cast<OnceFlagBuf*>(this) = *reinterpret_cast<const OnceFlagBuf*>(kOnceFlagName);

		sub_4114B0(value, reinterpret_cast<char*>(this) + 0x36);
		sub_411520(GetCurrentProcessId(), reinterpret_cast<char*>(this) + 0x3e);
	}

	return CreateEventA(0, 1, 0, reinterpret_cast<const char*>(this));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Reflection
} // namespace RBX
