#include "humanoid/Climbing.h"

#include "decomp.h"

namespace RBX {
namespace HUMAN {

class Humanoid;

class Humanoid
{
public:
	bool canClimb();
};

struct ClimbingData
{
	void* vftable;
	int unknown4;
	Humanoid* humanoid;
	int unknownC;
	int climbValue;
};

// FUNCTION: ROBLOXSTUDIO 0x00bb6c20
bool Climbing::computeClimb()
{
	ClimbingData* data = reinterpret_cast<ClimbingData*>(this);
	if (data->humanoid->canClimb())
	{
		data->climbValue = 0;
		return true;
	}
	return false;
}

class ClimbCheckTarget
{
public:
	int isClimbing();
};

extern unsigned char g_ClimbingDebugFlag;
extern bool (__cdecl* g_ClimbingAssertHandler)(const char*, const char*, int);

ClimbCheckTarget* __cdecl getClimbingCharacter(void*);
void __cdecl reportClimbingAssert(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x00bb67b0
bool Climbing::isClimbValid()
{
	ClimbingData* data = reinterpret_cast<ClimbingData*>(this);
	ClimbCheckTarget* character = getClimbingCharacter(data->humanoid);
	unsigned char flag = g_ClimbingDebugFlag;
	if (flag)
	{
		if (!character)
		{
			if (g_ClimbingAssertHandler)
			{
				if (g_ClimbingAssertHandler("character", "D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\humanoid\\HumanoidState.cpp", 824))
					goto done;
				flag = g_ClimbingDebugFlag;
			}
			reportClimbingAssert((int)flag, "character file: D:\\BuildAgent\\work\\Trunk2012\\Client\\App\\humanoid\\HumanoidState.cpp line: 824");
		}
	}
done:
	return character->isClimbing() != 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
