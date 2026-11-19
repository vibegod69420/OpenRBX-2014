#include "v8datamodel/Camera.h"

#include "decomp.h"

namespace RBX {

extern "C" void* __cdecl __RTDynamicCast(void* inptr, long vfDelta, void* srcType, void* targetType, int isReference);

// FUNCTION: ROBLOXSTUDIO 0x007bc590
void* Camera::findAncestorCast() const
{
	void* instance = *(void**)((char*)this + 0x38);
	if (instance)
	{
		do
		{
			void* result = __RTDynamicCast(instance, 0, (void*)0x012BDBF4, (void*)0x011ECE9C, 0);
			if (result)
				return result;

			instance = *(void**)((char*)instance + 0x38);
		}
		while (instance);
	}

	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
