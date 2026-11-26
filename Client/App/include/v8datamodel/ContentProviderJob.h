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
	void __cdecl detach(ContentProviderJob *a2, void *a3);
	void __cdecl clear();
	void __cdecl update(const unsigned char* data, unsigned int len);
	void __cdecl addRequest(void* request);
	void __cdecl init();
	void __cdecl updateRequest(void* request, void* context);
	int __cdecl reportAllocationError();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CONTENTPROVIDERJOB_H
