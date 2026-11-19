#include "v8datamodel/SoundId.h"

#include "decomp.h"

namespace RBX {
namespace Soundscape {

void __stdcall sub_991C40(SoundId* soundId);

// FUNCTION: ROBLOXSTUDIO 0x00991d40
void SoundId::sub_991D40()
{
	sub_991C40(this);
}

// FUNCTION: ROBLOXSTUDIO 0x009977c0
int SoundId::getFieldB8() const
{
	return field_00b8;
}

// FUNCTION: ROBLOXSTUDIO 0x00997710
void* SoundId::sub_997710() const
{
	char* p = *(char**)((char*)this + 0xB4);
	p = *(char**)(p + 0x24);
	return *(void**)(p + 0x64);
}

// FUNCTION: ROBLOXSTUDIO 0x00997790
void* SoundId::sub_997790() const
{
	char* p = *(char**)((char*)this + 0xB4);
	p = *(char**)(p + 0x24);
	return *(void**)(p + 0x60);
}

int sub_B4EC80();

// FUNCTION: ROBLOXSTUDIO 0x00997830
int SoundId::sub_997830() const
{
	int divisor = sub_B4EC80();
	return *(int*)((char*)this + 0x38) / divisor;
}

struct SoundIdNode_997800
{
	virtual int vfunc0();
	virtual int getType() const;
	int pad;
	SoundIdNode_997800* next;
};

// FUNCTION: ROBLOXSTUDIO 0x00997800
void* SoundId::sub_997800() const
{
	SoundIdNode_997800* node = *(SoundIdNode_997800**)((char*)this + 0xBC);
	while (node->getType() != 7)
	{
		node = node->next;
	}
	return node;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Soundscape
} // namespace RBX
