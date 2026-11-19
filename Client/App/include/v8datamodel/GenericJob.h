#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_GENERICJOB_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_GENERICJOB_H

#include "decomp.h"

namespace RBX {
namespace DataModel {

// AUTO-GENERATED HELPERS

class GenericJob
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void setProgress();
	void __cdecl initializeState();
	// AUTO-GENERATED METHODS
};

} // namespace DataModel
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_GENERICJOB_H
