#include "v8world/MovingStage.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00c11800
class MovingStageEdgeAccess
{
public:
	virtual void _vf0();
	virtual void _vf1();
	virtual void _vf2();
	virtual void _vf3();
	virtual void* getEdge(int index);
};

int sub_C119B0(void* node);
void sub_C11880(void* r0, void* r1, int c0, int c1, int a2, int a3);

void __cdecl MovingStage::processEdges(int a2, int a3)
{
	void* r0 = ((MovingStageEdgeAccess*)this)->getEdge(0);
	void* r1 = ((MovingStageEdgeAccess*)this)->getEdge(1);

	int c0;
	if (!r0)
	{
		c0 = 0;
	}
	else
	{
		void* next = *(void**)((char*)r0 + 4);
		if (!next)
			c0 = 1;
		else
			c0 = sub_C119B0(next) + 1;
	}

	int c1;
	if (!r1)
	{
		c1 = 0;
	}
	else
	{
		void* next = *(void**)((char*)r1 + 4);
		if (!next)
			c1 = 1;
		else
			c1 = sub_C119B0(next) + 1;
	}

	sub_C11880(r0, r1, c0, c1, a2, a3);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
