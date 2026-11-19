#include "Network/RakPeerInterface.h"

#include "decomp.h"

namespace RakNet {

// FUNCTION: ROBLOXSTUDIO 0x00ce69d0

class RakPeer
{
public:
	~RakPeer();
};

struct RakPeerInterfaceLayout
{
	RakPeer* ptr;
	int* refCount;
};

void RakPeerInterface::Release()
{
	RakPeerInterfaceLayout* self = reinterpret_cast<RakPeerInterfaceLayout*>(this);
	if (self->refCount)
	{
		if (--(*self->refCount) == 0)
		{
			RakPeer* p = self->ptr;
			if (p)
			{
				p->~RakPeer();
				::operator delete(p);
			}
			if (self->refCount)
			{
				::operator delete(self->refCount);
			}
		}
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RakNet
