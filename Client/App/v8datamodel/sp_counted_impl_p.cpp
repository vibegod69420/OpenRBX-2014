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

// FUNCTION: ROBLOXSTUDIO 0x006a6610
extern void (__fastcall *sp_counted_impl_p_fn_006a6621)(void*);
extern void (__fastcall *sp_counted_impl_p_fn_006a6639)(void*);

struct sp_counted_impl_p_obj_006a6610
{
	void* ptr_0000;
	void destroy_006a63a0();
};

void sp_counted_impl_p::destroySubPtr0C_6610()
{
	sp_counted_impl_p_obj_006a6610* p = (sp_counted_impl_p_obj_006a6610*)ptr_000c;
	if (p)
	{
		p->destroy_006a63a0();
		sp_counted_impl_p_fn_006a6621(p);
		rbx_free_mem(p->ptr_0000);
		p->ptr_0000 = 0;
		sp_counted_impl_p_fn_006a6639(p);
		rbx_free_mem(p);
	}
}

void __stdcall sub_CF669E(void* ptr, unsigned int size, unsigned int count, void* dtor);

// FUNCTION: ROBLOXSTUDIO 0x00cd40f0
void sp_counted_impl_p::disposeNuggetHistory()
{
	sp_counted_impl_p* p = ptr_000c;
	if (p)
	{
		sub_CF669E((char*)p + 8, 0x28, 0x28, (void*)0x00CCF490);
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x0077d690
void __cdecl sp_counted_impl_p::assign(void* src)
{
	*(unsigned char*)this = *(unsigned char*)src;
}

// FUNCTION: ROBLOXSTUDIO 0x0077d6a0
void __cdecl sp_counted_impl_p::assignWord(void* src)
{
	*(unsigned short*)this = *(unsigned short*)src;
}

// FUNCTION: ROBLOXSTUDIO 0x00a35150
int __cdecl sp_counted_impl_p::getCount() const
{
	const char* base = reinterpret_cast<const char*>(this);
	int v8 = *reinterpret_cast<const int*>(base + 8);
	int vC = *reinterpret_cast<const int*>(base + 0xC);
	return (v8 - vC) >> 4;
}

void __cdecl sub_A378D0(void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00a34ed0
int __cdecl sp_counted_impl_p::sub_A34ED0()
{
	sub_A378D0(this);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a34d00
void* __cdecl sp_counted_impl_p::sub_A34D00(void* value)
{
	void* base = *(void**)((char*)this + 0x10);
	void* old = *(void**)((char*)base + 0x58);
	*(void**)((char*)base + 0x58) = value;
	return old;
}

// FUNCTION: ROBLOXSTUDIO 0x00b72040
int __cdecl sp_counted_impl_p::sub_B72040()
{
	extern void __cdecl sub_A35560(void* a, int b);

	sub_A35560(this, 1);
	return 1;
}

struct sp_counted_impl_p_sub_A34BF0_arg
{
	void* first;
	void* second;
};

void __cdecl sub_A365B0(void*, void*, void*);

// FUNCTION: ROBLOXSTUDIO 0x00a34bf0
void __cdecl sp_counted_impl_p::sub_A34BF0(void* arg)
{
	sp_counted_impl_p_sub_A34BF0_arg* p = (sp_counted_impl_p_sub_A34BF0_arg*)arg;
	sub_A365B0(this, p->first, p->second);
}

void __cdecl sub_A389C0(void* a, int b, void* c);
extern void* dword_128DC74;

// FUNCTION: ROBLOXSTUDIO 0x00b7a200
int __cdecl sp_counted_impl_p::sub_B7A200()
{
	sub_A389C0(this, 1, dword_128DC74);
	return 0;
}

extern void* dword_128DC78;

// FUNCTION: ROBLOXSTUDIO 0x00b7a220
int __cdecl sp_counted_impl_p::sub_B7A220()
{
	sub_A389C0(this, 1, dword_128DC78);
	return 0;
}

extern void* dword_128DC7C;

// FUNCTION: ROBLOXSTUDIO 0x00b7a240
int __cdecl sp_counted_impl_p::sub_B7A240()
{
	sub_A389C0(this, 1, dword_128DC7C);
	return 0;
}

extern void* dword_124EAD0;

// FUNCTION: ROBLOXSTUDIO 0x00b7a3e0
int __cdecl sp_counted_impl_p::sub_B7A3E0()
{
	sub_A389C0(this, 1, dword_124EAD0);
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00b7a430
extern void* dword_124EB28;

int __cdecl sp_counted_impl_p::sub_B7A430()
{
	sub_A389C0(this, 1, dword_124EB28);
	return 0;
}

extern void* dword_124EAC4;

// FUNCTION: ROBLOXSTUDIO 0x00b7a450
int __cdecl sp_counted_impl_p::sub_B7A450()
{
	sub_A389C0(this, 1, dword_124EAC4);
	return 0;
}

extern void* dword_124EAD8;

// FUNCTION: ROBLOXSTUDIO 0x00b7a4e0
int __cdecl sp_counted_impl_p::sub_B7A4E0()
{
	sub_A389C0(this, 1, dword_124EAD8);
	return 0;
}

extern void* dword_124EADC;

// FUNCTION: ROBLOXSTUDIO 0x00b7a500
int __cdecl sp_counted_impl_p::sub_B7A500()
{
	sub_A389C0(this, 1, dword_124EADC);
	return 0;
}

void* __cdecl sub_A38740(void* arg, int flag);
extern void (__cdecl *dword_E106FC)(void*);

// FUNCTION: ROBLOXSTUDIO 0x00b71e40
int __cdecl sp_counted_impl_p::sub_B71E40()
{
	dword_E106FC(sub_A38740(this, 1));
	return 0;
}

void __cdecl sub_425FE0(void*);

// FUNCTION: ROBLOXSTUDIO 0x00424710
sp_counted_impl_p* __cdecl sp_counted_impl_p::sub_424710()
{
	volatile int unused = 0;
	sub_425FE0(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00b740c0
void sp_counted_impl_p::destroyInstance(sp_counted_impl_p* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

struct sp_counted_impl_p_sub_4B2610
{
	void __thiscall sub_4B2610(void* arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x004b1d10
sp_counted_impl_p* __cdecl sp_counted_impl_p::sub_4B1D10(void* arg)
{
	volatile int local = 0;
	((sp_counted_impl_p_sub_4B2610*)this)->sub_4B2610(arg, 1);
	return this;
}

struct sp_counted_impl_p_sub_781AD0
{
	void __thiscall sub_781AD0(void* arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0077e970
sp_counted_impl_p* __cdecl sp_counted_impl_p::sub_77E970(sp_counted_impl_p* self, void* arg)
{
	volatile int local = 0;
	((sp_counted_impl_p_sub_781AD0*)self)->sub_781AD0(arg, 1);
	return self;
}

struct sp_counted_impl_p_sub_781DB0
{
	void __thiscall sub_781DB0(void* arg, int flag);
};

// FUNCTION: ROBLOXSTUDIO 0x0077e990
sp_counted_impl_p* __cdecl sp_counted_impl_p::sub_77E990(sp_counted_impl_p* self, void* arg)
{
	volatile int local = 0;
	((sp_counted_impl_p_sub_781DB0*)self)->sub_781DB0(arg, 1);
	return self;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
