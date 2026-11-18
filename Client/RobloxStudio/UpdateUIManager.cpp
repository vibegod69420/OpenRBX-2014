#include "UpdateUIManager.h"

#include "decomp.h"



extern "C" __declspec(dllimport) void __cdecl qt_assert(const char *assertion, const char *file, int line);

// FUNCTION: ROBLOXSTUDIO 0x00589de0
void *UpdateUIManager::getUI()
{
	struct Data
	{
		char padding[0x18];
		void *value;
	};

	struct ScopedPtr
	{
		Data *d;

		Data *operator->() const
		{
			if (!d)
				qt_assert((const char *)0x0100CF84, (const char *)0x0100CF10, 90);
			return d;
		}
	};

	ScopedPtr *ptr = (ScopedPtr *)((char *)this + 4);

	if ((*ptr)->value)
		return (*ptr)->value;

	return (void *)0x012C0B38;
}

// AUTO-GENERATED IMPLEMENTATIONS


