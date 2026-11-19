#include "v8datamodel/lock_error.h"

#include "decomp.h"

namespace boost {

struct lock_error_handler
{
	virtual void dispatch(int arg1, int arg2);
};

// FUNCTION: ROBLOXSTUDIO 0x0040fe40
void __cdecl lock_error::dispatch(int arg1, int arg2)
{
	if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x10) != 0)
	{
		reinterpret_cast<lock_error_handler*>(reinterpret_cast<char*>(this) + 8)->dispatch(arg1, arg2);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace boost
