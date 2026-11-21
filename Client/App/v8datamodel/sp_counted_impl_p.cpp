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

struct sp_counted_impl_p_sub_781820
{
	void __thiscall sub_781820(void* a, void* b);
};

// FUNCTION: ROBLOXSTUDIO 0x0077d480
sp_counted_impl_p* __cdecl sp_counted_impl_p::sub_77D480(void* a, void* b)
{
	volatile int local = 0;
	((sp_counted_impl_p_sub_781820*)this)->sub_781820(a, b);
	return this;
}

struct sp_counted_impl_p_sub_7818B0
{
	void __thiscall sub_7818B0(void* a, void* b);
};

// FUNCTION: ROBLOXSTUDIO 0x0077d670
sp_counted_impl_p* __cdecl sp_counted_impl_p::sub_77D670(void* a, void* b)
{
	volatile int local = 0;
	((sp_counted_impl_p_sub_7818B0*)this)->sub_7818B0(a, b);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0077d840
sp_counted_impl_p* __cdecl sp_counted_impl_p::sub_77D840(void* /*unused*/, const char* str)
{
	const char* begin = str;
	const char* end = str;
	while (*end != '\0')
	{
		++end;
	}

	*(const char**)this = begin;
	*(const char**)((char*)this + 4) = end;
	return this;
}

struct sp_counted_impl_p_sub_77FD10
{
	void __thiscall sub_77FD10(void* a, void* b);
};

// FUNCTION: ROBLOXSTUDIO 0x0077e780
sp_counted_impl_p* __cdecl sp_counted_impl_p::sub_77E780(void* a, void* b)
{
	volatile int local = 0;
	((sp_counted_impl_p_sub_77FD10*)a)->sub_77FD10(this, b);
	return this;
}

bool __cdecl sub_403040(void* a, void* b);

// FUNCTION: ROBLOXSTUDIO 0x00990120
bool sp_counted_impl_p::sub_990120()
{
	void* p = *(void**)((char*)this + 0x64);
	if (p)
	{
		if (sub_403040((char*)p + 0x0C, (char*)this + 0x70))
			return true;
	}
	return false;
}

extern void* dword_124EAD4;
void __fastcall sub_CDA1A0(void*);

// FUNCTION: ROBLOXSTUDIO 0x00b7a400
int __cdecl sp_counted_impl_p::sub_B7A400()
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_124EAD4);
	sub_CDA1A0(result);
	return 0;
}

int __cdecl sub_B7C170(void* result, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00b7a550
int __cdecl sp_counted_impl_p::sub_B7A550()
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128DC74);
	return sub_B7C170(result, this);
}

int __cdecl sub_B7C190(void* result, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00b7a580
int __cdecl sp_counted_impl_p::sub_B7A580()
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128DC78);
	return sub_B7C190(result, this);
}

int __cdecl sub_B7C1C0(void* result, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00b7a5b0
int __cdecl sp_counted_impl_p::sub_B7A5B0()
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128DC7C);
	return sub_B7C1C0(result, this);
}

extern void* dword_128E200;
int __cdecl sub_B84780(void* result, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00b7a5e0
int __cdecl sp_counted_impl_p::sub_B7A5E0()
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128E200);
	return sub_B84780(result, this);
}

extern void* dword_12105E0;
int __cdecl sub_B850A0(void* result, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00b7a610
int __cdecl sp_counted_impl_p::sub_B7A610()
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_12105E0);
	return sub_B850A0(result, this);
}

// FUNCTION: ROBLOXSTUDIO 0x00b7a640
extern void* dword_12105E4;
int __cdecl sub_B850C0(void* arg, void* result);

int __cdecl sp_counted_impl_p::sub_B7A640(void* arg)
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(arg, 1, dword_12105E4);
	return sub_B850C0(arg, result);
}

extern void* dword_12105E8;
int __cdecl sub_B850E0(void* result, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00b7a670
int __cdecl sp_counted_impl_p::sub_B7A670()
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_12105E8);
	return sub_B850E0(result, this);
}

extern void* dword_128D3B4;
int __cdecl sub_B78F30(void* result, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00b7a6a0
int __cdecl sp_counted_impl_p::sub_B7A6A0()
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128D3B4);
	return sub_B78F30(result, this);
}

extern void* dword_128E204;
int __cdecl sub_B85100(void* result, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00b7ae60
int __cdecl sp_counted_impl_p::sub_B7AE60()
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128E204);
	return sub_B85100(result, this);
}

struct sp_counted_impl_p_node_424450
{
	sp_counted_impl_p_node_424450* left;
	sp_counted_impl_p_node_424450* parent;
	sp_counted_impl_p_node_424450* right;
};

struct sp_counted_impl_p_callee_4246A0
{
	void __thiscall sub_4246A0(sp_counted_impl_p_node_424450* node);
};

// FUNCTION: ROBLOXSTUDIO 0x00424450
void sp_counted_impl_p::sub_424450()
{
	sp_counted_impl_p_node_424450* head = *(sp_counted_impl_p_node_424450**)this;
	((sp_counted_impl_p_callee_4246A0*)this)->sub_4246A0(head->parent);

	head = *(sp_counted_impl_p_node_424450**)this;
	head->parent = head;
	head = *(sp_counted_impl_p_node_424450**)this;
	head->left = head;
	head = *(sp_counted_impl_p_node_424450**)this;
	head->right = head;
	*(int*)((char*)this + 4) = 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00a34cd0
void __cdecl sp_counted_impl_p::sub_A34CD0(void* arg)
{
	int* dst = *(int**)((char*)this + 8);
	int* src = (int*)arg;

	dst[0] = src[0];
	dst[1] = src[1];
	dst[2] = src[2];

	*(char**)((char*)this + 8) += 16;
}

struct sp_counted_impl_p_sub_781FA0
{
	void __thiscall sub_781FA0(void* arg);
};

// FUNCTION: ROBLOXSTUDIO 0x0077d620
sp_counted_impl_p* __cdecl sp_counted_impl_p::sub_77D620(void* arg2, void* arg3)
{
	volatile int local = 0;
	((sp_counted_impl_p_sub_781FA0*)this)->sub_781FA0(arg2);
	*(unsigned char*)((char*)this + 0x10) = *(unsigned char*)arg3;
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x0077d6c0
sp_counted_impl_p* __cdecl sp_counted_impl_p::sub_77D6C0(void* arg)
{
	volatile int local = 0;
	((sp_counted_impl_p_sub_781FA0*)this)->sub_781FA0(arg);
	*(unsigned char*)((char*)this + 0x10) = *(unsigned char*)((char*)arg + 0x10);
	return this;
}

void __cdecl sub_7C81E0(void*);

// FUNCTION: ROBLOXSTUDIO 0x00b7a2a0
int __cdecl sp_counted_impl_p::sub_B7A2A0()
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_12105E0);
	void* p = *(void**)result;
	if (p)
	{
		sub_7C81E0(p);
	}
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00b7a520
void __cdecl sub_4226B0(void*);

int __cdecl sp_counted_impl_p::sub_B7A520()
{
	void* result = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128E204);
	void* p = *(void**)result;
	if (p)
	{
		sub_4226B0((char*)p + 5);
	}
	return 0;
}

int __cdecl sub_BCAB60(void* a1, void* a2, void* a3, void* a4, int a5);

// FUNCTION: ROBLOXSTUDIO 0x00a34e90
int __cdecl sp_counted_impl_p::sub_A34E90(void* arg2, void* arg3)
{
	char* p = *(char**)((char*)this + 8);
	if (*(int*)(p - 8) == 6)
	{
		char* q = *(char**)(p - 0x10);
		if (*(unsigned char*)(q + 6) == 0)
		{
			return sub_BCAB60(this, *(void**)(q + 0x10), arg2, arg3, 0);
		}
	}
	return 1;
}

void __cdecl sub_A365B0(void*, void*, void*);

// FUNCTION: ROBLOXSTUDIO 0x00a34d20
void __cdecl sp_counted_impl_p::sub_A34D20(int arg2, int arg3)
{
	sub_A365B0(this, (char*)*(void**)((char*)this + 8) - (arg2 + 1) * 16, (void*)arg3);

	if (arg3 == -1)
	{
		void* p = *(void**)((char*)this + 0x14);
		void* v = *(void**)((char*)this + 8);
		if ((unsigned int)v >= *(unsigned int*)((char*)p + 8))
		{
			*(void**)((char*)p + 8) = v;
		}
	}
}

// FUNCTION: ROBLOXSTUDIO 0x006a3e50
void __cdecl sp_counted_impl_p::sub_6A3E50()
{
	sp_counted_impl_p_obj_006a6610* p = (sp_counted_impl_p_obj_006a6610*)this;
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

void __cdecl sub_BC7100(void* arg);
void* __cdecl sub_BC9AD0(void* arg0, void* arg1, void* arg2);

// FUNCTION: ROBLOXSTUDIO 0x00a34e50
void __cdecl sp_counted_impl_p::sub_A34E50(void* arg2, void* arg3)
{
	char* p10 = *(char**)((char*)this + 0x10);
	if (*(unsigned int*)(p10 + 0x44) >= *(unsigned int*)(p10 + 0x40))
	{
		sub_BC7100(this);
	}

	char* slot = *(char**)((char*)this + 8);
	*(void**)slot = sub_BC9AD0(this, arg2, arg3);
	*(int*)(slot + 8) = 5;
	*(char**)((char*)this + 8) += 0x10;
}

extern void* dword_128DC80;

// FUNCTION: ROBLOXSTUDIO 0x00b7a470
int __cdecl sp_counted_impl_p::sub_B7A470()
{
	sp_counted_impl_p_basic_string* s =
		(sp_counted_impl_p_basic_string*)((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128DC80);

	if (s->capacity >= 0x10)
	{
		rbx_free_mem(s->ptr);
	}
	s->capacity = 0x0F;
	s->size = 0;
	s->buf[0] = 0;

	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00b79b30
int __cdecl sp_counted_impl_p::sub_B79B30()
{
	extern void __cdecl sub_A35560(void* a, int b);

	int* r1 = (int*)((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128DC74);
	int* r2 = (int*)((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_128DC74);
	sub_A35560(this, *r1 == *r2);
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00b79b80
int __cdecl sp_counted_impl_p::sub_B79B80()
{
	extern void __cdecl sub_A35560(void* a, int b);

	int* r1 = (int*)((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128DC78);
	int* r2 = (int*)((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_128DC78);
	sub_A35560(this, *r1 == *r2);
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00b79bd0
extern void* dword_128DC7C;

int __cdecl sp_counted_impl_p::sub_B79BD0()
{
	extern void __cdecl sub_A35560(void* a, int b);

	int* r1 = (int*)((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128DC7C);
	int* r2 = (int*)((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_128DC7C);
	sub_A35560(this, (*r1 == *r2) ? 1 : 0);
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00b79c70
int __cdecl sp_counted_impl_p::sub_B79C70()
{
	extern void __cdecl sub_A35560(void* a, int b);
	extern void* dword_12105E0;

	void* r2 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_12105E0);
	void* r1 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_12105E0);
	sub_A35560(this, (*((int*)r1) == *((int*)r2)) ? 1 : 0);
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00b79cc0
int __cdecl sp_counted_impl_p::sub_B79CC0()
{
	extern void __cdecl sub_A35560(void* a, int b);
	extern void* dword_12105E4;

	void* r2 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_12105E4);
	void* r1 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_12105E4);
	sub_A35560(this, (*((int*)r1) == *((int*)r2)) ? 1 : 0);
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00b79d10
int __cdecl sp_counted_impl_p::sub_B79D10()
{
	extern void __cdecl sub_A35560(void* a, int b);
	extern void* dword_12105E8;

	void* r2 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_12105E8);
	void* r1 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_12105E8);
	sub_A35560(this, (*((int*)r1) == *((int*)r2)) ? 1 : 0);
	return 1;
}

extern void* dword_124EAC8;

// FUNCTION: ROBLOXSTUDIO 0x00b79d60
int __cdecl sp_counted_impl_p::sub_B79D60()
{
	extern void __cdecl sub_A35560(void* a, int b);

	void* r2 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_124EAC8);
	void* r1 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_124EAC8);
	sub_A35560(this, (*((int*)r1) == *((int*)r2)) ? 1 : 0);
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00b79db0
int __cdecl sp_counted_impl_p::sub_B79DB0()
{
	extern void __cdecl sub_A35560(void* a, int b);

	void* r2 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_124EAD0);
	void* r1 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_124EAD0);
	sub_A35560(this, (*((int*)r1) == *((int*)r2)) ? 1 : 0);
	return 1;
}

// FUNCTION: ROBLOXSTUDIO 0x00b79f10
int __cdecl sp_counted_impl_p::sub_B79F10()
{
	extern void __cdecl sub_A35560(void* a, int b);

	void* r2 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_124EAC4);
	void* r1 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_124EAC4);
	sub_A35560(this, (*((int*)r1) == *((int*)r2)) ? 1 : 0);
	return 1;
}

struct sp_counted_impl_p_sub_779B50
{
	void sub_779B50();
};

extern void* (__cdecl *dword_E106F0)(void*, int, void*, int);
extern void* dword_E4E968;
void __cdecl sub_460390(void*);

// FUNCTION: ROBLOXSTUDIO 0x00778fa0
sp_counted_impl_p* sp_counted_impl_p::sub_778FA0()
{
	((sp_counted_impl_p_sub_779B50*)this)->sub_779B50();

	int v = 0x50;
	*(int*)((char*)this + 0x1228) = 2;
	*(int*)((char*)this + 0x122C) = 4;
	*(short*)((char*)this + 0x1226) = (short)v;

	sub_460390(dword_E106F0(this, 0x21, dword_E4E968, 4));
	return this;
}

struct sp_counted_impl_p_sub_B79A40
{
	bool __thiscall sub_B79A40(void* arg);
};

extern void* dword_128E200;

// FUNCTION: ROBLOXSTUDIO 0x00b79c20
int __cdecl sp_counted_impl_p::sub_B79C20()
{
	extern void __cdecl sub_A35560(void* a, int b);

	void* r2 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_128E200);
	void* r1 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128E200);
	sub_A35560(this, ((sp_counted_impl_p_sub_B79A40*)r1)->sub_B79A40(r2));
	return 1;
}

struct sp_counted_impl_p_sub_6B9BC0
{
	bool __thiscall sub_6B9BC0(void* arg);
};

extern void* dword_128E204;

// FUNCTION: ROBLOXSTUDIO 0x00b7a1b0
int __cdecl sp_counted_impl_p::sub_B7A1B0()
{
	extern void __cdecl sub_A35560(void* a, int b);

	void* r2 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_128E204);
	void* r1 = ((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128E204);
	sub_A35560(this, ((sp_counted_impl_p_sub_6B9BC0*)r1)->sub_6B9BC0(r2));
	return 1;
}

void* __cdecl sub_A34C10(void* self, int arg);

// FUNCTION: ROBLOXSTUDIO 0x00a351c0
void __cdecl sp_counted_impl_p::sub_A351C0(int arg)
{
	char* insertPos = (char*)sub_A34C10(this, arg);
	char* end = *(char**)((char*)this + 8);

	if (end > insertPos)
	{
		char* src = end - 0x10;
		do
		{
			*(int*)end = *(int*)src;
			*(int*)(end + 4) = *(int*)(src + 4);
			int val = *(int*)(src + 8);
			end -= 0x10;
			*(int*)(src + 0x18) = val;
			src -= 0x10;
		}
		while (end > insertPos);
	}

	char* cur = *(char**)((char*)this + 8);
	*(int*)insertPos = *(int*)cur;
	*(int*)(insertPos + 4) = *(int*)(cur + 4);
	*(int*)(insertPos + 8) = *(int*)(cur + 8);
}

// FUNCTION: ROBLOXSTUDIO 0x00779b50
void sp_counted_impl_p::sub_779B50()
{
	char* p = (char*)this;
	*(short*)(p + 0x1226) = 0;
	*(int*)(p + 0x1228) = -1;
	*(int*)(p + 0x122C) = 0;
	*(int*)(p + 0x1230) = 0;
	*(int*)(p + 0x1234) = 0;
	*(int*)(p + 0x123C) = 0;
	*(int*)(p + 0x1238) = 0;
	*(int*)(p + 0x1240) = 0;
	p[0x00] = 0;
	p[0x21] = 0;
	p[0x122] = 0;
	p[0x1A3] = 0;
	p[0x224] = 0;
	p[0xA25] = 0;
}

extern void (__cdecl *dword_E10508)(void*);

// FUNCTION: ROBLOXSTUDIO 0x00426140
void sp_counted_impl_p::sub_426140()
{
	if (*(unsigned char*)((char*)this + 0x3C) & 1)
	{
		dword_E10508(**(void***)((char*)this + 0x0C));
	}

	**(int***)((char*)this + 0x0C) = 0;
	**(int***)((char*)this + 0x1C) = 0;
	**(int***)((char*)this + 0x2C) = 0;
	**(int***)((char*)this + 0x10) = 0;
	**(int***)((char*)this + 0x20) = 0;
	**(int***)((char*)this + 0x30) = 0;

	*(int*)((char*)this + 0x3C) &= ~1;
	*(int*)((char*)this + 0x38) = 0;
}

struct sp_counted_impl_p_basic_string_cmp
{
	union
	{
		char* ptr;
		char buf[16];
	};
	unsigned int size;
	unsigned int capacity;

	int __thiscall compare(unsigned int pos, unsigned int n1, const char* ptr, unsigned int n2);
};

// FUNCTION: ROBLOXSTUDIO 0x00b79f60
int __cdecl sp_counted_impl_p::sub_B79F60()
{
	extern void __cdecl sub_A35560(void* a, int b);
	extern void* dword_128DC80;

	sp_counted_impl_p_basic_string_cmp* r2 =
		(sp_counted_impl_p_basic_string_cmp*)((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 2, dword_128DC80);
	sp_counted_impl_p_basic_string_cmp* r1 =
		(sp_counted_impl_p_basic_string_cmp*)((void* (__cdecl*)(void*, int, void*))sub_A389C0)(this, 1, dword_128DC80);

	unsigned int r2size = r2->size;
	const char* r2data;
	if (r2->capacity < 0x10)
		r2data = r2->buf;
	else
		r2data = r2->ptr;

	sub_A35560(this, r1->compare(0, r1->size, r2data, r2size) == 0);
	return 1;
}

void __cdecl sub_BC6470(void* arg1, void* arg2);
void __cdecl sub_BC6400(void* arg1, void* arg2, unsigned int size, int flag);

struct sp_counted_impl_p_sub_A340C0
{
	void __thiscall sub_A340C0();
};

// FUNCTION: ROBLOXSTUDIO 0x00a34580
void __cdecl sp_counted_impl_p::sub_A34580(void* arg)
{
	char* p = (char*)arg;
	sub_BC6470(p, *(void**)(p + 0x20));
	char* base = p - 0x2C;
	((sp_counted_impl_p_sub_A340C0*)base)->sub_A340C0();
	sub_BC6400(this, *(void**)(p + 0x28), *(unsigned int*)(p + 0x30) * 24u, 0);
	sub_BC6400(this, *(void**)(p + 0x20), *(unsigned int*)(p + 0x2C) * 16u, 0);
	sub_BC6400(this, base, 0xA4u, 0);
}

// FUNCTION: ROBLOXSTUDIO 0x00a348d0
void __cdecl sp_counted_impl_p::sub_A348D0(void* arg)
{
	char* p = (char*)this;
	*(void**)(p + 0x10) = arg;
	int zero = 0;
	*(int*)(p + 0x20) = 0;
	*(int*)(p + 0x2C) = 0;
	*(int*)(p + 0x70) = 0;
	*(int*)(p + 0x44) = 0;
	*(int*)(p + 0x36) = 0x01000000;
	*(int*)(p + 0x3C) = 0;
	*(int*)(p + 0x40) = 0;
	*(int*)(p + 0x68) = 0;
	*(int*)(p + 0x30) = 0;
	*(short*)(p + 0x34) = (short)zero;
	*(char*)(p + 0x06) = (char)zero;
	*(int*)(p + 0x14) = zero;
	*(int*)(p + 0x28) = zero;
	*(int*)(p + 0x18) = zero;
	*(int*)(p + 0x74) = zero;
	*(int*)(p + 0x50) = zero;
}

void* __cdecl sub_A360A0(void* self, int arg);
int __cdecl sub_A350C0(void* self, int arg);
void __cdecl sub_A35060(void* self, int arg, void* type);
int __cdecl sub_A35810(void* self, int a, int b);
void __cdecl sub_A35D10(void* self, int arg);

struct sp_counted_impl_p_sub_418A50
{
	void __thiscall sub_418A50(void* arg);
};

// FUNCTION: ROBLOXSTUDIO 0x00b74210
bool __cdecl sp_counted_impl_p::sub_B74210(int arg2, void* arg3)
{
	void* v = sub_A360A0(this, arg2);
	if (!v)
		return false;

	if (!sub_A350C0(this, arg2))
		return false;

	sub_A35060(this, -10000, dword_128D3B4);

	if (sub_A35810(this, -1, -2))
	{
		sub_A35D10(this, -3);
		((sp_counted_impl_p_sub_418A50*)arg3)->sub_418A50(v);
		return true;
	}

	sub_A35D10(this, -3);
	return false;
}

void __cdecl sub_BC7100(void* arg);
void __cdecl sub_BCB120(void* arg0, int arg1, int arg2);
void* __cdecl sub_BC9420(void* arg0, int arg1, int arg2);

// FUNCTION: ROBLOXSTUDIO 0x00a34dd0
void __cdecl sp_counted_impl_p::sub_A34DD0(int arg)
{
	if (arg >= 2)
	{
		char* p10 = *(char**)((char*)this + 0x10);
		if (*(unsigned int*)(p10 + 0x44) >= *(unsigned int*)(p10 + 0x40))
		{
			sub_BC7100(this);
		}

		int count = ((*(char**)((char*)this + 8) - *(char**)((char*)this + 0xC)) >> 4) - 1;
		sub_BCB120(this, arg, count);
		*(char**)((char*)this + 8) += 0x10 - (arg << 4);
	}
	else if (arg == 0)
	{
		char* slot = *(char**)((char*)this + 8);
		*(void**)slot = sub_BC9420(this, 0x00F12F2D, 0);
		*(int*)(slot + 8) = 4;
		*(char**)((char*)this + 8) += 0x10;
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00a349d0
void __cdecl sp_counted_impl_p::sub_A349D0(void* arg)
{
	void* p14 = ((void* (__cdecl*)(void*, void*, unsigned int, int))sub_BC6400)(arg, 0, 0, 0xC0);
	char* self = (char*)this;
	*(void**)(self + 0x28) = p14;
	*(void**)(self + 0x14) = p14;
	*(int*)(self + 0x30) = 8;
	*(void**)(self + 0x24) = (char*)p14 + 0xA8;

	void* p8 = ((void* (__cdecl*)(void*, void*, unsigned int, int))sub_BC6400)(arg, 0, 0, 0x2D0);
	*(void**)(self + 8) = p8;
	*(void**)(self + 0x1C) = (char*)p8 + 0x270;
	{
		char* t14 = *(char**)(self + 0x14);
		*(void**)(self + 0x20) = p8;
		*(int*)(self + 0x2C) = 0x2D;
		*(void**)(t14 + 4) = p8;
	}

	*(int*)((char*)*(void**)(self + 8) + 8) = 0;
	*(char**)(self + 8) += 0x10;

	{
		char* t14 = *(char**)(self + 0x14);
		*(void**)t14 = *(void**)(self + 8);
		t14 = *(char**)(self + 0x14);
		*(void**)(self + 0xC) = *(void**)t14;
		*(char**)(t14 + 8) = *(char**)(self + 8) + 0x140;
	}
}

void __cdecl sub_BC6E50(void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00a342a0
void __cdecl sp_counted_impl_p::sub_A342A0()
{
	char* self = (char*)this;
	char* edi = *(char**)(self + 0x10);

	sub_BC6470(self, *(void**)(self + 0x20));
	sub_BC6E50(self);

	{
		char* ecx = *(char**)(self + 0x10);
		sub_BC6400(self, *(void**)ecx, *(unsigned int*)(ecx + 8) * 4u, 0);
	}

	*(void**)(edi + 0x34) = ((void* (__cdecl*)(void*, void*, unsigned int, int))sub_BC6400)(
		self, *(void**)(edi + 0x34), *(unsigned int*)(edi + 0x3C), 0);
	*(int*)(edi + 0x3C) = 0;

	sub_BC6400(self, *(void**)(self + 0x28), *(unsigned int*)(self + 0x30) * 24u, 0);
	sub_BC6400(self, *(void**)(self + 0x20), *(unsigned int*)(self + 0x2C) * 16u, 0);

	(*(void (__cdecl**)(void*, void*, unsigned int, int))(edi + 0xC))(
		*(void**)(edi + 0x10), self - 0x2C, 0x1A4u, 0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
