#include "v8datamodel/TType.h"

#include "decomp.h"

namespace RBX {

extern unsigned char g_atomicAlignmentAssertEnabled;
typedef unsigned char (__cdecl *AtomicAssertHandler)(const char*, const char*, int);
extern AtomicAssertHandler g_atomicAssertHandler;
void __cdecl RBXAssert(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x008bfc00
TType::TType()
{
	this->_vtable_or_head = 0;

	unsigned char enabled = g_atomicAlignmentAssertEnabled;
	if (enabled)
	{
		if (((unsigned int)this & 3) != 0)
		{
			AtomicAssertHandler handler = g_atomicAssertHandler;
			if (handler)
			{
				if (handler("(((long)(&(this->v))) & 0x3) == 0",
					"D:\\BuildAgent\\work\\Trunk2012\\Client\\Base\\include\\rbx/atomic.h",
					304))
				{
					goto end;
				}
				enabled = g_atomicAlignmentAssertEnabled;
			}
			RBXAssert((int)(unsigned char)enabled,
				"(((long)(&(this->v))) & 0x3) == 0 file: D:\\BuildAgent\\work\\Trunk2012\\Client\\Base\\include\\rbx/atomic.h line: 304");
		}
	}

end:
	this->_vtable_or_head = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
