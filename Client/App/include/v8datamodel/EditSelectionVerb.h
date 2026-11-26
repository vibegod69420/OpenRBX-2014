#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_EDITSELECTIONVERB_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_EDITSELECTIONVERB_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class EditSelectionVerb
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	int release();
	int addRef();
	void __cdecl setActive();
	void setVtableOrHead(int value);
	EditSelectionVerb* __cdecl sub_006B98C0(int a2, int a3);
	bool __cdecl sub_006B9B30();
	void __cdecl sub_006B9730();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_EDITSELECTIONVERB_H
