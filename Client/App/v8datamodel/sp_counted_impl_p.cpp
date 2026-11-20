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

// FUNCTION: ROBLOXSTUDIO 0x00a2da80
void sp_counted_impl_p::destroySubPtr0C_da80()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00b771a0
void sp_counted_impl_p::destroySubPtr0C_71a0()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00c2f620
void sp_counted_impl_p::destroySubPtr0C_f620()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00c5ae90
void sp_counted_impl_p::destroySubPtr0C_ae90()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00c93d90
void sp_counted_impl_p::destroySubPtr0C_3d90()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00ca5fe0
void sp_counted_impl_p::destroySubPtr0C_5fe0()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00a34330
void sp_counted_impl_p::destroySubPtr0C_4330()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p) {
		((sp_counted_impl_p*)((char*)p + 8))->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x0084fda0
void sp_counted_impl_p::destroySubPtr0C_fda0()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p) {
		((sp_counted_impl_p*)((char*)p + 4))->onDestroy();
		p->onDestroy();
		rbx_free_mem(p);
	}
}

struct sp_counted_impl_p_map
{
	void __thiscall _Erase(void** out, void* left, void* head);
};

// FUNCTION: ROBLOXSTUDIO 0x009be9f0
void sp_counted_impl_p::disposeHeldMap()
{
	sp_counted_impl_p_map* p = (sp_counted_impl_p_map*)ptr_000c;
	if (p)
	{
		void* head = *(void**)p;
		void* local;
		p->_Erase(&local, *(void**)head, head);
		rbx_free_mem(*(void**)p);
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x0077b120
int sp_counted_impl_p::getGlobal_b120() const
{
	return s_value_0077b120;
}

// FUNCTION: ROBLOXSTUDIO 0x0077b130
int sp_counted_impl_p::getGlobal_b130() const
{
	return s_value_0077b130;
}

struct sp_counted_impl_p_basic_string
{
	union
	{
		char* ptr;
		char buf[16];
	};
	unsigned int size;
	unsigned int capacity;
};

// FUNCTION: ROBLOXSTUDIO 0x008f67f0
void sp_counted_impl_p::disposeString()
{
	sp_counted_impl_p_basic_string* s = (sp_counted_impl_p_basic_string*)ptr_000c;
	if (s)
	{
		if (s->capacity >= 0x10)
		{
			rbx_free_mem(s->ptr);
		}
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		rbx_free_mem(s);
	}
}

struct sp_counted_impl_p_string_holder
{
	int _pad0;
	sp_counted_impl_p_basic_string str;
};

// FUNCTION: ROBLOXSTUDIO 0x00ca6000
void sp_counted_impl_p::disposeStringHolder()
{
	sp_counted_impl_p_string_holder* p = (sp_counted_impl_p_string_holder*)ptr_000c;
	if (p)
	{
		if (p->str.capacity >= 0x10)
		{
			rbx_free_mem(p->str.ptr);
		}
		p->str.capacity = 0x0F;
		p->str.size = 0;
		p->str.buf[0] = 0;
		rbx_free_mem(p);
	}
}

extern "C" long _InterlockedExchange(long volatile* Target, long Value);
#pragma intrinsic(_InterlockedExchange)

extern "C" __declspec(dllimport) void __stdcall sp_counted_impl_p_release_handle(void*);

struct sp_counted_impl_p_abuse_data
{
	void* field_00;
	void destroyBody();
};

// FUNCTION: ROBLOXSTUDIO 0x00c2f5e0
void sp_counted_impl_p::destroySubPtr0C_f5e0()
{
	sp_counted_impl_p_abuse_data* p = (sp_counted_impl_p_abuse_data*)ptr_000c;
	if (p)
	{
		void* old = (void*)_InterlockedExchange((long volatile*)((char*)p + 0x18), 0);
		if (old)
		{
			sp_counted_impl_p_release_handle(old);
		}

		p->destroyBody();
		rbx_free_mem(p->field_00);
		p->field_00 = 0;
		rbx_free_mem(p);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
