#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_STREAM_BUFFER_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_STREAM_BUFFER_H

#include "decomp.h"

namespace std {

// AUTO-GENERATED HELPERS

class stream_buffer
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_flag_0058[0x58]; bool flag_0058; };
		// AUTO-GENERATED FIELDS
	};

	bool getFlag58() const;
	int getConst19190364() const;
	int getConst19190288() const;
	int getConst19190392() const;
	int getConst19190592() const;
	int getConst19190512() const;
	int getConst19190472() const;
	int getConst19196136() const;
	int getConst19553048() const;
	int getConst19554176() const;
	bool getFlag60Bit2() const;
	bool getFlag68Bit2() const;
	bool getFlagA0Bit2() const;
	bool getFlagF0Bit2() const;
	void vslot22();
	void vslot22_d8();
	void vslot22_50();
	// AUTO-GENERATED METHODS
};

} // namespace std

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_STREAM_BUFFER_H
