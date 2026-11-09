#ifndef CLIENT_APP_INCLUDE_V8KERNEL_KERNEL_H
#define CLIENT_APP_INCLUDE_V8KERNEL_KERNEL_H

#include "decomp.h"

namespace RBX {

struct Sub_Kernel_24_34 { char pad[52]; int val; };
struct Sub_Kernel_24_04 { char pad[4]; int val; };
struct Sub_Kernel_24_64 { char pad[100]; int val; };
struct Sub_Kernel_24_24 { char pad[36]; int val; };
struct Sub_Kernel_24_44 { char pad[68]; int val; };
struct Sub_Kernel_24_54 { char pad[84]; int val; };
struct Sub_Kernel_24_14 { char pad[20]; int val; };
struct Sub_Kernel_24_74 { char pad[116]; int val; };
struct Sub_Kernel_24_00a4 { char pad[164]; int val; };
struct Sub_Kernel_24_0094 { char pad[148]; int val; };
struct Sub_Kernel_24_0084 { char pad[132]; int val; };
// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00ecb3e4
class Kernel
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_sub_0024_34[0x24]; Sub_Kernel_24_34* sub_0024_34; };
		struct { char _pad_sub_0024_04[0x24]; Sub_Kernel_24_04* sub_0024_04; };
		struct { char _pad_sub_0024_64[0x24]; Sub_Kernel_24_64* sub_0024_64; };
		struct { char _pad_sub_0024_24[0x24]; Sub_Kernel_24_24* sub_0024_24; };
		struct { char _pad_sub_0024_44[0x24]; Sub_Kernel_24_44* sub_0024_44; };
		struct { char _pad_sub_0024_54[0x24]; Sub_Kernel_24_54* sub_0024_54; };
		struct { char _pad_sub_0024_14[0x24]; Sub_Kernel_24_14* sub_0024_14; };
		struct { char _pad_sub_0024_74[0x24]; Sub_Kernel_24_74* sub_0024_74; };
		struct { char _pad_sub_0024_00a4[0x24]; Sub_Kernel_24_00a4* sub_0024_00a4; };
		struct { char _pad_sub_0024_0094[0x24]; Sub_Kernel_24_0094* sub_0024_0094; };
		struct { char _pad_sub_0024_0084[0x24]; Sub_Kernel_24_0084* sub_0024_0084; };
		// AUTO-GENERATED FIELDS
	};

	int getSubField24_34() const;
	int getSubField24_04() const;
	int getSubField24_64() const;
	int getSubField24_24() const;
	int getSubField24_44() const;
	int getSubField24_54() const;
	int getSubField24_14() const;
	int getSubField24_74() const;
	int getSubField24_A4() const;
	int getSubField24_94() const;
	int getSubField24_84() const;
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8KERNEL_KERNEL_H
