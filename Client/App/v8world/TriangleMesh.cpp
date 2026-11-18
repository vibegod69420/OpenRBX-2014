#include "v8world/TriangleMesh.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0099d310
float TriangleMesh::getGridSize() const
{
	return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x2C);
}

namespace
{
struct TriangleMeshCallTarget
{
	virtual void v0();
	virtual void v1();
	virtual void v2(int arg);
};
}

// FUNCTION: ROBLOXSTUDIO 0x00b6c280
bool TriangleMesh::update()
{
	void* p18 = reinterpret_cast<void**>(this)[6];
	if (p18)
	{
		void* p = reinterpret_cast<void**>(p18)[6];
		TriangleMeshCallTarget* target = reinterpret_cast<TriangleMeshCallTarget**>(this)[4];
		p = *reinterpret_cast<void**>(p);
		target->v2(*reinterpret_cast<int*>(p));
		return true;
	}
	return false;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
