#include "SSAO.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

// FUNCTION: ROBLOXSTUDIO 0x00696790
int SSAO::derefInt(const int* p)
{
	return *p;
}

// FUNCTION: ROBLOXSTUDIO 0x006967a0
int SSAO::derefInt_67a0(const int* p)
{
	return *p;
}

struct SSAO_Unk3C
{
	int unk0;
	int unk4;
	int value;
};

// FUNCTION: ROBLOXSTUDIO 0x006974a0
int SSAO::getUnk3C()
{
	SSAO_Unk3C* p = *(SSAO_Unk3C**)((char*)this + 0x3c);
	if (p)
		return p->value;
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
