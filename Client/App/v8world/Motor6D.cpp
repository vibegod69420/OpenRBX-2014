#include "v8world/Motor6D.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a8d9a0
// NOTE: This virtual function returns a float value via x87 stack (fld) using the
// exact memory access pattern shown in the target disassembly.
float Motor6D::slotLoadFloat_00a8d9a0()
{
	// mov eax, [ecx+0x8c]
	const int eax = *(const int*)((const char*)this + 0x8c);

	// fld dword ptr [eax+0xac]
	return *(const float*)((const char*)eax + 0xac);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
