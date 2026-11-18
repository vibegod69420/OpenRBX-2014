#include "humanoid/RunningBase.h"

#include "decomp.h"

namespace RBX {
namespace HUMAN {

// FUNCTION: ROBLOXSTUDIO 0x00bb94a0
float RunningBase::getSpeed()
{
	return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + 0xF8);
}

struct RunningBase_GetStateSlot
{
	virtual void vf0();
	virtual void vf1();
	virtual void vf2();
	virtual void vf3();
	virtual void vf4();
	virtual void vf5();
	virtual void vf6();
	virtual void vf7();
	virtual void vf8();
	virtual void vf9();
	virtual void vf10();
	virtual void vf11();
	virtual void vf12();
	virtual int getState();
};

struct RunningBase_StateChange
{
	void setState(int state, int enabled);
};

struct RunningBase_Notifier
{
	void notify(int oldState, int newState);
};

// FUNCTION: ROBLOXSTUDIO 0x00bb8a80
void RunningBase::fireStateEvents()
{
	int oldState = *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x18);

	if (oldState != reinterpret_cast<RunningBase_GetStateSlot*>(this)->getState())
	{
		reinterpret_cast<RunningBase_StateChange*>(this)->setState(oldState, 0);
		reinterpret_cast<RunningBase_StateChange*>(this)->setState(
			reinterpret_cast<RunningBase_GetStateSlot*>(this)->getState(), 1);

		reinterpret_cast<RunningBase_Notifier*>(
			*reinterpret_cast<char**>(reinterpret_cast<char*>(this) + 0x8) + 0x380)->notify(
			*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x18),
			reinterpret_cast<RunningBase_GetStateSlot*>(this)->getState());
	}

	*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x18) =
		reinterpret_cast<RunningBase_GetStateSlot*>(this)->getState();
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace HUMAN
} // namespace RBX
