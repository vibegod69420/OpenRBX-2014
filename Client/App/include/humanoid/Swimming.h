#ifndef CLIENT_APP_INCLUDE_HUMANOID_SWIMMING_H
#define CLIENT_APP_INCLUDE_HUMANOID_SWIMMING_H

#include "decomp.h"

namespace RBX {
namespace HUMAN {

// AUTO-GENERATED HELPERS

class Swimming
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void __cdecl onEvent(int* event);
	void __cdecl setState(int a, int b, int c);
	void __cdecl setState(int a, int b, int c, int d);
	void __cdecl accumulate(int delta);
	void __cdecl accumulate(int* event);
	int __cdecl applyState(int a, int b, int c, int d);
	int __cdecl processEvent(int arg1, int* arg2, int* arg3);
	int __cdecl fireEvent(int* event, int arg3);
	// AUTO-GENERATED METHODS
};

} // namespace HUMAN
} // namespace RBX

#endif // CLIENT_APP_INCLUDE_HUMANOID_SWIMMING_H
