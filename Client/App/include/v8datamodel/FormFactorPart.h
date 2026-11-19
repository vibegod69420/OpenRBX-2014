#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_FORMFACTORPART_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_FORMFACTORPART_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class FormFactorPart
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0110[0x110]; int field_0110; };
		struct { char _pad_field_0104[0x104]; int field_0104; };
		// AUTO-GENERATED FIELDS
	};

	int getField110() const;
	void createJoints();
	int getField104() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_FORMFACTORPART_H
