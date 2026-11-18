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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace boost
