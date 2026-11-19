#include "InsertBasicObjectVerb.h"

#include "decomp.h"



class VerbManager
{
public:
	__declspec(dllimport) void registerVerb(InsertBasicObjectVerb* verb, const char* description, int flag);
};

extern VerbManager g_verbManager;

// FUNCTION: ROBLOXSTUDIO 0x00517390
InsertBasicObjectVerb::InsertBasicObjectVerb()
{
	volatile int state = 0;
	g_verbManager.registerVerb(this, "A screenshot from Roblox.  Learn more at http://www.roblox.com", 0);
}

// AUTO-GENERATED IMPLEMENTATIONS


