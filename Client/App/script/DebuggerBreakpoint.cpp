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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Scripting
} // namespace RBX
