#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_BOXSELECTCOMMAND_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_BOXSELECTCOMMAND_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class BoxSelectCommand
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void cancelSelection();
	bool canSelect();
	bool canBoxSelect();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_BOXSELECTCOMMAND_H
