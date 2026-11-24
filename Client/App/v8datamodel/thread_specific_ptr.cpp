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

struct thread_specific_ptr_storage
{
	thread_specific_ptr_string first;
	thread_specific_ptr_string second;
	thread_specific_ptr_string third;
};

// FUNCTION: ROBLOXSTUDIO 0x008481c0
void thread_specific_ptr::clear()
{
	thread_specific_ptr_storage* data = reinterpret_cast<thread_specific_ptr_storage*>(this);

	if (data->third.capacity >= 0x10)
		delete data->third.ptr;
	data->third.capacity = 0x0F;
	data->third.size = 0;
	data->third.buf[0] = 0;

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

struct thread_specific_ptr_list
{
	char* head;
	unsigned int size;

	void clear();
};

struct thread_specific_ptr_impl
{
	void* vtable;                    // 0x00
	char pad04[0x1C];                // 0x04
	thread_specific_ptr_list list;   // 0x20
	char pad28[0x08];                // 0x28
	thread_specific_ptr_string* p30; // 0x30
	thread_specific_ptr_string* p34; // 0x34
	thread_specific_ptr_string* p38; // 0x38
	thread_specific_ptr_string* p3C; // 0x3C
	thread_specific_ptr_string* p40; // 0x40
};

// FUNCTION: ROBLOXSTUDIO 0x00847790
void thread_specific_ptr::release()
{
	thread_specific_ptr_impl* data = reinterpret_cast<thread_specific_ptr_impl*>(this);
	thread_specific_ptr_string* s;

	s = data->p40;
	if (s)
	{
		if (s->capacity >= 0x10)
			delete s->ptr;
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		delete s;
	}

	s = data->p3C;
	if (s)
	{
		if (s->capacity >= 0x10)
			delete s->ptr;
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		delete s;
	}

	s = data->p38;
	if (s)
	{
		if (s->capacity >= 0x10)
			delete s->ptr;
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		delete s;
	}

	s = data->p34;
	if (s)
	{
		if (s->capacity >= 0x10)
			delete s->ptr;
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		delete s;
	}

	s = data->p30;
	if (s)
	{
		if (s->capacity >= 0x10)
			delete s->ptr;
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		delete s;
	}

	data->list.clear();
	delete data->list.head;
	data->vtable = (void*)0x00E33A28;
}

// FUNCTION: ROBLOXSTUDIO 0x008478b0
void thread_specific_ptr::destroy()
{
	thread_specific_ptr_impl* data = reinterpret_cast<thread_specific_ptr_impl*>(this);
	thread_specific_ptr_string* s;

	s = data->p38;
	if (s)
	{
		if (s->capacity >= 0x10)
			delete s->ptr;
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		delete s;
	}

	s = data->p34;
	if (s)
	{
		if (s->capacity >= 0x10)
			delete s->ptr;
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		delete s;
	}

	s = data->p30;
	if (s)
	{
		if (s->capacity >= 0x10)
			delete s->ptr;
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		delete s;
	}

	data->list.clear();
	delete data->list.head;
	data->vtable = (void*)0x00E33A28;
}

// FUNCTION: ROBLOXSTUDIO 0x008476d0
void thread_specific_ptr::cleanup()
{
	thread_specific_ptr_impl* data = reinterpret_cast<thread_specific_ptr_impl*>(this);
	thread_specific_ptr_string* s;

	s = data->p3C;
	if (s)
	{
		if (s->capacity >= 0x10)
			delete s->ptr;
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		delete s;
	}

	::operator delete(data->p38);

	s = data->p34;
	if (s)
	{
		if (s->capacity >= 0x10)
			delete s->ptr;
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		delete s;
	}

	s = data->p30;
	if (s)
	{
		if (s->capacity >= 0x10)
			delete s->ptr;
		s->capacity = 0x0F;
		s->size = 0;
		s->buf[0] = 0;
		delete s;
	}

	data->list.clear();
	delete data->list.head;
	data->vtable = (void*)0x00E33A28;
}

#include <stdarg.h>

struct thread_specific_ptr_vformat_callee
{
	void __thiscall vformat(char const* fmt, va_list ap);
};

// FUNCTION: ROBLOXSTUDIO 0x0045f0e0
void __cdecl thread_specific_ptr::format(char const* fmt, ...)
{
	((thread_specific_ptr_vformat_callee*)this)->vformat(fmt, (va_list)((char*)(&fmt) + sizeof(fmt)));
}

void __cdecl thread_specific_ptr_init_helper(thread_specific_ptr* self, void* arg);

// FUNCTION: ROBLOXSTUDIO 0x00841b50
thread_specific_ptr* __cdecl thread_specific_ptr::init(void* arg)
{
	volatile int local;
	thread_specific_ptr_init_helper((local = 0, this), arg);
	return this;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
