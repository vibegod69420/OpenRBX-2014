#ifndef CLIENT_APP_INCLUDE_V8TREE_INSTANCE_H
#define CLIENT_APP_INCLUDE_V8TREE_INSTANCE_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class Instance
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_ptr_000c[0xc]; Instance* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	int getConst16797656() const;
	int getConst16797664() const;
	int getConst14956404() const;
	void onDestroy();
	void destroySubPtr0C();
	Instance();
	void fetchContextId();
	void*getStaticSingleton();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8TREE_INSTANCE_H
