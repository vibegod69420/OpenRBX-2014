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

struct SSAO_Unk3C_74b0
{
	int unk0;
	int unk4;
	int unk8;
	int unkC;
	int unk10;
	int unk14;
	int unk18;
};

// FUNCTION: ROBLOXSTUDIO 0x006974b0
int SSAO::getUnk3C_74b0()
{
	SSAO_Unk3C_74b0* p = *(SSAO_Unk3C_74b0**)((char*)this + 0x3c);
	if (p)
		return p->unk18;
	return 0;
}

struct SSAO_Unk3C_74c0
{
	int unk0;
	int unk4;
	int unk8;
	int unkC;
	int unk10;
	int unk14;
	int unk18;
	int unk1C;
	int unk20;
	int unk24;
	int unk28;
};

// FUNCTION: ROBLOXSTUDIO 0x006974c0
int SSAO::getUnk3C_74c0()
{
	SSAO_Unk3C_74c0* p = *(SSAO_Unk3C_74c0**)((char*)this + 0x3c);
	if (p)
		return p->unk28;
	return 0;
}

struct SSAO_Unk3C_74d0
{
	int unk0;
	int unk4;
	int unk8;
	int unkC;
	int unk10;
	int unk14;
	int unk18;
	int unk1C;
	int unk20;
	int unk24;
	int unk28;
	int unk2C;
	int unk30;
};

// FUNCTION: ROBLOXSTUDIO 0x006974d0
int SSAO::getUnk3C_74d0()
{
	SSAO_Unk3C_74d0* p = *(SSAO_Unk3C_74d0**)((char*)this + 0x3c);
	if (p)
		return p->unk30;
	return 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
