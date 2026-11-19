#include "v8datamodel/Point.h"

#include "decomp.h"

namespace RBX {

class PointUpdateTarget
{
public:
	void onUpdate(void* arg1, void* arg2);
};

// FUNCTION: ROBLOXSTUDIO 0x00c02b40
void Point::update()
{
	char* p = *(char**)((char*)this + 0x0c);
	p = *(char**)(p + 0x28);
	PointUpdateTarget* target = *(PointUpdateTarget**)(p + 0x30);
	if (target)
		target->onUpdate((char*)this + 0x28, (char*)this + 0x1c);
}

struct PointSharedData
{
	void* ptr;
	int field4;
	int field8;

	__declspec(dllimport) void release();
};

void PointSharedDataFree(void* ptr);

// FUNCTION: ROBLOXSTUDIO 0x00c03000
void Point::release()
{
	PointSharedData* data = (PointSharedData*)((char*)this + 8);
	if (*(void**)((char*)this + 8))
	{
		data->release();
		PointSharedDataFree(data->ptr);
		data->ptr = 0;
		data->field4 = 0;
		data->field8 = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
