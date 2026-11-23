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
	void run_bind();
	int getConst18739520() const;
	void onDestroy();
	static void destroyInstance(thread_data* p);
	void __cdecl start(void* arg1, void* arg2, void* arg3, void* arg4);
	thread_data();
	thread_data*construct();
	void __cdecl run_entry();
	// AUTO-GENERATED METHODS
};

} // namespace boost

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_THREAD_DATA_H
