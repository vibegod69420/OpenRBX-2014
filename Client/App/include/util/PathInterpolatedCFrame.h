#ifndef CLIENT_APP_INCLUDE_UTIL_PATHINTERPOLATEDCFRAME_H
#define CLIENT_APP_INCLUDE_UTIL_PATHINTERPOLATEDCFRAME_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00e66684
class PathInterpolatedCFrame
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_field_0044[0x44]; int field_0044; };
		struct { char _pad_flag_0041[0x41]; bool flag_0041; };
		struct { char _pad_flag_0040[0x40]; bool flag_0040; };
		// AUTO-GENERATED FIELDS
	};

	int getField44() const;
	bool getFlag41() const;
	bool getFlag40() const;
	void setFlag40(bool value);
	void setField44(int value);
	void onDestroy();
	void* scalarDeletingDestructor(unsigned int flags);
	void* scalarDeletingDestructor_f310(unsigned int flags);
	double getField48() const;
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_UTIL_PATHINTERPOLATEDCFRAME_H
