#include "v8datamodel/unknown_exception.h"

#include "decomp.h"

namespace boost {

// FUNCTION: ROBLOXSTUDIO 0x00953980
void unknown_exception::add_ref() const
{
	++*(unsigned long*)((char*)this + 0x24);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace boost
