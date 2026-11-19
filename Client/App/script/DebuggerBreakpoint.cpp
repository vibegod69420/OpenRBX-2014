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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Scripting
} // namespace RBX
