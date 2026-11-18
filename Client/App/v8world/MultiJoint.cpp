#include "v8world/MultiJoint.h"

#include "decomp.h"

namespace RBX {

extern "C" void __cdecl sub_6B9740(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00af1120
int MultiJoint::getJointType() const
{
	unsigned char flag = *(unsigned char*)0x012DE657;
	if (flag)
	{
		typedef unsigned char(__cdecl *Callback)(int, const char*, int);
		Callback callback = *(Callback*)0x012DE694;

		if (!callback)
			goto report;

		if (callback(0x010062B8, (const char*)0x00E66CA8, 0x6A))
			goto done;

		flag = *(unsigned char*)0x012DE657;
	report:
		sub_6B9740(flag, (const char*)0x00EBFA20);
	}

done:
	return 13;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
