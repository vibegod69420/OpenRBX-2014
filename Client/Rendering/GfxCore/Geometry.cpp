#include "Geometry.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0099eb50
int Geometry::getCount() const
{
    const char* const* data = reinterpret_cast<const char* const*>(this);
    return (data[1] - data[0]) / 36;
}

class GeometryUpdatePeer
{
public:
	Geometry* getOwner();
};

class GeometryUpdateTarget
{
public:
	void setSkinningData(const void* data);
};

GeometryUpdatePeer* Geometry_getUpdatePeer(const Geometry* geom);
const void* __stdcall Geometry_getSkinningDataArg(const void* data);

// FUNCTION: ROBLOXSTUDIO 0x0099ec20
void Geometry::update()
{
	GeometryUpdatePeer* peer = Geometry_getUpdatePeer(this);
	if (peer)
	{
		if (peer->getOwner() != this)
			return;
	}

	const void* arg;
	if (this)
		arg = (char*)this + 0x34;
	else
		arg = 0;

	GeometryUpdateTarget* target = *(GeometryUpdateTarget**)((char*)this + 0x104);
	target->setSkinningData(Geometry_getSkinningDataArg(arg));
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
