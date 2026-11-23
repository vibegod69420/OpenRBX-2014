#include "v8datamodel/sp_counted_impl_pd.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0040dfd0
const int* sp_counted_impl_pd::getMemberPtr10() const
{
	return &member_0010;
}

class sp_counted_impl_pd_state
{
public:
	void destroy();
};

// FUNCTION: ROBLOXSTUDIO 0x007a29f0
void sp_counted_impl_pd::dispose()
{
	if (*(unsigned char*)&member_0010)
	{
		((sp_counted_impl_pd_state*)(&member_0010 + 1))->destroy();
		*(unsigned char*)&member_0010 = 0;
	}
}

struct sp_counted_impl_pd_scalar_deleting_dtor
{
	virtual void* destroy(unsigned int);
};

// FUNCTION: ROBLOXSTUDIO 0x00412e50
void sp_counted_impl_pd::destroy()
{
	if (this)
	{
		((sp_counted_impl_pd_scalar_deleting_dtor*)this)->destroy(1);
	}
}

struct sp_counted_impl_pd_double_getter
{
	double* (*func)(void*);
	void* arg;
};

// FUNCTION: ROBLOXSTUDIO 0x0067e4d0
double __cdecl sp_counted_impl_pd::getDouble()
{
	sp_counted_impl_pd_double_getter* getter = (sp_counted_impl_pd_double_getter*)this;
	return *getter->func(getter->arg);
}

// FUNCTION: ROBLOXSTUDIO 0x008da430
struct sp_counted_impl_pd_callee
{
	void __thiscall func(int, void*, void**, int);
};

void __cdecl sp_counted_impl_pd::get_deleter(void* arg)
{
	void* obj = (void*)_vtable_or_head;
	void* pArg = &arg;
	int flag;
	*(unsigned char*)&flag = 0;
	((sp_counted_impl_pd_callee*)((char*)obj + 8))->func(flag, obj, &pArg, 0);
}

// FUNCTION: ROBLOXSTUDIO 0x00bea2f0
void __cdecl sp_counted_impl_pd::get_deleter(void* arg2, void* arg3)
{
	void* obj = *(void**)this;
	void* args[2];
	args[0] = (void*)&arg2;
	args[1] = (void*)&arg3;
	int flag;
	*(unsigned char*)&flag = 0;
	((sp_counted_impl_pd_callee*)((char*)obj + 8))->func(flag, obj, args, 0);
}

struct sp_counted_impl_pd_string
{
	union
	{
		void* ptr;
		char buf[16];
	};
	unsigned int size;
	unsigned int capacity;
};

// FUNCTION: ROBLOXSTUDIO 0x007a2910
void sp_counted_impl_pd::sp_ms_deleter_dispose()
{
	if (*(unsigned char*)&member_0010)
	{
		sp_counted_impl_pd_string* s = (sp_counted_impl_pd_string*)((char*)this + 0x14);
		if (s->capacity >= 0x10)
		{
			::operator delete(s->ptr);
		}

		s->capacity = 0xF;
		s->size = 0;
		s->buf[0] = 0;
		*(unsigned char*)&member_0010 = 0;
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00bea370
void __cdecl sp_counted_impl_pd::get_deleter(void* arg2, void* arg3) const
{
	void* obj = *(void**)this;
	void* args[2];
	args[0] = (void*)&arg2;
	args[1] = (void*)&arg3;
	int flag;
	*(unsigned char*)&flag = 0;
	((sp_counted_impl_pd_callee*)((char*)obj + 8))->func(flag, obj, args, 0);
}

// FUNCTION: ROBLOXSTUDIO 0x0067e450
int sp_counted_impl_pd::getField148() const
{
	return field_0148;
}

// FUNCTION: ROBLOXSTUDIO 0x00678900
int sp_counted_impl_pd::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x00678910
int sp_counted_impl_pd::derefInt_8910(const int* p)
{
	return *p;
}

void __cdecl sp_counted_impl_pd_get_deleter_impl(sp_counted_impl_pd* self, const void* arg1, void* arg2);

// FUNCTION: ROBLOXSTUDIO 0x00a457e0
void __cdecl sp_counted_impl_pd::get_deleter(const void* arg1, void* arg2)
{
	sp_counted_impl_pd_get_deleter_impl(this, arg1, &arg2);
}

struct sp_counted_impl_pd_dispatch_callee
{
	void __thiscall call(void* arg0, void* arg2, void* arg3);
};

// FUNCTION: ROBLOXSTUDIO 0x007a5eb0
void* __cdecl sp_counted_impl_pd::dispatch(void* arg1, void* arg2, void* arg3)
{
	((sp_counted_impl_pd_dispatch_callee*)arg1)->call(this, arg2, arg3);
	return this;
}

struct sp_counted_impl_pd_target_c97430
{
	double get_c6a740();
};

struct sp_counted_impl_pd_node_c97430
{
	char pad[0xAB8];
	sp_counted_impl_pd_target_c97430* target;
};

sp_counted_impl_pd_node_c97430* sp_counted_impl_pd_call_c96fc0(void* arg, int flag);

// FUNCTION: ROBLOXSTUDIO 0x00c97430
double __cdecl sp_counted_impl_pd::getDoubleValue()
{
	sp_counted_impl_pd_node_c97430* result = sp_counted_impl_pd_call_c96fc0(this, 1);
	if (result)
	{
		return result->target->get_c6a740();
	}
	return 0.0;
}

void __cdecl sp_counted_impl_pd_init_4115f0(void*, void*);
void __cdecl sp_counted_impl_pd_init_942cf0(void*);

// FUNCTION: ROBLOXSTUDIO 0x009448f0
sp_counted_impl_pd* __cdecl sp_counted_impl_pd::init()
{
	volatile int state = 0;
	sp_counted_impl_pd_init_4115f0((void*)0x01300904, (void*)0x00943E50);
	sp_counted_impl_pd_init_942cf0(this);
	return this;
}

void* __cdecl sp_counted_impl_pd_get_825140();

struct sp_counted_impl_pd_typeinfo_checker
{
	unsigned char __thiscall check(void* arg);
};

void* __cdecl sp_counted_impl_pd_call_a43960(sp_counted_impl_pd* self, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00a455e0
void* __cdecl sp_counted_impl_pd::get_deleter(const void* arg)
{
	void* context = sp_counted_impl_pd_get_825140();
	sp_counted_impl_pd_typeinfo_checker* obj = *(sp_counted_impl_pd_typeinfo_checker**)this;
	if (obj->check(context))
	{
		return 0;
	}
	return sp_counted_impl_pd_call_a43960(this, (void*)arg);
}

struct sp_counted_impl_pd_byte_getter
{
	unsigned char* (*func)(void*);
	void* arg;
};

// FUNCTION: ROBLOXSTUDIO 0x0067e4f0
unsigned char __cdecl sp_counted_impl_pd::getByte()
{
	sp_counted_impl_pd_byte_getter* getter = (sp_counted_impl_pd_byte_getter*)this;
	return *getter->func(getter->arg);
}

void __cdecl sp_counted_impl_pd_dispose_helper_7b4ec0(void*);

// FUNCTION: ROBLOXSTUDIO 0x0040df80
void sp_counted_impl_pd::dispose_managed()
{
	void* px = *(void**)((char*)this + 0xC);
	sp_counted_impl_pd_dispose_helper_7b4ec0(px);
	if (px)
	{
		((sp_counted_impl_pd_scalar_deleting_dtor*)((char*)px + 0x18))->destroy(1);
	}
}

extern "C" __declspec(dllimport) void* __stdcall GetProcessHeap();
extern "C" __declspec(dllimport) int __stdcall HeapFree(void* hHeap, unsigned long dwFlags, void* lpMem);

// FUNCTION: ROBLOXSTUDIO 0x0045f640
void sp_counted_impl_pd::dispose_heap()
{
	sp_counted_impl_pd_scalar_deleting_dtor* p =
		*(sp_counted_impl_pd_scalar_deleting_dtor**)((char*)this + 0xC);
	p->destroy(0);
	HeapFree(GetProcessHeap(), 0, p);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
