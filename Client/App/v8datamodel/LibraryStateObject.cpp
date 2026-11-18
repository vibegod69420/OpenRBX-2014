#include "v8datamodel/LibraryStateObject.h"

#include "decomp.h"

namespace RBX {
namespace LibraryService {

void releaseObjectRef(void* p);

// FUNCTION: ROBLOXSTUDIO 0x00b80080
void LibraryStateObject::dispose()
{
	char* object = *(char**)((char*)this + 0x0C);
	if (object)
	{
		if (*(unsigned int*)(object + 0x18) >= 0x10)
		{
			operator delete(*(void**)(object + 0x04));
		}
		*(unsigned int*)(object + 0x18) = 0x0F;
		*(unsigned int*)(object + 0x14) = 0;
		object[0x04] = 0;

		char* field0 = *(char**)object;
		if (field0)
		{
			releaseObjectRef(field0 + 4);
		}

		operator delete(object);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace LibraryService
} // namespace RBX
