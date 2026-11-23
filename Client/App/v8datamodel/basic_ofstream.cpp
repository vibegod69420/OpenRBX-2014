#include "v8datamodel/basic_ofstream.h"

#include "decomp.h"

namespace std {

extern "C" __declspec(dllimport) void _rbx_delete(void*);

struct _basic_ofstream_dtor_call {
	void __thiscall invoke(void* out, void* a2, void* a3);
};

// FUNCTION: ROBLOXSTUDIO 0x0048efa0
void basic_ofstream::dtor_body()
{
	void* local;
	void* p = *(void**)this;
	((_basic_ofstream_dtor_call*)this)->invoke(&local, *(void**)p, p);
	_rbx_delete(*(void**)this);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
