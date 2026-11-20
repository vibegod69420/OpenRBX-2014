#include "v8datamodel/thread_specific_ptr.h"

#include "decomp.h"

namespace RBX {

class thread_specific_ptr_object
{
public:
	~thread_specific_ptr_object();
};

// FUNCTION: ROBLOXSTUDIO 0x00848ef0
thread_specific_ptr::~thread_specific_ptr()
{
	delete reinterpret_cast<thread_specific_ptr_object*>(_vtable_or_head);
}

struct thread_specific_ptr_string
{
	union
	{
		char* ptr;
		char buf[16];
	};
	unsigned int size;
	unsigned int capacity;
};

struct thread_specific_ptr_data
{
	thread_specific_ptr_string first;
	thread_specific_ptr_string second;
};

// FUNCTION: ROBLOXSTUDIO 0x00848170
void thread_specific_ptr::reset()
{
	thread_specific_ptr_data* data = reinterpret_cast<thread_specific_ptr_data*>(this);

	if (data->second.capacity >= 0x10)
		delete data->second.ptr;
	data->second.capacity = 0x0F;
	data->second.size = 0;
	data->second.buf[0] = 0;

	if (data->first.capacity >= 0x10)
		delete data->first.ptr;
	data->first.capacity = 0x0F;
	data->first.size = 0;
	data->first.buf[0] = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
