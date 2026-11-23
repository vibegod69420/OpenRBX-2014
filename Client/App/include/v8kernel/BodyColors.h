#ifndef CLIENT_APP_INCLUDE_V8KERNEL_BODYCOLORS_H
#define CLIENT_APP_INCLUDE_V8KERNEL_BODYCOLORS_H

#include "decomp.h"

namespace RBX {

class BodyColorsGlobal;
// AUTO-GENERATED HELPERS

class BodyColors
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void onDestroy();
	static void destroyInstance(BodyColors* p);
	BodyColorsGlobal*getContextOwner();
	BodyColorsGlobal*getContextOwner() const;
	BodyColors();
	BodyColors*initBodyColors();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8KERNEL_BODYCOLORS_H
