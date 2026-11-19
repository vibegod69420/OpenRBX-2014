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

// AUTO-GENERATED IMPLEMENTATIONS


