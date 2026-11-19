#include "SoundServiceStatsItem.h"

#include "decomp.h"



struct SoundServiceStatsItemHelper
{
    void update();
    void setMode(int);
};

struct SoundServiceStatsItemLayout
{
    char pad[0x20];
    double value;
};

// FUNCTION: ROBLOXSTUDIO 0x00704a90
double SoundServiceStatsItem::getValue()
{
    reinterpret_cast<SoundServiceStatsItemHelper*>(this)->update();
    reinterpret_cast<SoundServiceStatsItemHelper*>(this)->setMode(2);
    return reinterpret_cast<SoundServiceStatsItemLayout*>(this)->value;
}

// FUNCTION: ROBLOXSTUDIO 0x007058c0
double SoundServiceStatsItem::getCurrentValue()
{
	reinterpret_cast<SoundServiceStatsItemHelper*>(this)->update();
	reinterpret_cast<SoundServiceStatsItemHelper*>(this)->update();
	reinterpret_cast<SoundServiceStatsItemHelper*>(this)->setMode(2);
	return reinterpret_cast<SoundServiceStatsItemLayout*>(this)->value;
}

struct SoundServiceStatsItemSetModeHelper
{
	void setMode(int, int);
};

struct SoundServiceStatsItemIntLayout
{
	char pad0[0x18];
	int state;
	char pad1c[0x0C];
	char* data;
};

// FUNCTION: ROBLOXSTUDIO 0x00704f00
int SoundServiceStatsItem::getIntValue()
{
	reinterpret_cast<SoundServiceStatsItemHelper*>(this)->update();
	reinterpret_cast<SoundServiceStatsItemSetModeHelper*>(this)->setMode(4, 5);

	SoundServiceStatsItemIntLayout* self = reinterpret_cast<SoundServiceStatsItemIntLayout*>(this);
	int state = self->state;
	state -= 4;
	if (state == 0 || --state == 0)
	{
		char* p = self->data;
		p = *reinterpret_cast<char**>(p + 4);
		return *reinterpret_cast<int*>(p + 4);
	}

	return 0;
}

struct SoundServiceStatsItemBoolLayout
{
	char pad[0x20];
	bool value;
};

// FUNCTION: ROBLOXSTUDIO 0x00705900
bool SoundServiceStatsItem::getBoolValue()
{
	reinterpret_cast<SoundServiceStatsItemHelper*>(this)->update();
	reinterpret_cast<SoundServiceStatsItemHelper*>(this)->update();
	reinterpret_cast<SoundServiceStatsItemHelper*>(this)->setMode(1);
	return reinterpret_cast<SoundServiceStatsItemBoolLayout*>(this)->value;
}

// AUTO-GENERATED IMPLEMENTATIONS


