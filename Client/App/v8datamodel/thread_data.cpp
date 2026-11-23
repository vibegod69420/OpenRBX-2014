#include "v8datamodel/thread_data.h"

#include "decomp.h"

namespace boost {

// FUNCTION: ROBLOXSTUDIO 0x0056f7f0
void thread_data::run()
{
    struct layout
    {
        char pad[0x3c];
        void (*fn)(void*, void*);
        int arg;
        void* value;
    };

    layout* self = reinterpret_cast<layout*>(this);
    self->fn(&self->arg, self->value);
}

// FUNCTION: ROBLOXSTUDIO 0x0052fcd0
void __cdecl thread_data::invoke()
{
	struct invoke_data
	{
		void (*func)(void*, void*);
		void* arg1;
		void* arg2;
	};

	invoke_data* data = reinterpret_cast<invoke_data*>(this);
	data->func(data->arg1, data->arg2);
}

// FUNCTION: ROBLOXSTUDIO 0x007760a0
void __cdecl thread_data::invoke(void* arg1, void* arg2)
{
	(*(void (__cdecl**)(void*, void*))this)(arg1, arg2);
}

// FUNCTION: ROBLOXSTUDIO 0x0056fa20
void __cdecl thread_data::do_call()
{
	char* base = reinterpret_cast<char*>(this) + 4;
	(*reinterpret_cast<void (__cdecl**)(void*, void*, void*, void*)>(this))(
		base,
		*reinterpret_cast<void**>(base + 4),
		*reinterpret_cast<void**>(base + 8),
		*reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 16));
}

struct thread_data_run_bind_layout
{
	char pad[0x3c];
	void (__cdecl *fn)(__int64, void*);
	int value;
	void* arg;
};

// FUNCTION: ROBLOXSTUDIO 0x008fa600
void thread_data::run_bind()
{
	thread_data_run_bind_layout* self = reinterpret_cast<thread_data_run_bind_layout*>(this);
	self->fn(self->value, self->arg);
}

// FUNCTION: ROBLOXSTUDIO 0x00775320
int thread_data::getConst18739520() const
{
	return 18739520;
}

// FUNCTION: ROBLOXSTUDIO 0x00c59530
void thread_data::destroyInstance(thread_data* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

void __cdecl sub_00775460(void*, void*, void*, void*, void*, void*, void*);

// FUNCTION: ROBLOXSTUDIO 0x00775a30
void __cdecl thread_data::start(void* arg1, void* arg2, void* arg3, void* arg4)
{
	sub_00775460(this, arg1, arg2, 0, 0, arg3, arg4);
}

class thread_data_base_construct_c57f00
{
public:
	void construct();
};

// FUNCTION: ROBLOXSTUDIO 0x00c586e0
thread_data::thread_data()
{
	reinterpret_cast<thread_data_base_construct_c57f00*>(this)->construct();

	reinterpret_cast<unsigned char*>(this)[0x64] = 1;
	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x00) = 0x00ef32ac;
	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x04) = 0x00ef3324;
	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x18) = 0x00ef332c;
	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x1c) = 0x00ef3338;
	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x68) = 0;
	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x6c) = 0;
}

#pragma optimize("", off)

struct thread_data_sub_0c
{
	void init(int);
};

// FUNCTION: ROBLOXSTUDIO 0x00c36fa0
thread_data* thread_data::construct()
{
	*reinterpret_cast<unsigned int*>(this) = 0x00eefa90u;
	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 4) = 0;
	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 8) = 0;

	reinterpret_cast<thread_data_sub_0c*>(reinterpret_cast<char*>(this) + 0x0c)->init(0);

	unsigned int* p = reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x10);
	*p = 0;

	*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x14) = 0;
	*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x15) = 1;
	*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x18) = 0;
	*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x1c) = 0;
	*reinterpret_cast<unsigned char*>(reinterpret_cast<char*>(this) + 0x1d) = 1;

	*reinterpret_cast<thread_data**>(0x01310dc8) = this;
	return this;
}

#pragma optimize("", on)

struct thread_data_run_callee_0c63d90
{
	void __thiscall dispatch(void*, void*, void*);
};

// FUNCTION: ROBLOXSTUDIO 0x00c63d90
void __cdecl thread_data::run_entry()
{
	struct layout
	{
		void (thread_data_run_callee_0c63d90::*fn)(void*, void*, void*);
		thread_data_run_callee_0c63d90* obj;
		char pad[0x18];
		void* arg20;
		void* arg24;
	};

	layout* p = *reinterpret_cast<layout**>(this);
	(p->obj->*p->fn)(&p->pad, p->arg20, p->arg24);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace boost
