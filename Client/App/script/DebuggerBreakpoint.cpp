#include "script/DebuggerBreakpoint.h"

#include "decomp.h"

namespace RBX {
namespace Scripting {

// FUNCTION: ROBLOXSTUDIO 0x0079e3c0
int DebuggerBreakpoint_CreateDebugInfo();

DebuggerBreakpoint::DebuggerBreakpoint()
{
	this->_vtable_or_head = 0;
	reinterpret_cast<int*>(this)[1] = 0;
	this->_vtable_or_head = DebuggerBreakpoint_CreateDebugInfo();
}

void __stdcall sub_7A3000(void* out, int value, int ptr);
void __cdecl sub_CF6522(void* ptr);

// FUNCTION: ROBLOXSTUDIO 0x0079f500
void DebuggerBreakpoint::sub_79F500()
{
	int local;
	void* node = (void*)this->_vtable_or_head;
	sub_7A3000(&local, *(int*)node, (int)node);
	sub_CF6522((void*)this->_vtable_or_head);
}

void __fastcall sub_79D900(DebuggerBreakpoint* self);

// FUNCTION: ROBLOXSTUDIO 0x0079ea20
DebuggerBreakpoint* DebuggerBreakpoint::sub_79EA20()
{
	sub_79D900(this);

	*(int*)this = 0x00E527C4;
	*(int*)((char*)this + 4) = 0x00E5283C;
	*(int*)((char*)this + 0x18) = 0x00E52844;
	*(int*)((char*)this + 0x1C) = 0x00E52850;
	*((unsigned char*)this + 0x64) = 1;
	*(int*)((char*)this + 0x68) = 0;
	*(int*)((char*)this + 0x80) = 0x0F;
	*(int*)((char*)this + 0x7C) = 0;
	*((unsigned char*)this + 0x6C) = 0;

	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Scripting
} // namespace RBX
