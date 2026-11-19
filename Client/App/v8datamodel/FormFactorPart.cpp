#include "v8datamodel/FormFactorPart.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0067e190
int FormFactorPart::getField110() const
{
	return field_0110;
}

class JointsService
{
public:
	void createJoint(void* primitive, int flag); // 0x009962d0
};

JointsService* __cdecl getJointsService(FormFactorPart* part); // 0x00968f00

// FUNCTION: ROBLOXSTUDIO 0x00890cc0
void FormFactorPart::createJoints()
{
	JointsService* service = getJointsService(this);
	if (service)
	{
		service->createJoint(*(void**)((char*)this + 0xE0), 1);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00891b60
int FormFactorPart::getField104() const
{
	return field_0104;
}

// FUNCTION: ROBLOXSTUDIO 0x00891b50
bool FormFactorPart::getSubFlagE0_111() const
{
	return subb_00e0_0111->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00890c90
void FormFactorPart::breakJoints()
{
	JointsService* service = getJointsService(this);
	if (service)
	{
		service->createJoint(*(void**)((char*)this + 0xE0), 0);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
