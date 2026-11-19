#include "v8world/RotatePJoint.h"

#include "decomp.h"

namespace RBX {

class RotateJointKernel;

class RotateJointKernel
{
public:
	void step();
};

// FUNCTION: ROBLOXSTUDIO 0x00b8f1f0
void RotatePJoint::stepUi()
{
	struct Layout
	{
		char pad[0xD0];
		RotateJointKernel* kernelJoint;
	};

	RotateJointKernel* kernelJoint = reinterpret_cast<Layout*>(this)->kernelJoint;
	if (kernelJoint)
		kernelJoint->step();
}

// FUNCTION: ROBLOXSTUDIO 0x0099ce20
int RotatePJoint::getConst7() const
{
	return 7;
}

class RotateJointKernel;

struct RotatePJoint_SpanningEdge
{
	RotateJointKernel* getChild();
};

struct RotateJointKernel_Link
{
	void clearFirst(int);
	void clearSecond(int);
};

extern unsigned char g_FastAssertFlag_12DE657;
typedef unsigned char (__cdecl *FastAssertCallback)(const char*, const char*, int);
extern FastAssertCallback g_FastAssertCallback_12DE694;
void __cdecl RBXAssert_6B9740(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00b8c950
void RotatePJoint::removeChild()
{
	RotateJointKernel* child = reinterpret_cast<RotatePJoint_SpanningEdge*>(this)->getChild();

	unsigned char flag = g_FastAssertFlag_12DE657;
	if (flag)
	{
		if (!child)
		{
			FastAssertCallback cb = g_FastAssertCallback_12DE694;
			if (cb)
			{
				if (cb("child", "D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\util\\SpanningEdge.cpp", 42))
					goto skipAssert;

				flag = g_FastAssertFlag_12DE657;
			}
			RBXAssert_6B9740(flag, "child file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\util\\SpanningEdge.cpp line: 42");
		}
	}

skipAssert:
	reinterpret_cast<RotateJointKernel_Link*>(child)->clearFirst(0);
	reinterpret_cast<RotateJointKernel_Link*>(child)->clearSecond(0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
