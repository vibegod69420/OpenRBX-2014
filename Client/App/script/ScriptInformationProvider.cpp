#include "script/ScriptInformationProvider.h"

#include "decomp.h"

namespace RBX {

void sub_B1B300();

// FUNCTION: ROBLOXSTUDIO 0x00b1b4d0
ScriptInformationProvider::ScriptInformationProvider()
{
	sub_B1B300();

	*((unsigned char*)this + 0x64) = 1;
	*(unsigned int*)this = 0xEC59A4u;
	*(unsigned int*)((char*)this + 4) = 0xEC5A1Cu;
	*(unsigned int*)((char*)this + 0x18) = 0xEC5A24u;
	*(unsigned int*)((char*)this + 0x1C) = 0xEC5A30u;
	*(unsigned int*)((char*)this + 0x7C) = 0xFu;
	*(unsigned int*)((char*)this + 0x78) = 0u;
	*((unsigned char*)this + 0x68) = 0;
	*(unsigned int*)((char*)this + 0x94) = 0xFu;
	*(unsigned int*)((char*)this + 0x90) = 0u;
	*((unsigned char*)this + 0x80) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
