#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_COUNTER_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_COUNTER_H

#include "decomp.h"

namespace RBX {
namespace Limits {

// AUTO-GENERATED HELPERS

class Counter
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_alloc_000c[0xc]; void* alloc_000c; };
		// AUTO-GENERATED FIELDS
	};

	void freeMember0C();
	void wait();
	// AUTO-GENERATED METHODS
};

} // namespace Limits
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_COUNTER_H
