#ifndef CLIENT_APP_INCLUDE_HUMANOID_HUMANOID_H
#define CLIENT_APP_INCLUDE_HUMANOID_HUMANOID_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

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
		struct { char _pad_field_0298[0x298]; int field_0298; };
		// AUTO-GENERATED FIELDS
	};

	void setFlag0x31();
	int getInt148() const;
	void __cdecl dispatch(int arg);
	float getUnknown200Float();
	int getField270() const;
	int getField280() const;
	int getField290() const;
	int getField278() const;
	int getField288() const;
	int getField268() const;
	int getField268Or298();
	int getField270DerefE0() const;
	int getField2A0DerefE0() const;
	int getField298() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_HUMANOID_HUMANOID_H
