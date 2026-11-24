#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_THREAD_SPECIFIC_PTR_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_THREAD_SPECIFIC_PTR_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class thread_specific_ptr
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	~thread_specific_ptr();
	void reset();
	void clear();
	void release();
	void destroy();
	void cleanup();
	void __cdecl format(char const* fmt, ...);
	thread_specific_ptr* __cdecl init(void* arg);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_THREAD_SPECIFIC_PTR_H
