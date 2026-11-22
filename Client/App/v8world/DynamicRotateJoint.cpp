#include "v8world/DynamicRotateJoint.h"

#include "decomp.h"

namespace RBX {

extern unsigned char g_RBXAssertEnabled;
extern bool (__cdecl *g_RBXAssertCallback)(const char*, const char*, int);
extern void __cdecl RBXCrash(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00914e70
int DynamicRotateJoint::stepUi()
{
	unsigned char enabled = g_RBXAssertEnabled;
	if (enabled)
	{
		if (g_RBXAssertCallback)
		{
			if (g_RBXAssertCallback("Not Implemented", "D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\V8World/Joint.h", 183))
				return 0;
			enabled = g_RBXAssertEnabled;
		}
		RBXCrash((int)enabled, "!\"Not Implemented\" file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\V8World/Joint.h line: 183");
	}
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
