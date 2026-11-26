#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_FILTERING_STREAM_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_FILTERING_STREAM_H

#include "decomp.h"

namespace std {

// AUTO-GENERATED HELPERS

class filtering_stream
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void reset();
	void sync();
	filtering_stream();
	filtering_stream*sub_a2b610();
	void sub_a2cb90();
	filtering_stream*sub_a2b5a0();
	filtering_stream* __cdecl sub_a29d30(int mode);
	filtering_stream* __cdecl sub_a29d50(int mode);
	// AUTO-GENERATED METHODS
};

} // namespace std

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_FILTERING_STREAM_H
