#include "v8datamodel/ArcHandles.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00a9c560
int ArcHandles::getHandleId()
{
	return -1;
}

// FUNCTION: ROBLOXSTUDIO 0x00a9d6d0
bool ArcHandles::getFlag20() const
{
	return flag_0020;
}

// FUNCTION: ROBLOXSTUDIO 0x00b16da0
void ArcHandles::setFieldA0()
{
	*(bool*)((char*)this + 0xA0) = true;
}

class Axes
{
public:
	int axes;

	Axes(int a);
	void setNormalId(int normalId, bool value);
	bool getNormalId(int normalId) const;
};

// FUNCTION: ROBLOXSTUDIO 0x00aa0880
int ArcHandles::getAxes()
{
	Axes result(0);
	Axes* source = reinterpret_cast<Axes*>(reinterpret_cast<char*>(this) + 0x16c);

	result.setNormalId(0, source->getNormalId(0));
	result.setNormalId(1, source->getNormalId(1));
	result.setNormalId(2, source->getNormalId(2));

	return result.axes;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
