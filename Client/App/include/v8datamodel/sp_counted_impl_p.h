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
		struct { char _pad_ptr_000c[0xc]; sp_counted_impl_p* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void freeMember0C();
	void freeMember0C_slot1();
	void dispose();
	void __cdecl invoke();
	void __cdecl invoke(void* arg);
	void __cdecl invoke(void* a, void* b);
	void __cdecl call(void* arg);
	__int64 __cdecl getPair();
	void onDestroy();
	void destroySubPtr0C();
	void destroySubPtr0C_slot1();
	void destroySubPtr0C_da60();
	void destroySubPtr0C_da80();
	void destroySubPtr0C_71a0();
	void destroySubPtr0C_f620();
	void destroySubPtr0C_ae90();
	void destroySubPtr0C_3d90();
	void destroySubPtr0C_5fe0();
	void destroySubPtr0C_4330();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_SP_COUNTED_IMPL_P_H
