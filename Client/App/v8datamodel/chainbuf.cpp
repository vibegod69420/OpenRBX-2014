#include "v8datamodel/chainbuf.h"

#include "decomp.h"

namespace std {

// FUNCTION: ROBLOXSTUDIO 0x00c93a10
void chainbuf::destroyInstance(chainbuf* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

class ChainSource
{
public:
	void* getDescriptor(void* out);
};

void __cdecl sub_C70230(void* destination, void* descriptor);

// FUNCTION: ROBLOXSTUDIO 0x00c793b0
void __cdecl chainbuf::write(void* destination)
{
	void* local;
	void* descriptor = ((ChainSource*)this)->getDescriptor(&local);
	sub_C70230(destination, descriptor);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
