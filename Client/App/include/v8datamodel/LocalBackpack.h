#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_LOCALBACKPACK_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_LOCALBACKPACK_H

#include "decomp.h"

namespace RBX {

class Instance;
#ifndef NULL
#define NULL 0
#endif
class Color4;
class color;
// AUTO-GENERATED HELPERS

class LocalBackpack
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	int isNull() const;
	Instance*getPlayer() const;
	const Color4&getSelectionColor();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_LOCALBACKPACK_H
