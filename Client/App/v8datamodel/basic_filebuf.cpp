#include "v8datamodel/basic_filebuf.h"

#include "decomp.h"

namespace std {

extern "C" __declspec(dllimport) void __cdecl _lock_file(void*);

// FUNCTION: ROBLOXSTUDIO 0x0042d8e0
void basic_filebuf::_Lock()
{
	void* file = *(void**)((char*)this + 0x50);
	if (file)
		_lock_file(file);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
