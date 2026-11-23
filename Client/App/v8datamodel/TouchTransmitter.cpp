#include "v8datamodel/TouchTransmitter.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00aaf910
__declspec(dllimport) void __cdecl TouchTransmitter_UpdateCheck();

struct TouchTransmitterDestroyHelper
{
	void destroyRange(void* begin, void* end);
};

void TouchTransmitter::clear()
{
	void** storage = reinterpret_cast<void**>(this);
	if (storage[0])
	{
		TouchTransmitter_UpdateCheck();
		((TouchTransmitterDestroyHelper*)this)->destroyRange(storage[0], storage[1]);
		operator delete(storage[0]);
		storage[0] = 0;
		storage[1] = 0;
		storage[2] = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
