#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_THREAD_DATA_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_THREAD_DATA_H

#include "decomp.h"

namespace boost {

// AUTO-GENERATED HELPERS

class thread_data
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void run();
	void __cdecl invoke();
	void __cdecl invoke(void* arg1, void* arg2);
	void __cdecl do_call();
	// AUTO-GENERATED METHODS
};

} // namespace boost

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_THREAD_DATA_H
