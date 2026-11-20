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

void* __cdecl sub_7D0950(void*);
void __cdecl sub_C70010(void*, void*);

// FUNCTION: ROBLOXSTUDIO 0x00c794f0
void __cdecl chainbuf::write_ptr(void* destination)
{
	void* value = *(void**)sub_7D0950((char*)this + 4);
	sub_C70010(destination, &value);
}

// FUNCTION: ROBLOXSTUDIO 0x00c79580
void __cdecl chainbuf::write_ptr(void* src, void* destination)
{
	void* __cdecl sub_44DD60(void* p);
	void __cdecl sub_C6FE20(void* destination, void* valuePtr);

	void* p = (char*)src + 4;
	void* tmp = sub_44DD60(p);
	void* value = *(void**)tmp;
	sub_C6FE20(destination, &value);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
