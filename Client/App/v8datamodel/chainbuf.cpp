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

void* __cdecl sub_478B50(void*);
void __cdecl sub_C70010(void*, void*);

// FUNCTION: ROBLOXSTUDIO 0x00c79690
void __cdecl chainbuf::write_ptr(void* destination) const
{
	void* value = *(void**)sub_478B50((char*)this + 4);
	sub_C70010(destination, &value);
}

// FUNCTION: ROBLOXSTUDIO 0x00c797c0
void __cdecl chainbuf::write(void* src, void* destination)
{
	void* __cdecl sub_44D2D0(void* p);

	src = *(void**)sub_44D2D0((char*)src + 4);
	sub_C70230(destination, &src);
}

// FUNCTION: ROBLOXSTUDIO 0x00c7c2e0
void __stdcall sub_CF669E(void* ptr, unsigned int size, int count, void* dtor);
void __cdecl sub_CF6522(void* ptr);

struct _chainbuf_onDestroy_helper_C7C2E0
{
	void unlink(void* out, void* first, void* head);
};

void chainbuf::onDestroy()
{
	void* local;
	sub_CF669E((char*)this + 8, 0x18u, 0x80, (void*)0x004028A0);

	void* head = (void*)_vtable_or_head;
	((_chainbuf_onDestroy_helper_C7C2E0*)this)->unlink(&local, *(void**)head, head);

	sub_CF6522((void*)_vtable_or_head);
}

// FUNCTION: ROBLOXSTUDIO 0x00c7c320
void chainbuf::clear()
{
	void* local;
	sub_CF669E((char*)this + 8, 0x1C, 0x80, (void*)0x004028A0);
	void* head = (void*)_vtable_or_head;
	((_chainbuf_onDestroy_helper_C7C2E0*)this)->unlink(&local, *(void**)head, head);
	sub_CF6522((void*)_vtable_or_head);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
