#include "v8world/RigidJoint.h"

#include "decomp.h"

namespace RBX {

extern unsigned char byte_12DE657;
typedef unsigned char (__cdecl *RigidJointAssertCallback)(int, const char*, int);
extern RigidJointAssertCallback dword_12DE694;
void __cdecl sub_6B9740(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00913db0
int RigidJoint::getJointType() const
{
	unsigned char flag = byte_12DE657;
	if (flag)
	{
		if (dword_12DE694)
		{
			if (dword_12DE694(0x10062B8, "D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\V8World/RigidJoint.h", 13))
				goto done;
			flag = byte_12DE657;
		}
		sub_6B9740(flag, "0 file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\include\\V8World/RigidJoint.h line: 13");
	}
done:
	return 13;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
