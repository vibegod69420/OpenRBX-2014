#include "Network/InstancePacketCache.h"

#include "decomp.h"

namespace RBX {
namespace Network {

// FUNCTION: ROBLOXSTUDIO 0x00c5a5f0

struct InstancePacketCacheBuffer
{
	void destroyRange(void* end, void* begin);
};

InstancePacketCache::~InstancePacketCache()
{
	char* thisPtr = (char*)this;
	char* p = *(char**)(thisPtr + 4);
	if (p)
	{
		if (*(unsigned char*)(thisPtr + 9))
		{
			void* buffer = *(void**)(p + 0x18);
			if (buffer)
			{
				if (*(int*)(p + 0x0C))
				{
					void* end = (char*)buffer + (*(int*)(p + 8) * 4);
					((InstancePacketCacheBuffer*)(p + 4))->destroyRange(end, 0);
				}
				::operator delete(*(void**)(p + 0x18));
				*(void**)(p + 0x18) = 0;
				*(int*)(p + 0x14) = 0;
			}
		}
		::operator delete(*(void**)(thisPtr + 4));
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Network
} // namespace RBX
