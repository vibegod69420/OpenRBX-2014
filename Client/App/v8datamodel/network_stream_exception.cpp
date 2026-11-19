#include "v8datamodel/network_stream_exception.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00c72990
const char* network_stream_exception::what() const
{
	const char* ptr = reinterpret_cast<const char*>(this) + 0x0C;
	if (*reinterpret_cast<const unsigned int*>(reinterpret_cast<const char*>(this) + 0x20) >= 0x10)
	{
		ptr = *reinterpret_cast<const char* const*>(ptr);
	}
	return ptr;
}

// FUNCTION: ROBLOXSTUDIO 0x00c75250
void network_stream_exception::destroyInstance(network_stream_exception* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
