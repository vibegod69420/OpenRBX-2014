#include "v8datamodel/CameraTiltDownCommand.h"

#include "decomp.h"

namespace RBX {

class CameraTiltTarget;

class CameraTiltDownSub
{
public:
	virtual void* func0();
	virtual void* func1();
	virtual CameraTiltTarget* getTiltTarget();
};

class CameraTiltTarget
{
public:
	void performTilt(int dir);
};

// FUNCTION: ROBLOXSTUDIO 0x0082e830
void CameraTiltDownCommand::execute()
{
	CameraTiltDownSub* sub = (CameraTiltDownSub*)((char*)*(void**)((char*)this + 0xC) + 0x128);
	CameraTiltTarget* target = sub->getTiltTarget();
	target->performTilt(1);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
