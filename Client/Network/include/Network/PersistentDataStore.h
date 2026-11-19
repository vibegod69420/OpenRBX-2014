#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_PERSISTENTDATASTORE_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_PERSISTENTDATASTORE_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

class PersistentDataStore
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void __cdecl dispatch();
	void dispose();
	void onDestroy();
	static void destroyInstance(PersistentDataStore* p);
	PersistentDataStore* __cdecl sub_94aff0(void* arg);
	PersistentDataStore* __cdecl sub_94b010(void* arg);
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_PERSISTENTDATASTORE_H
