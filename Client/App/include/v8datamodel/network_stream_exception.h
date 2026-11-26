#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_NETWORK_STREAM_EXCEPTION_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_NETWORK_STREAM_EXCEPTION_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class network_stream_exception
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	const char* what() const;
	void onDestroy();
	static void destroyInstance(network_stream_exception* p);
	void __cdecl raise(const void* error);
	void __cdecl writeVarInt(unsigned int value);
	void __cdecl init(const void* error);
	network_stream_exception* __cdecl initEndpoint(void* endpoint);
	void __cdecl raiseFromError(const void* error);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_NETWORK_STREAM_EXCEPTION_H
