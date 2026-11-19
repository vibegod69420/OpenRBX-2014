#include "v8datamodel/Pose.h"

#include "decomp.h"

namespace RBX {

class PoseDescriptor
{
public:
	bool isA(PoseDescriptor* desc);
};

PoseDescriptor* poseDescriptor811210();
PoseDescriptor* poseDescriptor812810();

// FUNCTION: ROBLOXSTUDIO 0x0091ca30
Pose* Pose::getLinkedPose()
{
	Pose* cur = this;

	for (;;)
	{
		Pose* p = *(Pose**)((char*)cur + 0x38);
		if (p)
		{
			char* b = (char*)p + 0x1C;
			if (b)
			{
				PoseDescriptor* target = *(PoseDescriptor**)(b + 0x0C);
				if (target->isA(poseDescriptor811210()))
				{
					Pose* result = (Pose*)(b - 0x1C);
					if (result)
						return result;
				}
			}
		}

		p = *(Pose**)((char*)cur + 0x38);
		if (!p)
			return 0;

		{
			char* b = (char*)p + 0x1C;
			if (!b)
				return 0;

			PoseDescriptor* target = *(PoseDescriptor**)(b + 0x0C);
			if (!target->isA(poseDescriptor812810()))
				return 0;

			cur = (Pose*)(b - 0x1C);
			if (!cur)
				return 0;
		}
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
