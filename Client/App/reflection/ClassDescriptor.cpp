#include "reflection/ClassDescriptor.h"

#include "decomp.h"

namespace RBX {
namespace Reflection {

// FUNCTION: ROBLOXSTUDIO 0x00411990
int __cdecl ClassDescriptor::is(const ClassDescriptor* target) const
{
	return *(const ClassDescriptor* const*)((const char*)this + 0x14) == target;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Reflection
} // namespace RBX
