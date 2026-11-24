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

extern "C" void __cdecl sub_6B9740(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x007bc660
void* Camera::getCameraSubject() const
{
	void* obj = *(void**)((char*)this + 0x1a4);
	if (obj)
	{
		void* answer = __RTDynamicCast(obj, 0, (void*)0x012BDBF4, (void*)0x011ECEBC, 0);
		unsigned char flag = *(unsigned char*)0x012DE657;
		if (flag && !answer)
		{
			typedef bool (__cdecl *AssertCallback)(const char*, const char*, int);
			AssertCallback cb = *(AssertCallback*)0x012DE694;
			if (cb)
			{
				if (cb((const char*)0x00E56BA4, (const char*)0x00E5688C, 838))
					goto done;
				flag = *(unsigned char*)0x012DE657;
			}
			sub_6B9740((int)flag, (const char*)0x00E56BB0);
		done:
			;
		}
		return answer;
	}
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
