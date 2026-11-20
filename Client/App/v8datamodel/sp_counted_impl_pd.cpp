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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
