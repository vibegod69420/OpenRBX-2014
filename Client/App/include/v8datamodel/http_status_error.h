#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_HTTP_STATUS_ERROR_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_HTTP_STATUS_ERROR_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class http_status_error
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	http_status_error();
	void destroy();
	void __cdecl write16(unsigned int value);
	void __cdecl transfer();
	void __cdecl flush();
	int __cdecl check();
	void __cdecl copy_block(const unsigned char* buf, unsigned int len, int header);
	void __cdecl update(unsigned int value);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_HTTP_STATUS_ERROR_H
