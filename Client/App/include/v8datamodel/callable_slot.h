#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_CALLABLE_SLOT_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_CALLABLE_SLOT_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class callable_slot
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	int __cdecl invoke();
	float __cdecl invoke_float();
	void* __cdecl get();
	int size();
	int notEmpty();
	void __cdecl clear();
	bool hasValue();
	void __cdecl dispatch(int arg1, int arg2);
	void*resolve();
	int __cdecl compare(void* arg);
	bool __cdecl isReachable();
	int __cdecl runSlot();
	bool __cdecl getEffectId(int* out);
	void destroyElements();
	void destroyEntries();
	int __cdecl process(char* a2, void* a3, void* a4);
	void*allocate();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CALLABLE_SLOT_H
