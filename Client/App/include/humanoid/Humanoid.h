#ifndef CLIENT_APP_INCLUDE_HUMANOID_HUMANOID_H
#define CLIENT_APP_INCLUDE_HUMANOID_HUMANOID_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e95dec
class Humanoid
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0270[0x270]; int field_0270; };
		struct { char _pad_field_0280[0x280]; int field_0280; };
		struct { char _pad_field_0290[0x290]; int field_0290; };
		struct { char _pad_field_0278[0x278]; int field_0278; };
		struct { char _pad_field_0288[0x288]; int field_0288; };
		struct { char _pad_field_0268[0x268]; int field_0268; };
		struct { char _pad_flag_0264[0x264]; bool flag_0264; };
		// AUTO-GENERATED FIELDS
	};

	int getField270() const;
	int getField280() const;
	int getField290() const;
	int getField278() const;
	int getField288() const;
	int getField268() const;
	void setFlag264(bool value);
	void onDispatchWithFlag(int arg, int flag);
	void dispatchWithFlag1(int arg);
	void dispatchWithFlag1_df00(int arg);
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_HUMANOID_HUMANOID_H
