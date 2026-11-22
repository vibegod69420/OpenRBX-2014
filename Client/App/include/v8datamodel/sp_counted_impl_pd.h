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
		struct { char _pad_field_0148[0x148]; int field_0148; };
		// AUTO-GENERATED FIELDS
	};

	const int* getMemberPtr10() const;
	void dispose();
	void destroy();
	double __cdecl getDouble();
	void __cdecl get_deleter(void* arg);
	void __cdecl get_deleter(void* arg2, void* arg3);
	void sp_ms_deleter_dispose();
	void __cdecl get_deleter(void* arg2, void* arg3) const;
	int getField148() const;
	static int derefInt(const int* p);
	static int derefInt_8910(const int* p);
	void __cdecl get_deleter(const void* arg1, void* arg2);
	void* __cdecl dispatch(void* arg1, void* arg2, void* arg3);
	double __cdecl getDoubleValue();
	sp_counted_impl_pd* __cdecl init();
	void* __cdecl get_deleter(const void* arg);
	unsigned char __cdecl getByte();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_SP_COUNTED_IMPL_PD_H
