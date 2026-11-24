#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_STATSUPDATEJOB_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_STATSUPDATEJOB_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

class StatsUpdateJob
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void appendBit();
	StatsUpdateJob& __cdecl reserve(unsigned int bits);
	StatsUpdateJob& __cdecl writeStats(const void* source);
	StatsUpdateJob& __cdecl writeField(const void* field);
	StatsUpdateJob& __cdecl writeFieldValue(const void* field);
	StatsUpdateJob& __cdecl reservePair(unsigned int bits);
	bool readBit();
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_STATSUPDATEJOB_H
