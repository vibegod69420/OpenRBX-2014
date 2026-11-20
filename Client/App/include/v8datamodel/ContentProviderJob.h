#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_CONTENTPROVIDERJOB_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_CONTENTPROVIDERJOB_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class ContentProviderJob
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	int __cdecl process(int a2, int a3, int a4);
	int __cdecl getData(int a2, int a3);
	void __cdecl relink(ContentProviderJob *a2, void *a3);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CONTENTPROVIDERJOB_H
