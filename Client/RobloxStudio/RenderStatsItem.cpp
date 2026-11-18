#include "RenderStatsItem.h"

#include "decomp.h"



namespace RBX
{
namespace Stats
{
class Item
{
public:
	void update();
};
}
}

struct RenderStatsTextWidget
{
	void setValue(int value);
};

int getRenderStatsValue();

// FUNCTION: ROBLOXSTUDIO 0x00495930
void RenderStatsItem::update()
{
	reinterpret_cast<RBX::Stats::Item*>(this)->update();

	int value = getRenderStatsValue();
	(*reinterpret_cast<RenderStatsTextWidget**>(reinterpret_cast<char*>(this) + 0x88))->setValue(value);
}

// AUTO-GENERATED IMPLEMENTATIONS


