#include "v8datamodel/LogService.h"

#include "decomp.h"

namespace RBX {

extern "C" void __cdecl free(void*);

struct LogServiceClearHelper
{
	void doClear(char* out);
};

// FUNCTION: ROBLOXSTUDIO 0x00a685e0
void LogService::Clear()
{
	char local;
	reinterpret_cast<LogServiceClearHelper*>(this)->doClear(&local);

	void* p = *reinterpret_cast<void**>(this);
	if (p)
		free(p);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
