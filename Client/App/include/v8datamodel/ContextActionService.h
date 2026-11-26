#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_CONTEXTACTIONSERVICE_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_CONTEXTACTIONSERVICE_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class ContextActionService
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	~ContextActionService();
	void unbindAllActions();
	void clearAllBoundActions();
	void*getActionContext();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CONTEXTACTIONSERVICE_H
