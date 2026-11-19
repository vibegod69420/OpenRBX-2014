#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_SP_COUNTED_IMPL_PD_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_SP_COUNTED_IMPL_PD_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class sp_counted_impl_pd
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_member_0010[0x10]; int member_0010; };
		// AUTO-GENERATED FIELDS
	};

	const int* getMemberPtr10() const;
	void dispose();
	void destroy();
	double __cdecl getDouble();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_SP_COUNTED_IMPL_PD_H
