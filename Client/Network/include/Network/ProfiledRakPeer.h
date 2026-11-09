#ifndef CLIENT_NETWORK_INCLUDE_NETWORK_PROFILEDRAKPEER_H
#define CLIENT_NETWORK_INCLUDE_NETWORK_PROFILEDRAKPEER_H

#include "decomp.h"

namespace RBX {
namespace Network {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00efb514
class ProfiledRakPeer
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0484[0x484]; int field_0484; };
		struct { char _pad_flag_000c[0xc]; bool flag_000c; };
		struct { char _pad_flag_0570[0x570]; bool flag_0570; };
		struct { char _pad_field_0468[0x468]; int field_0468; };
		// AUTO-GENERATED FIELDS
	};

	bool canAccept(int a0, int a1, int a2) const;
	bool canAccept_slot52(int a0, int a1, int a2, int a3, int a4, int a5) const;
	int getField484() const;
	void setFlag0C(bool value);
	void setFlag570(bool value);
	void setField468(int value);
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace Network
} // namespace RBX

#endif // CLIENT_NETWORK_INCLUDE_NETWORK_PROFILEDRAKPEER_H
