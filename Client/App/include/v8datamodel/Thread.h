#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_THREAD_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_THREAD_H

#include "decomp.h"

namespace RBX {
namespace TaskScheduler {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e45494
class Thread
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; Thread* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	void destroySubPtr0C();
	static void destroyInstance(Thread* p);
	// AUTO-GENERATED METHODS
};

} // namespace TaskScheduler
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_THREAD_H
