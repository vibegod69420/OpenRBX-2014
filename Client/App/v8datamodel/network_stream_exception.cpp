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

struct network_stream_exception_writer
{
	void write(const void* data, int mode, int count);
};

// FUNCTION: ROBLOXSTUDIO 0x00c76aa0
void __cdecl network_stream_exception::writeVarInt(unsigned int value)
{
	unsigned int v = value;
	do
	{
		unsigned char b = (unsigned char)(v & 0xFu);
		v >>= 4;
		if (v != 0)
		{
			b = (unsigned char)(b | 0x10u);
		}
		reinterpret_cast<network_stream_exception_writer*>(this)->write(&b, 5, 1);
	} while (v != 0);
}

// FUNCTION: ROBLOXSTUDIO 0x00c76630
struct network_stream_exception_sub4
{
	void init(void* p);
};

int __cdecl network_stream_exception_get_type();

void __cdecl network_stream_exception::init(const void* error)
{
	int local[2];
	local[0] = 0;
	local[1] = 0;
	network_stream_exception_copy(error, local);

	*reinterpret_cast<int*>(this) = network_stream_exception_get_type();
	reinterpret_cast<network_stream_exception_sub4*>(
		reinterpret_cast<char*>(this) + 4)->init(local);
}

struct network_stream_exception_endpoint
{
	unsigned short getPort();
	unsigned int getAddress();
};

// FUNCTION: ROBLOXSTUDIO 0x00c72ac0
network_stream_exception* __cdecl network_stream_exception::initEndpoint(void* endpoint)
{
	network_stream_exception_endpoint* ep = static_cast<network_stream_exception_endpoint*>(endpoint);
	unsigned short port = ep->getPort();
	unsigned int address = ep->getAddress();
	*reinterpret_cast<unsigned int*>(this) = address;
	*reinterpret_cast<unsigned short*>(reinterpret_cast<char*>(this) + 4) = port;
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
