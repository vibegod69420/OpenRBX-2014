#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_BASIC_ALTSTRINGBUF_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_BASIC_ALTSTRINGBUF_H

#include "decomp.h"

namespace std {

// AUTO-GENERATED HELPERS

class basic_altstringbuf
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void BasicAltStringBuf_Thunk_E10140();
	void BasicAltStringBuf_Thunk_E100D4();
	void FreeHandle();
	basic_altstringbuf();
	void Release();
	void Create();
	void Close();
	int __cdecl Init(unsigned char mode, const unsigned char* src);
	unsigned int __cdecl CalcBufferSize();
	// AUTO-GENERATED METHODS
};

} // namespace std

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_BASIC_ALTSTRINGBUF_H
