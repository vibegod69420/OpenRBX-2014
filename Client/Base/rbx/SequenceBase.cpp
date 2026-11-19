#include "rbx/SequenceBase.h"

#include "decomp.h"

namespace RBX {
namespace Tasks {

void getWallTime(double* out);

// FUNCTION: ROBLOXSTUDIO 0x006c5910
double SequenceBase::getTime()
{
	double t;
	getWallTime(&t);
	return t;
}

// FUNCTION: ROBLOXSTUDIO 0x006c4fe0
void SequenceBase::start()
{
	double t;
	*(int*)((char*)this + 0x90) = 1;
	double* p = reinterpret_cast<double*(*)(double*)>(getWallTime)(&t);
	*(int*)((char*)this + 0xA0) = *(int*)p;
	*(int*)((char*)this + 0xA4) = *(int*)((char*)p + 4);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Tasks
} // namespace RBX
