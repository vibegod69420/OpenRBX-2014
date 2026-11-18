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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace boost
