#ifndef CLIENT_APP_INCLUDE_V8KERNEL_KERNEL_H
#define CLIENT_APP_INCLUDE_V8KERNEL_KERNEL_H

#include "decomp.h"

namespace RBX {

struct Sub_Kernel_24_34 { char pad[52]; int val; };
// AUTO-GENERATED HELPERS

class Kernel
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_sub_0024_34[0x24]; Sub_Kernel_24_34* sub_0024_34; };
		// AUTO-GENERATED FIELDS
	};

	int getConst15() const;
	int getSubField24_34() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8KERNEL_KERNEL_H
