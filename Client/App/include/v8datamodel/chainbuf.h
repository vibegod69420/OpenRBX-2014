#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_CHAINBUF_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_CHAINBUF_H

#include "decomp.h"

namespace std {

// AUTO-GENERATED HELPERS

class chainbuf
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	static void destroyInstance(chainbuf* p);
	void __cdecl write(void* destination);
	void __cdecl write_ptr(void* destination);
	void __cdecl write_ptr(void* src, void* destination);
	void __cdecl write_ptr(void* destination) const;
	void __cdecl write(void* src, void* destination);
	void clear();
	void close();
	~chainbuf();
	void purge();
	void __cdecl read(void* destination);
	void __cdecl write_float(void* destination);
	// AUTO-GENERATED METHODS
};

} // namespace std

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_CHAINBUF_H
