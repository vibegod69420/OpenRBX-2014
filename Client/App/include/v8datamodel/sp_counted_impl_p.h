#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_SP_COUNTED_IMPL_P_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_SP_COUNTED_IMPL_P_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class sp_counted_impl_p
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_alloc_000c[0xc]; void* alloc_000c; };
		// AUTO-GENERATED FIELDS
	};

	void freeMember0C();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_SP_COUNTED_IMPL_P_H
