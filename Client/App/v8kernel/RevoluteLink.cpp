#include "v8kernel/RevoluteLink.h"

#include "decomp.h"

namespace RBX {

class Kernel
{
public:
	void dirty();
};

class Body
{
public:
	char padding0[0x28];
	Kernel* kernel;
	char padding1[0x08];
	RevoluteLink* link;
};

extern unsigned char g_AssertEnabled;
typedef unsigned char (__cdecl *AssertHandler)(const char*, const char*, int);
extern AssertHandler g_AssertHandler;
void __cdecl RBXAssert(int level, const char* message);

// FUNCTION: ROBLOXSTUDIO 0x00b5e680
void RevoluteLink::dirty()
{
	Body* body = ((Body**)this)[1];
	if (!body)
		return;

	unsigned char enabled = g_AssertEnabled;
	if (enabled)
	{
		if (body->link != this)
		{
			AssertHandler handler = g_AssertHandler;
			if (handler)
			{
				if (handler("body->getLink() == this",
					"D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\v8kernel\\Link.cpp",
					24))
					goto tail;

				enabled = g_AssertEnabled;
			}

			RBXAssert(enabled,
				"body->getLink() == this file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\v8kernel\\Link.cpp line: 24");
		}
	}

tail:
	body = ((Body**)this)[1];
	body->kernel->dirty();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
