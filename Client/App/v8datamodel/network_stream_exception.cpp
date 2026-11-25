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

struct network_stream_exception_sink
{
	void dispatch(void* p);
};

static __declspec(noinline) void __cdecl network_stream_exception_copy(const void* src, void* dst)
{
	const int* s = static_cast<const int*>(src);
	int* d = static_cast<int*>(dst);
	d[0] = s[0];
	d[1] = s[1];
}

// FUNCTION: ROBLOXSTUDIO 0x00c76100
void __cdecl network_stream_exception::raise(const void* error)
{
	int local[2];
	local[0] = 0;
	local[1] = 0;
	network_stream_exception_copy(error, local);

	if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 4) != 0)
	{
		reinterpret_cast<network_stream_exception_sink*>(this)->dispatch(local);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
