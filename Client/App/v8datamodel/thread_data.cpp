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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace boost
