#include "v8world/ManualJointSurfacePair.h"

#include "decomp.h"

namespace RBX {

class ManualJoint
{
public:
	virtual ~ManualJoint();
};

struct ManualJointVector
{
	ManualJoint** _Myfirst;
	ManualJoint** _Mylast;
	ManualJoint** _Myend;

	__declspec(dllimport) void __thiscall _Tidy();
};

// FUNCTION: ROBLOXSTUDIO 0x00a51920
void ManualJointSurfacePair::removeAllManualJoints()
{
	ManualJointVector& joints = *(ManualJointVector*)((char*)this + 0x2C);

	for (unsigned int i = 0; i < (unsigned int)(joints._Mylast - joints._Myfirst); ++i)
	{
		if (joints._Myfirst[i])
			delete joints._Myfirst[i];
	}

	joints._Tidy();
	joints._Mylast = joints._Myfirst;
	*(unsigned char*)((char*)this + 0x1A) = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
