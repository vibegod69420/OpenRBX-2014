#include "v8datamodel/sp_counted_impl_p.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00ca6040
void sp_counted_impl_p::freeMember0C()
{
	rbx_free_mem(alloc_000c);
}

// FUNCTION: ROBLOXSTUDIO 0x00ca6050
void sp_counted_impl_p::freeMember0C_slot1()
{
	rbx_free_mem(alloc_000c);
}

namespace detail {

struct sp_counted_impl_p_object
{
	void dispose(sp_counted_impl_p_object* p);
};

} // namespace detail

// FUNCTION: ROBLOXSTUDIO 0x00467d10
void sp_counted_impl_p::dispose()
{
	detail::sp_counted_impl_p_object* p = *(detail::sp_counted_impl_p_object**)((char*)this + 0x0C);
	if (p)
	{
		p->dispose(p);
	}
}

struct sp_counted_impl_p_call
{
	void (*func)(void*);
	void* data;
};

// FUNCTION: ROBLOXSTUDIO 0x004b3be0
void __cdecl sp_counted_impl_p::invoke()
{
	sp_counted_impl_p_call* c = reinterpret_cast<sp_counted_impl_p_call*>(this);
	c->func(c->data);
}

struct sp_counted_impl_p_invoke_arg
{
	void (__thiscall *func)(void*, void*);
	int offset;
	char* base;
};

// FUNCTION: ROBLOXSTUDIO 0x004b3c80
void __cdecl sp_counted_impl_p::invoke(void* arg)
{
	sp_counted_impl_p_invoke_arg* c = reinterpret_cast<sp_counted_impl_p_invoke_arg*>(this);
	c->func(c->base + c->offset, arg);
}

struct sp_counted_impl_p_invoke2
{
	void (__thiscall *func)(void*, void*, void*, void*);
	void* target;
	void* pad;
	void* data;
};

// FUNCTION: ROBLOXSTUDIO 0x004b3c30
void __cdecl sp_counted_impl_p::invoke(void* a, void* b)
{
	sp_counted_impl_p_invoke2* c = reinterpret_cast<sp_counted_impl_p_invoke2*>(this);
	c->func(c->target, c->data, a, b);
}

struct sp_counted_impl_p_invoke_cdecl
{
	void (__cdecl *func)(void*, void*, void*);
	void* arg1;
	void* arg2;
};

// FUNCTION: ROBLOXSTUDIO 0x004b3fa0
void __cdecl sp_counted_impl_p::call(void* arg)
{
	sp_counted_impl_p_invoke_cdecl* c = reinterpret_cast<sp_counted_impl_p_invoke_cdecl*>(this);
	c->func(c->arg1, c->arg2, arg);
}

// FUNCTION: ROBLOXSTUDIO 0x00ca73e0
struct sp_counted_impl_p_get_pair
{
	void* (__cdecl *func)(void*);
	void* data;
};

__int64 __cdecl sp_counted_impl_p::getPair()
{
	sp_counted_impl_p_get_pair* c = reinterpret_cast<sp_counted_impl_p_get_pair*>(this);
	__int64* r = reinterpret_cast<__int64*>(c->func(c->data));
	return *r;
}

// FUNCTION: ROBLOXSTUDIO 0x0069ec60
void sp_counted_impl_p::destroySubPtr0C()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00955080
void sp_counted_impl_p::destroySubPtr0C_slot1()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da60
void sp_counted_impl_p::destroySubPtr0C_da60()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
