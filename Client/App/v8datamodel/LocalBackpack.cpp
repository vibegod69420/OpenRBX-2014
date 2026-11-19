#include "v8datamodel/LocalBackpack.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0092b7b0
int LocalBackpack::isNull() const
{
	return _vtable_or_head == 0;
}

class Instance
{
public:
	bool isDescendantOf(const Instance* instance) const;
};

class DataModel
{
public:
	static Instance* get();
};

// FUNCTION: ROBLOXSTUDIO 0x0092a630
Instance* LocalBackpack::getPlayer() const
{
	Instance* p = *(Instance**)((char*)this + 0x38);
	if (p != NULL && (p = (Instance*)((char*)p + 0x1C)) != NULL)
	{
		Instance* context = *(Instance**)((char*)p + 0x0C);
		if (context->isDescendantOf(DataModel::get()))
			return (Instance*)((char*)p - 0x1C);
	}
	return NULL;
}

struct Color4
{
	float r;
	float g;
	float b;
	float a;

	Color4(float r_, float g_, float b_, float a_)
		: r(r_), g(g_), b(b_), a(a_)
	{
	}
};

// FUNCTION: ROBLOXSTUDIO 0x0092a210
const Color4& LocalBackpack::getSelectionColor()
{
	static Color4 color(0.7f, 0.7f, 0.7f, 0.5f);
	return color;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
