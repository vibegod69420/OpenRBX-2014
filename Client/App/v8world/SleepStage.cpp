#include "v8world/SleepStage.h"

#include "decomp.h"

namespace RBX {

class SleepStageObject
{
public:
	char pad0[8];
	unsigned char stateFlag; // 0x08
	char pad9[0xC3];
	int counter0; // 0xCC
	int counter1; // 0xD0
	int counter2; // 0xD4
	int counter3; // 0xD8
	int counter4; // 0xDC
	int counter5; // 0xE0

	void processState();
};

struct SleepStageData
{
	char pad0[0x30];
	SleepStageObject* object; // 0x30
};

// FUNCTION: ROBLOXSTUDIO 0x00ba6fb0
void SleepStage::updateSleepState()
{
	SleepStageData* data = *(SleepStageData**)((char*)this + 0x28);
	SleepStageObject* object = data->object;

	if (object != NULL)
	{
		if (object->stateFlag != 0)
		{
			object->processState();
		}

		object->counter0 = 0;
		object->counter1 = 0;
		object->counter2 = 0;
		object->counter3 = 0;
		object->counter4 = 0;
		object->counter5 = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
