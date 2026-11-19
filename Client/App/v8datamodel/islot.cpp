#include "v8datamodel/islot.h"

#include "decomp.h"

namespace rbx {
namespace signals {

// FUNCTION: ROBLOXSTUDIO 0x00421de0
int islot::getConst16795348() const
{
	return 16795348;
}

// FUNCTION: ROBLOXSTUDIO 0x00422600
void islot::disconnect()
{
	int head = _vtable_or_head;
	if (head != 0)
	{
		if (!(head & 1))
		{
			void* arg = (char*)this + 8;
			void (__cdecl *func)(void*, void*, int) = *(void (__cdecl **)(void*, void*, int))(head & ~1);
			if (func)
			{
				func(arg, arg, 2);
			}
		}
		_vtable_or_head = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace signals
} // namespace rbx
