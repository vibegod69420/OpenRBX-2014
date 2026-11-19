#include "v8datamodel/http_status_error.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00d02320
http_status_error::http_status_error()
{
	*(void**)this = ::operator new(0x38);
	*((unsigned char*)this + 4) = 0;
	*((int*)this + 2) = 0;
	*((int*)this + 3) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
