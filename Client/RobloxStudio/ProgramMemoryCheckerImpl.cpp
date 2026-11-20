#include "ProgramMemoryCheckerImpl.h"

#include "decomp.h"



extern unsigned char byte_1300951;
extern unsigned char byte_130097C;
extern unsigned char byte_130097D;

struct ProgramMemoryCheckerByteHelper
{
	unsigned char value;
	ProgramMemoryCheckerByteHelper* Init(unsigned char* p);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbc5f0
void ProgramMemoryCheckerImpl::init()
{
	unsigned char local[4];
	((ProgramMemoryCheckerByteHelper*)&local[3])->Init(&byte_1300951);
	byte_130097C = local[3];
	byte_130097D = ',';
}

extern unsigned char byte_13119ac;
extern unsigned char byte_13111a0;
extern unsigned char byte_13111a1;

// FUNCTION: ROBLOXSTUDIO 0x00dd6310
void ProgramMemoryCheckerImpl::init2()
{
	unsigned char local[4];
	((ProgramMemoryCheckerByteHelper*)&local[3])->Init(&byte_13119ac);
	byte_13111a0 = local[3];
	byte_13111a1 = ',';
}

class ProgramMemoryCheckerTarget
{
public:
	void sub_664AF0(int* a, int* b, int* c);
};

// FUNCTION: ROBLOXSTUDIO 0x00d9ea50
void ProgramMemoryCheckerImpl::init3()
{
	int a = 0x00010004;
	int b = 0x013C00D8;
	int c = 0x01080008;
	((ProgramMemoryCheckerTarget*)0x012DD374)->sub_664AF0(&c, &b, &a);
}

// FUNCTION: ROBLOXSTUDIO 0x00d9ea90
void ProgramMemoryCheckerImpl::init4()
{
	int a = 0x40010;
	int b = 0x13c00d8;
	int c = 0x1080008;
	((ProgramMemoryCheckerTarget*)0x12dd384)->sub_664AF0(&c, &b, &a);
}

// FUNCTION: ROBLOXSTUDIO 0x00d9ead0
void ProgramMemoryCheckerImpl::init5()
{
	int a = 0x00020004;
	int b = 0x00BC01F8;
	int c = 0x00440108;
	((ProgramMemoryCheckerTarget*)0x012DD314)->sub_664AF0(&c, &b, &a);
}

// FUNCTION: ROBLOXSTUDIO 0x00d9eb10
void ProgramMemoryCheckerImpl::init6()
{
	int a = 0x00080010;
	int b = 0x00BC01F8;
	int c = 0x00440108;
	((ProgramMemoryCheckerTarget*)0x012DD324)->sub_664AF0(&c, &b, &a);
}

// FUNCTION: ROBLOXSTUDIO 0x00d9eb50
void ProgramMemoryCheckerImpl::init7()
{
    int a = 0x10004;
    int b = 0x4401f8;
    int c = 0x80108;
    ((ProgramMemoryCheckerTarget*)0x12dd2f4)->sub_664AF0(&c, &b, &a);
}

// FUNCTION: ROBLOXSTUDIO 0x00d9eb90
void ProgramMemoryCheckerImpl::init8()
{
	int a = 0x40010;
	int b = 0x4401f8;
	int c = 0x80108;
	((ProgramMemoryCheckerTarget*)0x12dd304)->sub_664AF0(&c, &b, &a);
}

// FUNCTION: ROBLOXSTUDIO 0x00d9ebd0
void ProgramMemoryCheckerImpl::init9()
{
	int a = 0x40004;
	int b = 0xf800f8;
	int c = 0x80008;
	((ProgramMemoryCheckerTarget*)0x12dd2d4)->sub_664AF0(&c, &b, &a);
}

// FUNCTION: ROBLOXSTUDIO 0x00d9ec10
void ProgramMemoryCheckerImpl::init10()
{
	int a = 0x00100010;
	int b = 0x00f800f8;
	int c = 0x00080008;
	((ProgramMemoryCheckerTarget*)0x012DD2E4)->sub_664AF0(&c, &b, &a);
}

// FUNCTION: ROBLOXSTUDIO 0x00d9ecd0
void ProgramMemoryCheckerImpl::init11()
{
	int a = 0x20002;
	int b = 0x1f801f8;
	int c = 0x180014c;
	((ProgramMemoryCheckerTarget*)0x12dd354)->sub_664AF0(&c, &b, &a);
}

// FUNCTION: ROBLOXSTUDIO 0x00d9ed10
void ProgramMemoryCheckerImpl::init12()
{
	int a = 0x80008;
	int b = 0x1f801f8;
	int c = 0x180014c;
	((ProgramMemoryCheckerTarget*)0x12dd364)->sub_664AF0(&c, &b, &a);
}

// FUNCTION: ROBLOXSTUDIO 0x00d9edd0
void ProgramMemoryCheckerImpl::init13()
{
	int a = 0x00020004;
	int b = 0x01f800f8;
	int c = 0x014c0008;
	((ProgramMemoryCheckerTarget*)0x012DD334)->sub_664AF0(&c, &b, &a);
}

class ProgramMemoryCheckerShutdownTarget
{
public:
	void sub_8325C0(const char* name, int a, int b, int c, int d);
};

int __cdecl sub_CF6609(void*);

// FUNCTION: ROBLOXSTUDIO 0x00dae4a0
void ProgramMemoryCheckerImpl::init14()
{
	int flag[2];
	((ProgramMemoryCheckerShutdownTarget*)0x012F8C50)->sub_8325C0(
		"RequestShutdown", 0xCD0, 5, (*(unsigned char*)&flag[0] = 0, flag[0]), 0);
	sub_CF6609((void*)0x00DE9FB0);
}

class ProgramMemoryCheckerSignalTarget
{
public:
	void sub_7AEB60(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00da3370
void ProgramMemoryCheckerImpl::init15()
{
	int v[2];
	((ProgramMemoryCheckerSignalTarget*)0x012E1F84)->sub_7AEB60(
		0x60,
		(const char*)0x00E5546C,
		(const char*)0x00E55460,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE36A0);
}

// FUNCTION: ROBLOXSTUDIO 0x00da3ef0
void ProgramMemoryCheckerImpl::init16()
{
	int v[2];
	((ProgramMemoryCheckerSignalTarget*)0x012E3298)->sub_7AEB60(
		0x70,
		(const char*)0x00E567B8,
		(const char*)0x00E567AC,
		2,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE4220);
}

class ProgramMemoryCheckerFullscreenTarget
{
public:
	void sub_8BACA0(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00db4350
void ProgramMemoryCheckerImpl::init17()
{
	int v[2];
	((ProgramMemoryCheckerFullscreenTarget*)0x012FC8CC)->sub_8BACA0(
		0x68,
		(const char*)0x00E6D8F8,
		(const char*)0x00E6D8E8,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEE8B0);
}

// FUNCTION: ROBLOXSTUDIO 0x00db4390
void ProgramMemoryCheckerImpl::init18()
{
	int v[2];
	((ProgramMemoryCheckerFullscreenTarget*)0x012FC8A0)->sub_8BACA0(
		0x6c,
		(const char*)0x00E6D8D4,
		(const char*)0x00E6D8C4,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEE910);
}

class ProgramMemoryCheckerValueTarget
{
public:
	void sub_9C4FC0(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc17c0
void ProgramMemoryCheckerImpl::init19()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget*)0x01304BB4)->sub_9C4FC0(
		0x70,
		(const char*)0x00E5546C,
		(const char*)0x01024D64,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF91E0);
}

class ProgramMemoryCheckerValueTarget2
{
public:
	void sub_9C5300(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1840
void ProgramMemoryCheckerImpl::init20()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget2*)0x013047CC)->sub_9C5300(
		0x68,
		(const char*)0x00E5546C,
		(const char*)0x01024D64,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF92A0);
}

class ProgramMemoryCheckerValueTarget3
{
public:
	void sub_9C54A0(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1880
void ProgramMemoryCheckerImpl::init21()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget3*)0x0130487C)->sub_9C54A0(
		0x70,
		(const char*)0x00E5546C,
		(const char*)0x01024D64,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF9300);
}

class ProgramMemoryCheckerValueTarget4
{
public:
	void sub_9C5640(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc18c0
void ProgramMemoryCheckerImpl::init22()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget4*)0x01304AAC)->sub_9C5640(
		0x68,
		(const char*)0x00E5546C,
		(const char*)0x01024D64,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF9360);
}

class ProgramMemoryCheckerValueTarget5
{
public:
	void sub_9C57E0(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1900
void ProgramMemoryCheckerImpl::init23()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget5*)0x01304A50)->sub_9C57E0(
		0x70,
		(const char*)0x00E5546C,
		(const char*)0x01024D64,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF93C0);
}

class ProgramMemoryCheckerValueTarget6
{
public:
	void sub_9C5CC0(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc19c0
void ProgramMemoryCheckerImpl::init24()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget6*)0x01304918)->sub_9C5CC0(
		0x70,
		(const char*)0x00E5546C,
		(const char*)0x01024D64,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF94E0);
}

class ProgramMemoryCheckerValueTarget7
{
public:
	void sub_9C5E60(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1a00
void ProgramMemoryCheckerImpl::init25()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget7*)0x01304824)->sub_9C5E60(
		0x68,
		(const char*)0x00E5546C,
		(const char*)0x01024D64,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF9540);
}

class ProgramMemoryCheckerItemAddedTarget
{
public:
	void sub_A61DB0(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc7a80
void ProgramMemoryCheckerImpl::init26()
{
	int v[2];
	((ProgramMemoryCheckerItemAddedTarget*)0x013081D0)->sub_A61DB0(
		0x68,
		(const char*)0x00EAC4F4,
		(const char*)0x01018974,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFD910);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc7ac0
void ProgramMemoryCheckerImpl::init27()
{
	int v[2];
	((ProgramMemoryCheckerItemAddedTarget*)0x013081FC)->sub_A61DB0(
		0x6c,
		(const char*)0x00EAC500,
		(const char*)0x01018974,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFD970);
}

class ProgramMemoryCheckerEventConnectedTarget
{
public:
	void sub_A62DA0(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc7b40
void ProgramMemoryCheckerImpl::init28()
{
	int v[2];
	((ProgramMemoryCheckerEventConnectedTarget*)0x013082C0)->sub_A62DA0(
		0x78,
		(const char*)0x00EAC768,
		(const char*)0x00E4E724,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFDA80);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc7b80
void ProgramMemoryCheckerImpl::init29()
{
	int v[2];
	((ProgramMemoryCheckerEventConnectedTarget*)0x013082EC)->sub_A62DA0(
		0x7C,
		(const char*)0x00EAC778,
		(const char*)0x00E4E724,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFDAE0);
}

class ProgramMemoryCheckerSourceValueTarget
{
public:
	void sub_A62CD0(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc7bc0
void ProgramMemoryCheckerImpl::init30()
{
	int v[2];
	((ProgramMemoryCheckerSourceValueTarget*)0x01308264)->sub_A62CD0(
		0x74,
		(const char*)0x00EAC744,
		(const char*)0x00EAC738,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFDB40);
}

class ProgramMemoryCheckerReceiverTarget
{
public:
	void sub_B0EBA0(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd0db0
void ProgramMemoryCheckerImpl::init31()
{
	int v[2];
	((ProgramMemoryCheckerReceiverTarget*)0x0130DA40)->sub_B0EBA0(
		0x70,
		(const char*)0x00EC3870,
		(const char*)0x00EC3864,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E053A0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dd0df0
void ProgramMemoryCheckerImpl::init32()
{
	int v[2];
	((ProgramMemoryCheckerReceiverTarget*)0x0130DA6C)->sub_B0EBA0(
		0x74,
		(const char*)0x00EC3884,
		(const char*)0x00EC3864,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E05400);
}

class ProgramMemoryCheckerMouseTarget
{
public:
	void sub_B1AF80(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd15e0
void ProgramMemoryCheckerImpl::init33()
{
	int v[2];
	((ProgramMemoryCheckerMouseTarget*)0x0130DF04)->sub_B1AF80(
		0x68,
		(const char*)0x00E7E338,
		(const char*)0x00E7E330,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E05DB0);
}

class ProgramMemoryCheckerToolEquippedTarget
{
public:
	void sub_B2C640(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd1f50
void ProgramMemoryCheckerImpl::init34()
{
	int v[2];
	((ProgramMemoryCheckerToolEquippedTarget*)0x0130E5B4)->sub_B2C640(
		0x6c,
		(const char*)0x00EC7134,
		(const char*)0x00EC7124,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E06A40);
}

// FUNCTION: ROBLOXSTUDIO 0x00dd1f90
void ProgramMemoryCheckerImpl::init35()
{
	int v[2];
	((ProgramMemoryCheckerToolEquippedTarget*)0x0130E610)->sub_B2C640(
		0x70,
		(const char*)0x00EC7158,
		(const char*)0x00EC7148,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E06AA0);
}

class ProgramMemoryCheckerLoginFailedTarget
{
public:
	void sub_B35800(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd2560
void ProgramMemoryCheckerImpl::init36()
{
	int v[2];
	((ProgramMemoryCheckerLoginFailedTarget*)0x0130EA7C)->sub_B35800(
		0x6C,
		(const char*)0x00EC7864,
		(const char*)0x00EC7858,
		6,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E070D0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dd25a0
void ProgramMemoryCheckerImpl::init37()
{
	int v[2];
	((ProgramMemoryCheckerLoginFailedTarget*)0x0130EA50)->sub_B35800(
		0x68,
		(const char*)0x00EC7848,
		(const char*)0x00EC783C,
		6,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E07130);
}

class ProgramMemoryCheckerValueTarget8
{
public:
	void sub_9C5D90(int, const char*, const char*, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1c60
void ProgramMemoryCheckerImpl::init38()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget8*)0x01304504)->sub_9C5D90(
		0x68,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x01304824);
	sub_CF6609((void*)0x00DF96C0);
}

class ProgramMemoryCheckerValueTarget9
{
public:
	void sub_9C5570(int, const char*, const char*, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1ca0
void ProgramMemoryCheckerImpl::init39()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget9*)0x01304690)->sub_9C5570(
		0x68,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x01304AAC);
	sub_CF6609((void*)0x00DF9720);
}

class ProgramMemoryCheckerValueTarget10
{
public:
	void sub_9C53D0(int, const char*, const char*, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1da0
void ProgramMemoryCheckerImpl::init40()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget10*)0x01304530)->sub_9C53D0(
		0x70,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x0130487C);
	sub_CF6609((void*)0x00DF98A0);
}

class ProgramMemoryCheckerValueTarget11
{
public:
	void sub_9C4EF0(int, const char*, const char*, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1de0
void ProgramMemoryCheckerImpl::init41()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget11*)0x013046BC)->sub_9C4EF0(
		0x70,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x01304BB4);
	sub_CF6609((void*)0x00DF9900);
}

class ProgramMemoryCheckerValueTarget12
{
public:
	void sub_9C5230(int a1, const char* a2, const char* a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1e20
void ProgramMemoryCheckerImpl::init42()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget12*)0x013044D8)->sub_9C5230(
		0x68,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x013047CC);
	sub_CF6609((void*)0x00DF9960);
}

class ProgramMemoryCheckerValueTarget13
{
public:
	void sub_9C5710(int, const char*, const char*, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1d20
void ProgramMemoryCheckerImpl::init43()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget13*)0x01304664)->sub_9C5710(
		0x70,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x01304A50);
	sub_CF6609((void*)0x00DF97E0);
}

class ProgramMemoryCheckerValueTarget14
{
public:
	void sub_9C60D0(int, const char*, const char*, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1ea0
void ProgramMemoryCheckerImpl::init44()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget14*)0x013045B4)->sub_9C60D0(
		0x7C,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x01304588);
	sub_CF6609((void*)0x00DF9A20);
}

class ProgramMemoryCheckerValueTarget15
{
public:
	void sub_9C5BF0(int, const char*, const char*, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1f20
void ProgramMemoryCheckerImpl::init45()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget15*)0x013045E0)->sub_9C5BF0(
		0x70,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x01304918);
	sub_CF6609((void*)0x00DF9AE0);
}

class ProgramMemoryCheckerBreakpointTarget
{
public:
	void sub_79DC20(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00da2050
void ProgramMemoryCheckerImpl::init46()
{
	int v[2];
	((ProgramMemoryCheckerBreakpointTarget*)0x012E154C)->sub_79DC20(
		0x158,
		(const char*)0x00E530E8,
		(const char*)0x00E530DC,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE22F0);
}

class ProgramMemoryCheckerValueTarget16
{
public:
	void sub_9C5F30(int, const char*, const char*, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1ee0
void ProgramMemoryCheckerImpl::init47()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget16*)0x01304770)->sub_9C5F30(
		0x6C,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x01304744);
	sub_CF6609((void*)0x00DF9A80);
}

// FUNCTION: ROBLOXSTUDIO 0x00da2090
void ProgramMemoryCheckerImpl::init48()
{
	int v[2];
	((ProgramMemoryCheckerBreakpointTarget*)0x012E1578)->sub_79DC20(
		0x15C,
		(const char*)0x00E530F8,
		(const char*)0x00E530DC,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE2350);
}

class ProgramMemoryCheckerEncounteredBreakTarget
{
public:
	void sub_79DB50(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00da2150
void ProgramMemoryCheckerImpl::init49()
{
	int v[2];
	((ProgramMemoryCheckerEncounteredBreakTarget*)0x012E14F4)->sub_79DB50(
		0x150,
		(const char*)0x00E5307C,
		(const char*)0x00E52DF8,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE2470);
}

// FUNCTION: ROBLOXSTUDIO 0x00da2210
void ProgramMemoryCheckerImpl::init50()
{
	int v[2];
	((ProgramMemoryCheckerBreakpointTarget*)0x012E15D0)->sub_79DC20(
		0x164,
		(const char*)0x00E53118,
		(const char*)0x00E52E68,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE2590);
}

class ProgramMemoryCheckerDebuggerAddedTarget
{
public:
	void sub_79DA80(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00da20d0
void ProgramMemoryCheckerImpl::init51()
{
	int v[2];
	((ProgramMemoryCheckerDebuggerAddedTarget*)0x012E0F7C)->sub_79DA80(
		0xC0,
		(const char*)0x00E52DC0,
		(const char*)0x01033AC4,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE23B0);
}

class ProgramMemoryCheckerInputTarget
{
public:
	void sub_868990(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00daf020
void ProgramMemoryCheckerImpl::init52()
{
	int v[2];
	((ProgramMemoryCheckerInputTarget*)0x012F9E8C)->sub_868990(
		0xDC,
		(const char*)0x00E62780,
		(const char*)0x00E6275C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEACB0);
}

class ProgramMemoryCheckerServiceAddedTarget
{
public:
	void sub_89BC70(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00db2f60
void ProgramMemoryCheckerImpl::init53()
{
	int v[2];
	((ProgramMemoryCheckerServiceAddedTarget*)0x012FBC90)->sub_89BC70(
		0x80,
		(const char*)0x00E69798,
		(const char*)0x00E69738,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DED6A0);
}

class ProgramMemoryCheckerHeartbeatTarget
{
public:
	void sub_8C2AD0(int a1, const char* a2, const char* a3, int a4, int a5, int a6);
};

// FUNCTION: ROBLOXSTUDIO 0x00db5d10
void ProgramMemoryCheckerImpl::init54()
{
	int v[2];
	((ProgramMemoryCheckerHeartbeatTarget*)0x012FCE78)->sub_8C2AD0(
		0xB4,
		(const char*)0x00E60BC0,
		(const char*)0x00E6F404,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEFB40);
}

// FUNCTION: ROBLOXSTUDIO 0x00da2110
void ProgramMemoryCheckerImpl::init55()
{
	int v[2];
	((ProgramMemoryCheckerDebuggerAddedTarget*)0x012E1098)->sub_79DA80(
		0xC4,
		(const char*)0x00E52DD0,
		(const char*)0x01033AC4,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE2410);
}

// FUNCTION: ROBLOXSTUDIO 0x00daefe0
void ProgramMemoryCheckerImpl::init56()
{
	int v[2];
	((ProgramMemoryCheckerInputTarget*)0x012F9E34)->sub_868990(
		0xD4,
		(const char*)0x00E62764,
		(const char*)0x00E6275C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEAC50);
}

// FUNCTION: ROBLOXSTUDIO 0x00daf060
void ProgramMemoryCheckerImpl::init57()
{
	int v[2];
	((ProgramMemoryCheckerInputTarget*)0x012F9E60)->sub_868990(
		0xD8,
		(const char*)0x00E62770,
		(const char*)0x00E6275C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEAD10);
}

class ProgramMemoryCheckerFocusLostTarget
{
public:
	void sub_880120(int a1, const char* a2, const char* a3, int a4, int a5, int a6);
};

// FUNCTION: ROBLOXSTUDIO 0x00db0bb0
void ProgramMemoryCheckerImpl::init58()
{
	int v[2];
	((ProgramMemoryCheckerFocusLostTarget*)0x012FAB94)->sub_880120(
		0x340,
		(const char*)0x00E65060,
		(const char*)0x00E65050,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEC110);
}

class ProgramMemoryCheckerLightingChangedTarget
{
public:
	void sub_96F4F0(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbd590
void ProgramMemoryCheckerImpl::init59()
{
	int v[2];
	((ProgramMemoryCheckerLightingChangedTarget*)0x01301254)->sub_96F4F0(
		0x1E8,
		(const char*)0x00E875A4,
		(const char*)0x00E87594,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF5150);
}

class ProgramMemoryCheckerValueTarget17
{
public:
	void sub_9C5980(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1940
void ProgramMemoryCheckerImpl::init60()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget17*)0x013049F8)->sub_9C5980(
		0x94,
		(const char*)0x00E5546C,
		(const char*)0x01024D64,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF9420);
}

class ProgramMemoryCheckerErrorCallbackTarget
{
public:
	void sub_8EB760(const char* a1, int a2, const char* a3, int a4, int a5, int a6);
};

// FUNCTION: ROBLOXSTUDIO 0x00db6a40
void ProgramMemoryCheckerImpl::init61()
{
	int v[2];
	((ProgramMemoryCheckerErrorCallbackTarget*)0x012FD588)->sub_8EB760(
		(const char*)0x00E73938,
		0xB0,
		(const char*)0x00E5DFD8,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF0890);
}

class ProgramMemoryCheckerValueTarget18
{
public:
	void sub_9C5B20(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1980
void ProgramMemoryCheckerImpl::init62()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget18*)0x01304970)->sub_9C5B20(
		0x80,
		(const char*)0x00E5546C,
		(const char*)0x01024D64,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF9480);
}

class ProgramMemoryCheckerMouseEquippedTarget
{
public:
	void sub_922750(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dba840
void ProgramMemoryCheckerImpl::init63()
{
	int v[2];
	((ProgramMemoryCheckerMouseEquippedTarget*)0x012FF590)->sub_922750(
		0x22C,
		(const char*)0x00E7E338,
		(const char*)0x00E7E330,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF3280);
}

class ProgramMemoryCheckerKeyDownTarget
{
public:
	void sub_B0A560(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd0730
void ProgramMemoryCheckerImpl::init64()
{
	int v[2];
	((ProgramMemoryCheckerKeyDownTarget*)0x0130D570)->sub_B0A560(
		0x84,
		(const char*)0x00EC2578,
		(const char*)0x00E83694,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E04FF0);
}

class ProgramMemoryCheckerMouseSelectedTarget
{
public:
	void sub_927DB0(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbac60
void ProgramMemoryCheckerImpl::init65()
{
	int v[2];
	((ProgramMemoryCheckerMouseSelectedTarget*)0x012FF6F4)->sub_927DB0(
		0x1A8,
		(const char*)0x00E63184,
		(const char*)0x00E7E330,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF3520);
}

class ProgramMemoryCheckerTextboxReleasedTarget
{
public:
	void sub_973E90(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbde30
void ProgramMemoryCheckerImpl::init66()
{
	int v[2];
	((ProgramMemoryCheckerTextboxReleasedTarget*)0x01301AB8)->sub_973E90(
		0x360,
		(const char*)0x00E87E44,
		(const char*)0x00E87E34,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF5A30);
}

class ProgramMemoryCheckerKeyframeReachedTarget
{
public:
	void sub_B1D040(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd1960
void ProgramMemoryCheckerImpl::init67()
{
	int v[2];
	((ProgramMemoryCheckerKeyframeReachedTarget*)0x0130E1B8)->sub_B1D040(
		0x84,
		(const char*)0x00EC60A0,
		(const char*)0x00EC6090,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E06210);
}

class ProgramMemoryCheckerPlayerRemovingTarget
{
public:
	void sub_C255C0(int a1, const char* a2, const char* a3, int a4, int a5, int a6);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd4370
void ProgramMemoryCheckerImpl::init68()
{
	int v[2];
	((ProgramMemoryCheckerPlayerRemovingTarget*)0x0131064C)->sub_C255C0(
		0x1A0,
		(const char*)0x00EEEC8C,
		(const char*)0x00E73878,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E09160);
}

class ProgramMemoryCheckerValueTarget19
{
public:
	void sub_9C5160(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1800
void ProgramMemoryCheckerImpl::init69()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget19*)0x01304CBC)->sub_9C5160(
		0x80,
		(const char*)0x00E5546C,
		(const char*)0x01024D64,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF9240);
}

// FUNCTION: ROBLOXSTUDIO 0x00dd0770
void ProgramMemoryCheckerImpl::init70()
{
	int v[2];
	((ProgramMemoryCheckerKeyDownTarget*)0x0130D5C8)->sub_B0A560(
		0x88,
		(const char*)0x00EC2588,
		(const char*)0x00E83694,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E05050);
}

class ProgramMemoryCheckerActionButtonTarget
{
public:
	void sub_B2C240(int a1, const char* a2, const char* a3, int a4, int a5, int a6);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd2070
void ProgramMemoryCheckerImpl::init71()
{
	int v[2];
	((ProgramMemoryCheckerActionButtonTarget*)0x0130E8E8)->sub_B2C240(
		0x80,
		(const char*)0x00EC73C4,
		(const char*)0x00EC71A8,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E06BC0);
}

class ProgramMemoryCheckerGameAnnounceTarget
{
public:
	void sub_C25310(int a1, const char* a2, const char* a3, int a4, int a5, int a6);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd42b0
void ProgramMemoryCheckerImpl::init72()
{
	int v[2];
	((ProgramMemoryCheckerGameAnnounceTarget*)0x0130FFE0)->sub_C25310(
		0x1BC,
		(const char*)0x00EEEB0C,
		(const char*)0x00E5DFD8,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E09040);
}

// FUNCTION: ROBLOXSTUDIO 0x00dd42f0
void ProgramMemoryCheckerImpl::init73()
{
	int v[2];
	((ProgramMemoryCheckerPlayerRemovingTarget*)0x0131024C)->sub_C255C0(
		0x19C,
		(const char*)0x00EEEC80,
		(const char*)0x00E73878,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E090A0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dd4330
void ProgramMemoryCheckerImpl::init74()
{
	int v[2];
	((ProgramMemoryCheckerPlayerRemovingTarget*)0x01310440)->sub_C255C0(
		0x198,
		(const char*)0x00EEEC6C,
		(const char*)0x00E73878,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E09100);
}

// FUNCTION: ROBLOXSTUDIO 0x00dd43b0
void ProgramMemoryCheckerImpl::init75()
{
	int v[2];
	((ProgramMemoryCheckerPlayerRemovingTarget*)0x01310220)->sub_C255C0(
		0x1A4,
		(const char*)0x00EEEC9C,
		(const char*)0x00E73878,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E091C0);
}

class ProgramMemoryCheckerCharacterAddedTarget
{
public:
	void sub_C40670(int a1, const char* a2, const char* a3, int a4, int a5, int a6);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5410
void ProgramMemoryCheckerImpl::init76()
{
	int v[2];
	((ProgramMemoryCheckerCharacterAddedTarget*)0x0131185C)->sub_C40670(
		0x1B0,
		(const char*)0x00EF0870,
		(const char*)0x00E9688C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0A7D0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dd5450
void ProgramMemoryCheckerImpl::init77()
{
	int v[2];
	((ProgramMemoryCheckerCharacterAddedTarget*)0x01311E68)->sub_C40670(
		0x1B4,
		(const char*)0x00EF0880,
		(const char*)0x00E9688C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0A830);
}

class ProgramMemoryCheckerConnectionRejectedTarget
{
public:
	void sub_C94C30(int, const char*, const char*, int, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd98a0
void ProgramMemoryCheckerImpl::init78()
{
	int v[2];
	((ProgramMemoryCheckerConnectionRejectedTarget*)0x01313E58)->sub_C94C30(
		0xB0C,
		(const char*)0x00EFA264,
		(const char*)0x00EF7600,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0DCB0);
}

class ProgramMemoryCheckerDeletingItemTarget
{
public:
	void sub_CAF380(const char* a1, int a2, const char* a3, int a4, int a5, int a6);
};

// FUNCTION: ROBLOXSTUDIO 0x00dda560
void ProgramMemoryCheckerImpl::init79()
{
	int v[2];
	((ProgramMemoryCheckerDeletingItemTarget*)0x01314678)->sub_CAF380(
		(const char*)0x00EFE218,
		0x4720,
		(const char*)0x00EFE208,
		2,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0E970);
}

class ProgramMemoryCheckerValueTarget20
{
public:
	void sub_9C58B0(int, const char*, const char*, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1ce0
void ProgramMemoryCheckerImpl::init80()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget20*)0x01304638)->sub_9C58B0(
		0x94,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x013049F8);
	sub_CF6609((void*)0x00DF9780);
}

class ProgramMemoryCheckerValueTarget21
{
public:
	void sub_9C5090(int, const char*, const char*, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1d60
void ProgramMemoryCheckerImpl::init81()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget21*)0x013046E8)->sub_9C5090(
		0x80,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x01304CBC);
	sub_CF6609((void*)0x00DF9840);
}

class ProgramMemoryCheckerValueTarget22
{
public:
	void sub_9C5A50(int, const char*, const char*, int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1e60
void ProgramMemoryCheckerImpl::init82()
{
	int v[2];
	((ProgramMemoryCheckerValueTarget22*)0x0130460C)->sub_9C5A50(
		0x80,
		(const char*)0x00E94F18,
		(const char*)0x01024D64,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x01304970);
	sub_CF6609((void*)0x00DF99C0);
}

class ProgramMemoryCheckerKeyDownTargetEx
{
public:
	void sub_B0A490(int a1, const char* a2, const char* a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd0490
void ProgramMemoryCheckerImpl::init83()
{
	int v[2];
	((ProgramMemoryCheckerKeyDownTargetEx*)0x0130D59C)->sub_B0A490(
		0x84,
		(const char*)0x00EC2580,
		(const char*)0x00E83694,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x0130D570);
	sub_CF6609((void*)0x00E04D50);
}

class ProgramMemoryCheckerInit84Target
{
public:
	void sub_664BF0(int* a1, int* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00d9ed50
void ProgramMemoryCheckerImpl::init84()
{
	int v[2];
	v[1] = 0x016201F8;
	v[0] = 0x00CC0122;
	((ProgramMemoryCheckerInit84Target*)0x012DD3A4)->sub_664BF0(&v[0], &v[1], 2, 1, 1);
	sub_CF6609((void*)0x00DE0290);
}

// FUNCTION: ROBLOXSTUDIO 0x00d9ed90
void ProgramMemoryCheckerImpl::init85()
{
	int v[2];
	v[1] = 0x016201F8;
	v[0] = 0x00CC0122;
	((ProgramMemoryCheckerInit84Target*)0x012DD3AC)->sub_664BF0(&v[0], &v[1], 2, 4, 1);
	sub_CF6609((void*)0x00DE02A0);
}

class ProgramMemoryCheckerSetEnabledTarget
{
public:
	void sub_78AA20(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da1570
void ProgramMemoryCheckerImpl::init86()
{
	int v[2];
	((ProgramMemoryCheckerSetEnabledTarget*)0x012E0808)->sub_78AA20(
		0x007915A0,
		0,
		(const char*)0x00E50280,
		(const char*)0x00E50278,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE1CE0);
}

// FUNCTION: ROBLOXSTUDIO 0x00da15b0
void ProgramMemoryCheckerImpl::init87()
{
	int v[2];
	((ProgramMemoryCheckerSetEnabledTarget*)0x012E0840)->sub_78AA20(
		0x00790DD0,
		0,
		(const char*)0x00E50298,
		(const char*)0x01016EB0,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE1D50);
}

class ProgramMemoryCheckerAddDebuggerTarget
{
public:
	void sub_79D2B0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da2250
void ProgramMemoryCheckerImpl::init88()
{
	int v[2];
	((ProgramMemoryCheckerAddDebuggerTarget*)0x012E0EE8)->sub_79D2B0(
		0x007A1550,
		0,
		(const char*)0x00E52CE0,
		(const char*)0x01032EB8,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE25F0);
}

class ProgramMemoryCheckerAddWatchTarget
{
public:
	void sub_79D570(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da2290
void ProgramMemoryCheckerImpl::init89()
{
	int v[2];
	((ProgramMemoryCheckerAddWatchTarget*)0x012E1158)->sub_79D570(
		0x007A18B0,
		0,
		(const char*)0x00E52E44,
		(const char*)0x00E52E38,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE26C0);
}

class ProgramMemoryCheckerGetWatchValueTarget
{
public:
	void sub_79D640(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da2650
void ProgramMemoryCheckerImpl::init90()
{
	int v[2];
	((ProgramMemoryCheckerGetWatchValueTarget*)0x012E11C0)->sub_79D640(
		0x007A5250,
		0,
		(const char*)0x00E52E70,
		(const char*)0x00E52E68,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE2A90);
}

class ProgramMemoryCheckerSetBreakpointTarget
{
public:
	void sub_79D4A0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da2810
void ProgramMemoryCheckerImpl::init91()
{
	int v[2];
	((ProgramMemoryCheckerSetBreakpointTarget*)0x012E10F0)->sub_79D4A0(
		0x007AA4D0,
		0,
		(const char*)0x00E52E00,
		(const char*)0x00E52DF8,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE2C80);
}

class ProgramMemoryCheckerAncestryChangedTarget
{
public:
	void sub_7AEC40(int a1, const char* a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da3230
void ProgramMemoryCheckerImpl::init92()
{
	int v[2];
	((ProgramMemoryCheckerAncestryChangedTarget*)0x012E1F58)->sub_7AEC40(
		0x5C,
		(const char*)0x00E55430,
		(const char*)0x00E553B4,
		(const char*)0x00E55428,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE34C0);
}

class ProgramMemoryCheckerChildRemovedTarget
{
public:
	void sub_7AEE80(int a1, const char* a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da32b0
void ProgramMemoryCheckerImpl::init93()
{
	int v[2];
	((ProgramMemoryCheckerChildRemovedTarget*)0x012E1EC8)->sub_7AEE80(
		0x004A4BA0,
		0,
		(const char*)0x00E553D4,
		(const char*)0x00E553B4,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE3580);
}

// FUNCTION: ROBLOXSTUDIO 0x00da3330
void ProgramMemoryCheckerImpl::init94()
{
	int v[2];
	((ProgramMemoryCheckerChildRemovedTarget*)0x012E1F28)->sub_7AEE80(
		0x517200,
		0,
		(const char*)0x00E553F4,
		(const char*)0x00E552B4,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE3640);
}

class ProgramMemoryCheckerWaitForChildTarget
{
public:
	void sub_7AE9F0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da3710
void ProgramMemoryCheckerImpl::init95()
{
	int v[2];
	((ProgramMemoryCheckerWaitForChildTarget*)0x012E1DA8)->sub_7AE9F0(
		0x7b6970,
		0,
		(const char*)0x00E5536C,
		(const char*)0x00E55360,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE3AD0);
}

class ProgramMemoryCheckerIsATarget
{
public:
	void sub_7AE850(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da39d0
void ProgramMemoryCheckerImpl::init96()
{
	int v[2];
	((ProgramMemoryCheckerIsATarget*)0x012E1980)->sub_7AE850(
		0x007B3DD0,
		0x1C,
		(const char*)0x00E551A8,
		(const char*)0x00E5519C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE3D60);
}

// FUNCTION: ROBLOXSTUDIO 0x00da3a10
void ProgramMemoryCheckerImpl::init97()
{
	int v[2];
	((ProgramMemoryCheckerIsATarget*)0x012E19B8)->sub_7AE850(
		0x007B3DD0,
		0x1C,
		(const char*)0x00E551AC,
		(const char*)0x00E5519C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE3E10);
}

class ProgramMemoryCheckerIsAncestorOfTarget
{
public:
	void sub_7AE920(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da3a50
void ProgramMemoryCheckerImpl::init98()
{
	int v[2];
	((ProgramMemoryCheckerIsAncestorOfTarget*)0x012E1CE0)->sub_7AE920(
		0x007B3E30,
		0,
		(const char*)0x00E552C0,
		(const char*)0x00E552B4,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE3EC0);
}

// FUNCTION: ROBLOXSTUDIO 0x00da3a90
void ProgramMemoryCheckerImpl::init99()
{
	int v[2];
	((ProgramMemoryCheckerIsAncestorOfTarget*)0x012E1C70)->sub_7AE920(
		0x007B3EC0,
		0,
		(const char*)0x00E55294,
		(const char*)0x00E55288,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE3F90);
}

class ProgramMemoryCheckerInterpolationFinishedTarget
{
public:
	void sub_7B9750(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00da3eb0
void ProgramMemoryCheckerImpl::init100()
{
	int v[2];
	((ProgramMemoryCheckerInterpolationFinishedTarget*)0x012E3084)->sub_7B9750(
		0x6C,
		(const char*)0x00E56774,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x012E3084 = 0x00E56758;
	sub_CF6609((void*)0x00DE41C0);
}

class ProgramMemoryCheckerPanUnitsTarget
{
public:
	void sub_7B8CB0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da4100
void ProgramMemoryCheckerImpl::init101()
{
	int v[2];
	((ProgramMemoryCheckerPanUnitsTarget*)0x012E31E8)->sub_7B8CB0(
		0x007BE410,
		0,
		(const char*)0x00E566F8,
		(const char*)0x00E566F0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE4430);
}

class ProgramMemoryCheckerSetRollTarget
{
public:
	void sub_7B8D80(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da4180
void ProgramMemoryCheckerImpl::init102()
{
	int v[2];
	((ProgramMemoryCheckerSetRollTarget*)0x012E30B0)->sub_7B8D80(
		0x007BF580,
		0,
		(const char*)0x00E56664,
		(const char*)0x00E56658,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE4510);
}

class ProgramMemoryCheckerTiltUnitsTarget
{
public:
	void sub_7B9050(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da41c0
void ProgramMemoryCheckerImpl::init103()
{
	int v[2];
	((ProgramMemoryCheckerTiltUnitsTarget*)0x012E3220)->sub_7B9050(
		0x7C01C0,
		0,
		(const char*)0x00E56710,
		(const char*)0x00E566F0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE4580);
}

class ProgramMemoryCheckerGetFVariableTarget
{
public:
	void sub_7C4D80(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da42a0
void ProgramMemoryCheckerImpl::init104()
{
	int v[2];
	((ProgramMemoryCheckerGetFVariableTarget*)0x012E35B8)->sub_7C4D80(
		0x007C60D0,
		0,
		(const char*)0x00E57B50,
		(const char*)0x01016EB0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE4740);
}

class ProgramMemoryCheckerGetFFlagTarget
{
public:
	void sub_7C4E50(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00da4360
void ProgramMemoryCheckerImpl::init105()
{
	int v[2];
	((ProgramMemoryCheckerGetFFlagTarget*)0x012E3620)->sub_7C4E50(
		0x007C5F40,
		0,
		(const char*)0x00E57B88,
		(const char*)0x01016EB0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE4850);
}

class ProgramMemoryCheckerOnCloseTarget
{
public:
	void sub_842730(const char* a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dad620
void ProgramMemoryCheckerImpl::init106()
{
	int v[2];
	((ProgramMemoryCheckerOnCloseTarget*)0x012F93B8)->sub_842730(
		(const char*)0x00E5E538,
		0xCF0,
		0x0085AD30,
		0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE8FD0);
}

class ProgramMemoryCheckerFinishShutdownTarget
{
public:
	void sub_8434B0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dad7e0
void ProgramMemoryCheckerImpl::init107()
{
	int v[2];
	((ProgramMemoryCheckerFinishShutdownTarget*)0x012F8C80)->sub_8434B0(
		0x0084E510,
		0,
		(const char*)0x00E5DFC8,
		(const char*)0x00E5DFBC,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE9210);
}

class ProgramMemoryCheckerSetMessageTarget
{
public:
	void sub_843190(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dad9a0
void ProgramMemoryCheckerImpl::init108()
{
	int v[2];
	((ProgramMemoryCheckerSetMessageTarget*)0x012F8CB8)->sub_843190(
		0x0085FB20,
		0,
		(const char*)0x00E5DFE0,
		(const char*)0x00E5DFD8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE93A0);
}

class ProgramMemoryCheckerIsGearTypeAllowedTarget
{
public:
	void sub_843580(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dad9e0
void ProgramMemoryCheckerImpl::init109()
{
	int v[2];
	((ProgramMemoryCheckerIsGearTypeAllowedTarget*)0x012F9190)->sub_843580(
		0x00857CB0,
		0,
		(const char*)0x00E5E3C0,
		(const char*)0x00E5E3B4,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE9450);
}

class ProgramMemoryCheckerSetGenreTarget
{
public:
	void sub_8433e0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dadb50
void ProgramMemoryCheckerImpl::init110()
{
	int v[2];
	((ProgramMemoryCheckerSetGenreTarget*)0x012F8F70)->sub_8433e0(
		0x0085F890,
		0,
		(const char*)0x00E5E17C,
		(const char*)0x00E5E174,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE95B0);
}

class ProgramMemoryCheckerHttpTarget
{
public:
	void sub_842AD0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dadc50
void ProgramMemoryCheckerImpl::init111()
{
	int v[2];
	((ProgramMemoryCheckerHttpTarget*)0x012F8770)->sub_842AD0(
		0x00852130,
		0,
		(const char*)0x00E5DCFC,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE9730);
}

class ProgramMemoryCheckerHttpGetAsyncTarget
{
public:
	void sub_843780(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dadeb0
void ProgramMemoryCheckerImpl::init112()
{
	int v[2];
	((ProgramMemoryCheckerHttpGetAsyncTarget*)0x012F89C8)->sub_843780(
		0x00856BD0,
		0,
		(const char*)0x00E5DE08,
		(const char*)0x00E5DCF8,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE9A80);
}

class ProgramMemoryCheckerLoadGameTarget
{
public:
	void sub_842C50(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dae060
void ProgramMemoryCheckerImpl::init113()
{
	int v[2];
	((ProgramMemoryCheckerLoadGameTarget*)0x012F8850)->sub_842C50(
		0x00859100,
		0,
		(const char*)0x00E5DD5C,
		(const char*)0x00E5DD48,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE9CC0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dae460
void ProgramMemoryCheckerImpl::init114()
{
	int v[2];
	((ProgramMemoryCheckerSetMessageTarget*)0x012F9350)->sub_843190(
		0x0085D590,
		0,
		(const char*)0x00E5E510,
		(const char*)0x00E5E4F4,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE9F00);
}

class ProgramMemoryCheckerClearContentTarget
{
public:
	void sub_8434B0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dae4e0
void ProgramMemoryCheckerImpl::init115()
{
	int v[2];
	((ProgramMemoryCheckerClearContentTarget*)0x012F8B30)->sub_8434B0(
		0x0084D880,
		0,
		(const char*)0x00E5DEE8,
		(const char*)0x00E5DED4,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEA040);
}

class ProgramMemoryCheckerSaveTarget
{
public:
	void sub_843260(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dae520
void ProgramMemoryCheckerImpl::init116()
{
	int v[2];
	((ProgramMemoryCheckerSaveTarget*)0x012F88C0)->sub_843260(
		0x0085EB30,
		0,
		(const char*)0x0101D39C,
		(const char*)0x00E5DCF8,
		6,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEA0B0);
}

class ProgramMemoryCheckerSetJobsExtendedStatsWindowTarget
{
public:
	void sub_842EF0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dae740
void ProgramMemoryCheckerImpl::init117()
{
	int v[2];
	((ProgramMemoryCheckerSetJobsExtendedStatsWindowTarget*)0x012F8E20)->sub_842EF0(
		0x0085F8E0,
		0,
		(const char*)0x00E5E0AC,
		(const char*)0x00E5E0A4,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEA390);
}

// FUNCTION: ROBLOXSTUDIO 0x00dae820
void ProgramMemoryCheckerImpl::init118()
{
	int v[2];
	((ProgramMemoryCheckerLoadGameTarget*)0x012F8E58)->sub_842C50(
		0x0085F990,
		0,
		(const char*)0x00E5E0D0,
		(const char*)0x00E5E0C8,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEA500);
}

class ProgramMemoryCheckerSetRemoteBuildModeTarget
{
public:
	void sub_8434B0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dae860
void ProgramMemoryCheckerImpl::init119()
{
	int v[2];
	((ProgramMemoryCheckerSetRemoteBuildModeTarget*)0x012F88F8)->sub_8434B0(
		0x0085FA50,
		0,
		(const char*)0x00E5DD9C,
		(const char*)0x00E5DD88,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEA570);
}

// FUNCTION: ROBLOXSTUDIO 0x00dae8a0
void ProgramMemoryCheckerImpl::init120()
{
	int v[2];
	((ProgramMemoryCheckerSetMessageTarget*)0x012F9220)->sub_843190(
		0x0085FA60,
		0,
		(const char*)0x00E5E460,
		(const char*)0x00E5E458,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEA5E0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dae8e0
void ProgramMemoryCheckerImpl::init121()
{
	int v[2];
	((ProgramMemoryCheckerSetMessageTarget*)0x012F8960)->sub_843190(
		0x0085FAC0,
		0,
		(const char*)0x00E5DDDC,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEA690);
}

// FUNCTION: ROBLOXSTUDIO 0x00dae920
void ProgramMemoryCheckerImpl::init122()
{
	int v[2];
	((ProgramMemoryCheckerSetMessageTarget*)0x012F9258)->sub_843190(
		0x0085FBA0,
		0,
		(const char*)0x00E5E474,
		(const char*)0x00E5E458,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEA740);
}

class ProgramMemoryCheckerSetVerbTarget
{
public:
	void sub_867390(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00daf670
void ProgramMemoryCheckerImpl::init123()
{
	int v[2];
	((ProgramMemoryCheckerSetVerbTarget*)0x012F9FF0)->sub_867390(
		0x00878D20,
		0,
		(const char*)0x00E62FD4,
		(const char*)0x01033C94,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEB3E0);
}

class ProgramMemoryCheckerSelectionSetTarget
{
public:
	void sub_899A70(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00db2da0
void ProgramMemoryCheckerImpl::init124()
{
	int v[2];
	((ProgramMemoryCheckerSelectionSetTarget*)0x012FBAF0)->sub_899A70(
		0x0089B920,
		0,
		(const char*)0x00E69098,
		(const char*)0x00E6908C,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DED250);
}

class ProgramMemoryCheckerGetServiceTarget
{
public:
	void sub_89BBA0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00db2ea0
void ProgramMemoryCheckerImpl::init125()
{
	int v[2];
	((ProgramMemoryCheckerGetServiceTarget*)0x012FBB90)->sub_89BBA0(
		0x0089C500,
		0,
		(const char*)0x00E6972C,
		(const char*)0x00E5519C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DED530);
}

class ProgramMemoryCheckerCloseTarget
{
public:
	void sub_89BD40(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00db2ee0
void ProgramMemoryCheckerImpl::init126()
{
	int v[2];
	((ProgramMemoryCheckerCloseTarget*)0x012FBC38)->sub_89BD40(
		0x78,
		(const char*)0x0100BC7C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x012FBC38 = 0x00E69750;
	sub_CF6609((void*)0x00DED5E0);
}

// FUNCTION: ROBLOXSTUDIO 0x00db2f20
void ProgramMemoryCheckerImpl::init127()
{
	int v[2];
	((ProgramMemoryCheckerCloseTarget*)0x012FBC64)->sub_89BD40(
		0x7C,
		(const char*)0x00E6976C,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x012FBC64 = 0x00E69750;
	sub_CF6609((void*)0x00DED640);
}

class ProgramMemoryCheckerGetTutorialStateTarget
{
public:
	void sub_8BA580(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00db43d0
void ProgramMemoryCheckerImpl::init128()
{
	int v[2];
	((ProgramMemoryCheckerGetTutorialStateTarget*)0x012FC720)->sub_8BA580(
		0x008BBBA0,
		0,
		(const char*)0x00E6D734,
		(const char*)0x00E6D728,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEE970);
}

class ProgramMemoryCheckerAddStarterScriptTarget
{
public:
	void sub_8CD5D0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00db6620
void ProgramMemoryCheckerImpl::init129()
{
	int v[2];
	((ProgramMemoryCheckerAddStarterScriptTarget*)0x012FD090)->sub_8CD5D0(
		0x008D2F90,
		0,
		(const char*)0x00E6FF2C,
		(const char*)0x01004E08,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF03C0);
}

class ProgramMemoryCheckerGetPlayerPlaceInstanceAsyncTarget
{
public:
	void sub_8ED0F0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00db6a80
void ProgramMemoryCheckerImpl::init130()
{
	int v[2];
	((ProgramMemoryCheckerGetPlayerPlaceInstanceAsyncTarget*)0x012FD468)->sub_8ED0F0(
		0x008EE010,
		0,
		(const char*)0x00E73844,
		(const char*)0x00E7383C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF0920);
}

class ProgramMemoryCheckerSetAssetUrlTarget
{
public:
	void sub_8F3F30(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00db6ec0
void ProgramMemoryCheckerImpl::init131()
{
	int v[2];
	((ProgramMemoryCheckerSetAssetUrlTarget*)0x012FD6D0)->sub_8F3F30(
		0x008FA880,
		0,
		(const char*)0x00E742FC,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF0D70);
}

// FUNCTION: ROBLOXSTUDIO 0x00db6f00
void ProgramMemoryCheckerImpl::init132()
{
	int v[2];
	((ProgramMemoryCheckerSetAssetUrlTarget*)0x012FD698)->sub_8F3F30(
		0x008FA880,
		0,
		(const char*)0x00E742B4,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF0E20);
}

class ProgramMemoryCheckerSetCacheSizeTarget
{
public:
	void sub_8F3E60(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00db6f40
void ProgramMemoryCheckerImpl::init133()
{
	int v[2];
	((ProgramMemoryCheckerSetCacheSizeTarget*)0x012FD740)->sub_8F3E60(
		0x008FA9B0,
		0,
		(const char*)0x00E7432C,
		(const char*)0x00E74314,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF0ED0);
}

class ProgramMemoryCheckerSetUploadUrlTarget
{
public:
	void sub_900BF0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00db8b50
void ProgramMemoryCheckerImpl::init134()
{
	int v[2];
	((ProgramMemoryCheckerSetUploadUrlTarget*)0x012FE550)->sub_900BF0(
		0x00AF2A30,
		0,
		(const char*)0x00E75F6C,
		(const char*)0x00E5DCF8,
		6,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF1CA0);
}

class ProgramMemoryCheckerInit135Target
{
public:
	void sub_911930(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00db96a0
void ProgramMemoryCheckerImpl::init135()
{
	int v[2];
	((ProgramMemoryCheckerInit135Target*)0x012FEDD8)->sub_911930(
		0x009131D0,
		0,
		(const char*)0x00E7A734,
		(const char*)0x01024D64,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF24C0);
}

class ProgramMemoryCheckerAddSubPoseTarget
{
public:
	void sub_91C600(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dba1d0
void ProgramMemoryCheckerImpl::init136()
{
	int v[2];
	((ProgramMemoryCheckerAddSubPoseTarget*)0x012FF160)->sub_91C600(
		0x0091FA70,
		0,
		(const char*)0x00E7D514,
		(const char*)0x00E7D50C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF2A20);
}

// FUNCTION: ROBLOXSTUDIO 0x00dba290
void ProgramMemoryCheckerImpl::init137()
{
	int v[2];
	((ProgramMemoryCheckerAddSubPoseTarget*)0x012FF198)->sub_91C600(
		0x00920960,
		0,
		(const char*)0x00E7D520,
		(const char*)0x00E7D50C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF2B50);
}

class ProgramMemoryCheckerAddPoseTarget
{
public:
	void sub_91CE20(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dba3f0
void ProgramMemoryCheckerImpl::init138()
{
	int v[2];
	((ProgramMemoryCheckerAddPoseTarget*)0x012FF288)->sub_91CE20(
		0x0091FA70,
		0,
		(const char*)0x00E7D764,
		(const char*)0x00E7D50C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF2C80);
}

// FUNCTION: ROBLOXSTUDIO 0x00dba4b0
void ProgramMemoryCheckerImpl::init139()
{
	int v[2];
	((ProgramMemoryCheckerAddPoseTarget*)0x012FF2C0)->sub_91CE20(
		0x00920960,
		0,
		(const char*)0x00E7D76C,
		(const char*)0x00E7D50C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF2DB0);
}

class ProgramMemoryCheckerAddKeyframeTarget
{
public:
	void sub_91EA20(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dba580
void ProgramMemoryCheckerImpl::init140()
{
	int v[2];
	((ProgramMemoryCheckerAddKeyframeTarget*)0x012FF358)->sub_91EA20(
		0x0091FA70,
		0,
		(const char*)0x00E7D95C,
		(const char*)0x00E7D950,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF2F60);
}

// FUNCTION: ROBLOXSTUDIO 0x00dba640
void ProgramMemoryCheckerImpl::init141()
{
	int v[2];
	((ProgramMemoryCheckerAddKeyframeTarget*)0x012FF390)->sub_91EA20(
		0x00920960,
		0,
		(const char*)0x00E7D968,
		(const char*)0x00E7D950,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF3090);
}

class ProgramMemoryCheckerInit142Target
{
public:
	void sub_936F60(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbb7c0
void ProgramMemoryCheckerImpl::init142()
{
	int v[2];
	((ProgramMemoryCheckerInit142Target*)0x01300218)->sub_936F60(
		0x00937F10,
		0,
		(const char*)0x00E82078,
		(const char*)0x00E6275C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF3CD0);
}

class ProgramMemoryCheckerInit143Target
{
public:
	void sub_936E90(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbb800
void ProgramMemoryCheckerImpl::init143()
{
	int v[2];
	((ProgramMemoryCheckerInit143Target*)0x01300250)->sub_936E90(
		0x00938030,
		0,
		(const char*)0x00E82090,
		(const char*)0x00E6275C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF3D80);
}

class ProgramMemoryCheckerInit144Target
{
public:
	void sub_936DC0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbb8c0
void ProgramMemoryCheckerImpl::init144()
{
	int v[2];
	((ProgramMemoryCheckerInit144Target*)0x01300288)->sub_936DC0(
		0x00938750,
		0,
		(const char*)0x00E820A8,
		(const char*)0x00E6275C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF3E90);
}

class ProgramMemoryCheckerExclusiveMouseTarget
{
public:
	void sub_93F7A0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbc080
void ProgramMemoryCheckerImpl::init145()
{
	int v[2];
	((ProgramMemoryCheckerExclusiveMouseTarget*)0x01300640)->sub_93F7A0(
		0x00941670,
		0,
		(const char*)0x00E83660,
		(const char*)0x00E83650,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF4360);
}

class ProgramMemoryCheckerCreateToolbarTarget
{
public:
	void sub_93F430(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbc190
void ProgramMemoryCheckerImpl::init146()
{
	int v[2];
	((ProgramMemoryCheckerCreateToolbarTarget*)0x01300678)->sub_93F430(
		0x00942570,
		0,
		(const char*)0x00E83678,
		(const char*)0x01016EB0,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF4440);
}

class ProgramMemoryCheckerGetSettingTarget
{
public:
	void sub_93F500(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbc310
void ProgramMemoryCheckerImpl::init147()
{
	int v[2];
	((ProgramMemoryCheckerGetSettingTarget*)0x013006E8)->sub_93F500(
		0x00943930,
		0,
		(const char*)0x00E836B0,
		(const char*)0x00E83694,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF46B0);
}

class ProgramMemoryCheckerSetActiveTarget
{
public:
	void sub_93F360(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbc4a0
void ProgramMemoryCheckerImpl::init148()
{
	int v[2];
	((ProgramMemoryCheckerSetActiveTarget*)0x01300818)->sub_93F360(
		0x009446F0,
		0,
		(const char*)0x00E83780,
		(const char*)0x00E83778,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF4830);
}

class ProgramMemoryCheckerInit149Target
{
public:
	void sub_973070(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbe070
void ProgramMemoryCheckerImpl::init149()
{
	int v[2];
	((ProgramMemoryCheckerInit149Target*)0x01301788)->sub_973070(
		0x0097E0C0,
		0,
		(const char*)0x00E87C54,
		(const char*)0x00E87C44,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF5CD0);
}

class ProgramMemoryCheckerInit150Target
{
public:
	void sub_972FA0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbe0b0
void ProgramMemoryCheckerImpl::init150()
{
	int v[2];
	((ProgramMemoryCheckerInit150Target*)0x013017C0)->sub_972FA0(
		0x0097ECA0,
		0,
		(const char*)0x00E87C7C,
		(const char*)0x00E87C70,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF5D40);
}

class ProgramMemoryCheckerInit151Target
{
public:
	void sub_989CC0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbee50
void ProgramMemoryCheckerImpl::init151()
{
	int v[2];
	((ProgramMemoryCheckerInit151Target*)0x01301F90)->sub_989CC0(
		0x009925A0,
		0,
		(const char*)0x00E8D13C,
		(const char*)0x01005384,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF66A0);
}

class ProgramMemoryCheckerInit152Target
{
public:
	void sub_9A73F0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc0510
void ProgramMemoryCheckerImpl::init152()
{
	int v[2];
	((ProgramMemoryCheckerInit152Target*)0x01303BB8)->sub_9A73F0(
		0x00403A00,
		0,
		(const char*)0x00E931E4,
		(const char*)0x01004E08,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF77B0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc0550
void ProgramMemoryCheckerImpl::init153()
{
	int v[2];
	((ProgramMemoryCheckerInit152Target*)0x01303BF0)->sub_9A73F0(
		0x00403A00,
		0,
		(const char*)0x00E931F4,
		(const char*)0x00E92F90,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF7820);
}

class ProgramMemoryCheckerInit154Target
{
public:
	void sub_9A7850(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc0590
void ProgramMemoryCheckerImpl::init154()
{
	int v[2];
	((ProgramMemoryCheckerInit154Target*)0x01303DA0)->sub_9A7850(
		0x009AEBE0,
		0,
		(const char*)0x00E932E4,
		(const char*)0x00E932D8,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF7890);
}

class ProgramMemoryCheckerInit155Target
{
public:
	void sub_9A7660(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc0800
void ProgramMemoryCheckerImpl::init155()
{
	int v[2];
	((ProgramMemoryCheckerInit155Target*)0x01303E80)->sub_9A7660(
		0x009AF920,
		0,
		(const char*)0x0100E4FC,
		(const char*)0x01018974,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF7C20);
}

class ProgramMemoryCheckerInit156Target
{
public:
	void sub_9A79D0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc0840
void ProgramMemoryCheckerImpl::init156()
{
	int v[2];
	((ProgramMemoryCheckerInit156Target*)0x01303DD8)->sub_9A79D0(
		0x009B0350,
		0,
		(const char*)0x00E93300,
		(const char*)0x01004E08,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF7CF0);
}

class ProgramMemoryCheckerInit157Target
{
public:
	void sub_9A7590(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc0950
void ProgramMemoryCheckerImpl::init157()
{
	int v[2];
	((ProgramMemoryCheckerInit157Target*)0x01303B48)->sub_9A7590(
		0x009B2A50,
		0,
		(const char*)0x00E742FC,
		(const char*)0x00E931A8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF7EC0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc0990
void ProgramMemoryCheckerImpl::init158()
{
	int v[2];
	((ProgramMemoryCheckerInit157Target*)0x01303B80)->sub_9A7590(
		0x009B2AB0,
		0,
		(const char*)0x00E931C4,
		(const char*)0x00E931B4,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF7F70);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc09d0
void ProgramMemoryCheckerImpl::init159()
{
	int v[2];
	((ProgramMemoryCheckerInit157Target*)0x01303988)->sub_9A7590(
		0x00AF2A90,
		0,
		(const char*)0x00E930C8,
		(const char*)0x00E930BC,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF8020);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc0a10
void ProgramMemoryCheckerImpl::init160()
{
	int v[2];
	((ProgramMemoryCheckerInit157Target*)0x01303A30)->sub_9A7590(
		0x00AF2A90,
		0,
		(const char*)0x00E93124,
		(const char*)0x00E930BC,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF80D0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc0a50
void ProgramMemoryCheckerImpl::init161()
{
	int v[2];
	((ProgramMemoryCheckerInit157Target*)0x01303B10)->sub_9A7590(
		0x00AF2AF0,
		0,
		(const char*)0x00E93194,
		(const char*)0x00E93184,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF8180);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc0a90
void ProgramMemoryCheckerImpl::init162()
{
	int v[2];
	((ProgramMemoryCheckerInit157Target*)0x01303AD8)->sub_9A7590(
		0x00B9A250,
		0,
		(const char*)0x00E93174,
		(const char*)0x00E93164,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF8230);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc0ad0
void ProgramMemoryCheckerImpl::init163()
{
	int v[2];
	((ProgramMemoryCheckerInit157Target*)0x01303AA0)->sub_9A7590(
		0x00A5D6F0,
		0,
		(const char*)0x00E93154,
		(const char*)0x00E93144,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF82E0);
}

class ProgramMemoryCheckerSetTrustLevelTarget
{
public:
	void sub_9A74C0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc0b10
void ProgramMemoryCheckerImpl::init164()
{
	int v[2];
	((ProgramMemoryCheckerSetTrustLevelTarget*)0x013039F8)->sub_9A74C0(
		0x00403A00,
		0,
		(const char*)0x00E93114,
		(const char*)0x00E93108,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF8390);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc0b50
void ProgramMemoryCheckerImpl::init165()
{
	int v[2];
	((ProgramMemoryCheckerInit157Target*)0x013039C0)->sub_9A7590(
		0x00AF2B50,
		0,
		(const char*)0x00E930E8,
		(const char*)0x00E930DC,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF8400);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc0b90
void ProgramMemoryCheckerImpl::init166()
{
	int v[2];
	((ProgramMemoryCheckerInit157Target*)0x01303A68)->sub_9A7590(
		0x00AF2B50,
		0,
		(const char*)0x00E93134,
		(const char*)0x00E930DC,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF84B0);
}

class ProgramMemoryCheckerGetButtonTarget
{
public:
	void sub_9B3A00(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc0c60
void ProgramMemoryCheckerImpl::init167()
{
	int v[2];
	((ProgramMemoryCheckerGetButtonTarget*)0x01303FF8)->sub_9B3A00(
		0x009B5DB0,
		0,
		(const char*)0x00E93DC8,
		(const char*)0x00E93D80,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF8570);
}

class ProgramMemoryCheckerUnbindButtonTarget
{
public:
	void sub_9B3880(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc0ca0
void ProgramMemoryCheckerImpl::init168()
{
	int v[2];
	((ProgramMemoryCheckerUnbindButtonTarget*)0x01303FC0)->sub_9B3880(
		0x009B7860,
		0,
		(const char*)0x00E93DAC,
		(const char*)0x00E93D80,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF85E0);
}

class ProgramMemoryCheckerRemoveDefaultLoadingGuiSignalTarget
{
public:
	void sub_9B7E60(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc0e00
void ProgramMemoryCheckerImpl::init169()
{
	int v[2];
	((ProgramMemoryCheckerRemoveDefaultLoadingGuiSignalTarget*)0x01304204)->sub_9B7E60(
		0x6C,
		(const char*)0x00E94608,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x01304204 = 0x00E945EC;
	sub_CF6609((void*)0x00DF88B0);
}

class ProgramMemoryCheckerSetCreateFriendRequestUrlTarget
{
public:
	void sub_9BB150(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc1040
void ProgramMemoryCheckerImpl::init170()
{
	int v[2];
	((ProgramMemoryCheckerSetCreateFriendRequestUrlTarget*)0x01304298)->sub_9BB150(
		0x009C17F0,
		0,
		(const char*)0x00E9493C,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF8B40);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc1080
void ProgramMemoryCheckerImpl::init171()
{
	int v[2];
	((ProgramMemoryCheckerSetCreateFriendRequestUrlTarget*)0x013042D0)->sub_9BB150(
		0x009C18C0,
		0,
		(const char*)0x00E94958,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF8BF0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc1100
void ProgramMemoryCheckerImpl::init172()
{
	int v[2];
	((ProgramMemoryCheckerSetCreateFriendRequestUrlTarget*)0x01304458)->sub_9BB150(
		0x00AF2AF0,
		0,
		(const char*)0x00E94A70,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF8D10);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc1140
void ProgramMemoryCheckerImpl::init173()
{
	int v[2];
	((ProgramMemoryCheckerSetCreateFriendRequestUrlTarget*)0x01304378)->sub_9BB150(
		0x009C19A0,
		0,
		(const char*)0x00E9499C,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF8DC0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc1180
void ProgramMemoryCheckerImpl::init174()
{
	int v[2];
	((ProgramMemoryCheckerSetCreateFriendRequestUrlTarget*)0x01304308)->sub_9BB150(
		0x009C1A70,
		0,
		(const char*)0x00E94974,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF8E70);
}

class ProgramMemoryCheckerInit175Target
{
public:
	void sub_9D15F0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc2480
void ProgramMemoryCheckerImpl::init175()
{
	int v[2];
	((ProgramMemoryCheckerInit175Target*)0x01305668)->sub_9D15F0(
		0x234,
		0,
		(const char*)0x00E962E4,
		(const char*)0x00E962D4,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA0F0);
}

class ProgramMemoryCheckerInit176Target
{
public:
	void sub_9D16C0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc24c0
void ProgramMemoryCheckerImpl::init176()
{
	int v[2];
	((ProgramMemoryCheckerInit176Target*)0x01305B70)->sub_9D16C0(
		0x218,
		0,
		(const char*)0x00E9651C,
		(const char*)0x00E73C50,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA150);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc2500
void ProgramMemoryCheckerImpl::init177()
{
	int v[2];
	((ProgramMemoryCheckerInit176Target*)0x01305BA0)->sub_9D16C0(
		0x21C,
		0,
		(const char*)0x00E96530,
		(const char*)0x00E73C50,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA1B0);
}

class ProgramMemoryCheckerInit178Target
{
public:
	void sub_9D1A80(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc2590
void ProgramMemoryCheckerImpl::init178()
{
	int v[2];
	((ProgramMemoryCheckerInit178Target*)0x01305758)->sub_9D1A80(
		0x248,
		0,
		(const char*)0x00E9633C,
		(const char*)0x00E83778,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA270);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc25d0
void ProgramMemoryCheckerImpl::init179()
{
	int v[2];
	((ProgramMemoryCheckerInit178Target*)0x013056C8)->sub_9D1A80(
		0x23C,
		0,
		(const char*)0x00E96318,
		(const char*)0x00E83778,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA2D0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc2610
void ProgramMemoryCheckerImpl::init180()
{
	int v[2];
	((ProgramMemoryCheckerInit178Target*)0x013056F8)->sub_9D1A80(
		0x244,
		0,
		(const char*)0x00E96324,
		(const char*)0x00E83778,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA330);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc2650
void ProgramMemoryCheckerImpl::init181()
{
	int v[2];
	((ProgramMemoryCheckerInit175Target*)0x013058E8)->sub_9D15F0(
		0x25C,
		0,
		(const char*)0x00E963E8,
		(const char*)0x00E963E0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA390);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc2690
void ProgramMemoryCheckerImpl::init182()
{
	int v[2];
	((ProgramMemoryCheckerInit178Target*)0x01305698)->sub_9D1A80(
		0x238,
		0,
		(const char*)0x00E96310,
		(const char*)0x00E83778,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA3F0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc26d0
void ProgramMemoryCheckerImpl::init183()
{
	int v[2];
	((ProgramMemoryCheckerInit178Target*)0x013057E8)->sub_9D1A80(
		0x254,
		0,
		(const char*)0x00E96358,
		(const char*)0x00E83778,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA450);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc2710
void ProgramMemoryCheckerImpl::init184()
{
	int v[2];
	((ProgramMemoryCheckerInit178Target*)0x01305788)->sub_9D1A80(
		0x24C,
		0,
		(const char*)0x00E96348,
		(const char*)0x00E83778,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA4B0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc2750
void ProgramMemoryCheckerImpl::init185()
{
	int v[2];
	((ProgramMemoryCheckerInit175Target*)0x01305638)->sub_9D15F0(
		0x230,
		0,
		(const char*)0x00E962DC,
		(const char*)0x00E962D4,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA510);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc2790
void ProgramMemoryCheckerImpl::init186()
{
	int v[2];
	((ProgramMemoryCheckerInit178Target*)0x013057B8)->sub_9D1A80(
		0x250,
		0,
		(const char*)0x00E96350,
		(const char*)0x00E83778,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA570);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc2820
class ProgramMemoryCheckerInit187Target
{
public:
	void sub_9D19B0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

void ProgramMemoryCheckerImpl::init187()
{
	int v[2];
	((ProgramMemoryCheckerInit187Target*)0x01305B10)->sub_9D19B0(
		0x210,
		0,
		(const char*)0x00E964E0,
		(const char*)0x00E73C50,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA630);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc2860
void ProgramMemoryCheckerImpl::init188()
{
	int v[2];
	((ProgramMemoryCheckerInit187Target*)0x01305B40)->sub_9D19B0(
		0x214,
		0,
		(const char*)0x00E964EC,
		(const char*)0x00E73C50,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA690);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc28a0
void ProgramMemoryCheckerImpl::init189()
{
	int v[2];
	((ProgramMemoryCheckerInit178Target*)0x01305728)->sub_9D1A80(
		0x240,
		0,
		(const char*)0x00E96330,
		(const char*)0x00E83778,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA6F0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc28e0
void ProgramMemoryCheckerImpl::init190()
{
	int v[2];
	((ProgramMemoryCheckerInit175Target*)0x01305818)->sub_9D15F0(
		0x22C,
		0,
		(const char*)0x00E9636C,
		(const char*)0x00E962D4,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFA750);
}

class ProgramMemoryCheckerInit191Target
{
public:
	void sub_9E4940(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc4510
void ProgramMemoryCheckerImpl::init191()
{
	int v[2];
	((ProgramMemoryCheckerInit191Target*)0x01305FF0)->sub_9E4940(
		0x009EBDD0,
		0,
		(const char*)0x00E97E3C,
		(const char*)0x00E97C6C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFB710);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc45a0
class ProgramMemoryCheckerInit192Target
{
public:
	void sub_9E4940(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

void ProgramMemoryCheckerImpl::init192()
{
	int v[2];
	((ProgramMemoryCheckerInit192Target*)0x01305F80)->sub_9E4940(
		0x009EC6A0,
		0,
		(const char*)0x00E97E18,
		(const char*)0x00E97C6C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFB7F0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc5900
class ProgramMemoryCheckerInit193Target
{
public:
	void sub_A0EB70(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

void ProgramMemoryCheckerImpl::init193()
{
	int v[2];
	((ProgramMemoryCheckerInit193Target*)0x01306D88)->sub_A0EB70(
		0x00A0F2D0,
		0,
		(const char*)0x00E9E2F0,
		(const char*)0x00E9E2E0,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFC120);
}

class ProgramMemoryCheckerInit194Target
{
public:
	void sub_A0ECF0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc5940
void ProgramMemoryCheckerImpl::init194()
{
	int v[2];
	((ProgramMemoryCheckerInit194Target*)0x01306F78)->sub_A0ECF0(
		0x00A0F2E0,
		0,
		(const char*)0x00E9E3B4,
		(const char*)0x01024D30,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFC190);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc5980
void ProgramMemoryCheckerImpl::init195()
{
	int v[2];
	((ProgramMemoryCheckerInit193Target*)0x01306D50)->sub_A0EB70(
		0x00A0F300,
		0,
		(const char*)0x00E9E2E4,
		(const char*)0x00E9E2E0,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFC200);
}

class ProgramMemoryCheckerInit196Target
{
public:
	void sub_A59A60(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc75b0
void ProgramMemoryCheckerImpl::init196()
{
	int v[2];
	((ProgramMemoryCheckerInit196Target*)0x01307DE8)->sub_A59A60(
		0x00A5C6E0,
		0,
		(const char*)0x00EABB1C,
		(const char*)0x00EABAEC,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFD200);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc75f0
void ProgramMemoryCheckerImpl::init197()
{
	int v[2];
	((ProgramMemoryCheckerInit196Target*)0x01307E20)->sub_A59A60(
		0x00A5CD10,
		0,
		(const char*)0x00EABB28,
		(const char*)0x00EABAEC,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFD270);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc7630
void ProgramMemoryCheckerImpl::init198()
{
	int v[2];
	((ProgramMemoryCheckerInit196Target*)0x01307EC8)->sub_A59A60(
		0x00AF2A30,
		0,
		(const char*)0x00EABB68,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFD2E0);
}

class ProgramMemoryCheckerSetHasBadgeCooldownTarget
{
public:
	void sub_A598C0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc76b0
void ProgramMemoryCheckerImpl::init200()
{
	int v[2];
	((ProgramMemoryCheckerSetHasBadgeCooldownTarget*)0x01307E58)->sub_A598C0(
		0x00A5D6E0,
		0,
		(const char*)0x00EABB48,
		(const char*)0x00E5E0A4,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFD440);
}

class ProgramMemoryCheckerSetHasBadgeUrlTarget
{
public:
	void sub_A59990(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc76f0
void ProgramMemoryCheckerImpl::init201()
{
	int v[2];
	((ProgramMemoryCheckerSetHasBadgeUrlTarget*)0x01307F00)->sub_A59990(
		0x00B1B650,
		0,
		(const char*)0x00EABB7C,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFD4B0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc7730
void ProgramMemoryCheckerImpl::init202()
{
	int v[2];
	((ProgramMemoryCheckerSetHasBadgeUrlTarget*)0x01307F70)->sub_A59990(
		0x00B9A250,
		0,
		(const char*)0x00EABBA4,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFD560);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc7770
void ProgramMemoryCheckerImpl::init203()
{
	int v[2];
	((ProgramMemoryCheckerSetHasBadgeCooldownTarget*)0x01307E90)->sub_A598C0(
		0x00A5D750,
		0,
		(const char*)0x00E5E0F8,
		(const char*)0x00E5E0C8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFD610);
}

class ProgramMemoryCheckerInit204Target
{
public:
	void sub_A61CE0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc7b00
void ProgramMemoryCheckerImpl::init204()
{
	int v[2];
	((ProgramMemoryCheckerInit204Target*)0x01308198)->sub_A61CE0(
		0x00A62750,
		0,
		(const char*)0x00E932E4,
		(const char*)0x00E51A38,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFD9D0);
}

class ProgramMemoryCheckerInit205Target
{
public:
	void sub_A63BB0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc7f80
void ProgramMemoryCheckerImpl::init205()
{
	int v[2];
	((ProgramMemoryCheckerInit205Target*)0x01308530)->sub_A63BB0(
		0x00A64E80,
		0,
		(const char*)0x00EAC9C0,
		(const char*)0x00E83694,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFE000);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc7fc0
void ProgramMemoryCheckerImpl::init206()
{
	int v[2];
	((ProgramMemoryCheckerInit205Target*)0x01308568)->sub_A63BB0(
		0x00A65270,
		0,
		(const char*)0x00EAC9C8,
		(const char*)0x00E83694,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFE0B0);
}

class ProgramMemoryCheckerInit207Target
{
public:
	void sub_A63BB0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc8000
void ProgramMemoryCheckerImpl::init207()
{
	int v[2];
	((ProgramMemoryCheckerInit207Target*)0x013085A0)->sub_A63BB0(
		0x00A653C0,
		0,
		(const char*)0x00EAC9D4,
		(const char*)0x00E83694,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFE160);
}

class ProgramMemoryCheckerInit208Target
{
public:
	void sub_A67550(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc84c0
void ProgramMemoryCheckerImpl::init208()
{
	int v[2];
	((ProgramMemoryCheckerInit208Target*)0x01308670)->sub_A67550(
		0x00A6AE90,
		0,
		(const char*)0x00EACF6C,
		(const char*)0x00E3EF24,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFE630);
}

class ProgramMemoryCheckerInit209Target
{
public:
	void sub_A743B0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc9540
void ProgramMemoryCheckerImpl::init209()
{
	int v[2];
	((ProgramMemoryCheckerInit209Target*)0x01309348)->sub_A743B0(
		0x00A788A0,
		0,
		(const char*)0x00EAE4B8,
		(const char*)0x01016EB0,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFF000);
}

class ProgramMemoryCheckerInit210Target
{
public:
	void sub_A74800(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dc9740
void ProgramMemoryCheckerImpl::init210()
{
	int v[2];
	((ProgramMemoryCheckerInit210Target*)0x013093B8)->sub_A74800(
		0x00A7B420,
		0,
		(const char*)0x00EAE4E4,
		(const char*)0x01016EB0,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFF190);
}

// FUNCTION: ROBLOXSTUDIO 0x00dc9780
void ProgramMemoryCheckerImpl::init211()
{
	int v[2];
	((ProgramMemoryCheckerInit210Target*)0x01309380)->sub_A74800(
		0x00A7B4A0,
		0,
		(const char*)0x00EAE4D0,
		(const char*)0x01016EB0,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFF240);
}

class ProgramMemoryCheckerInit212Target
{
public:
	void sub_A85170(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dca810
void ProgramMemoryCheckerImpl::init212()
{
	int v[2];
	((ProgramMemoryCheckerInit212Target*)0x01309758)->sub_A85170(
		0x00A870F0,
		0,
		(const char*)0x00EB0944,
		(const char*)0x00EB0910,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DFFDE0);
}

class ProgramMemoryCheckerSubA8FBA0Target
{
public:
	void sub_A8FBA0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dcad40
void ProgramMemoryCheckerImpl::init213()
{
	int v[2];
	((ProgramMemoryCheckerSubA8FBA0Target*)0x01309B80)->sub_A8FBA0(
		0x138,
		0,
		(const char*)0x00EB2FE4,
		(const char*)0x00E73878,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E000C0);
}

class ProgramMemoryCheckerInit214Target
{
public:
	void sub_AA4EC0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dcc950
void ProgramMemoryCheckerImpl::init214()
{
	int v[2];
	((ProgramMemoryCheckerInit214Target*)0x0130B2B0)->sub_AA4EC0(
		0x280,
		0,
		(const char*)0x00E7E364,
		(const char*)0x00E7BAAC,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E011D0);
}

class ProgramMemoryCheckerInit215Target
{
public:
	void sub_ACF510(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dce2c0
void ProgramMemoryCheckerImpl::init215()
{
	int v[2];
	((ProgramMemoryCheckerInit215Target*)0x0130C0E8)->sub_ACF510(
		0x00AD37B0,
		0,
		(const char*)0x00E96608,
		(const char*)0x01011F2C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E022E0);
}

class ProgramMemoryCheckerInit216Target
{
public:
	void sub_AD5E80(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dce450
void ProgramMemoryCheckerImpl::init216()
{
	int v[2];
	((ProgramMemoryCheckerInit216Target*)0x0130C240)->sub_AD5E80(
		0x00AD6C00,
		0,
		(const char*)0x00E9D470,
		(const char*)0x00E97C6C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E02530);
}

// FUNCTION: ROBLOXSTUDIO 0x00dce490
class ProgramMemoryCheckerInit217Target
{
public:
	void sub_AD5F50(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

void ProgramMemoryCheckerImpl::init217()
{
	int v[2];
	((ProgramMemoryCheckerInit217Target*)0x0130C1D0)->sub_AD5F50(
		0x00AD6D40,
		0,
		(const char*)0x00EBCB8C,
		(const char*)0x00E97C6C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0
	);
	sub_CF6609((void*)0x00E02600);
}

class ProgramMemoryCheckerInit218Target
{
public:
	void sub_AD7970(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dce560
void ProgramMemoryCheckerImpl::init218()
{
	int v[2];
	((ProgramMemoryCheckerInit218Target*)0x0130C2E8)->sub_AD7970(
		0x00AD8FC0,
		0,
		(const char*)0x00E60BEC,
		(const char*)0x00EBCD8C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E02750);
}

class ProgramMemoryCheckerInit219Target
{
public:
	void sub_ADC5A0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dce8e0
void ProgramMemoryCheckerImpl::init219()
{
	int v[2];
	((ProgramMemoryCheckerInit219Target*)0x0130C3B8)->sub_ADC5A0(
		0x00AE11B0,
		0,
		(const char*)0x00EBDF24,
		(const char*)0x00E7383C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E02B00);
}

class ProgramMemoryCheckerInit220Target
{
public:
	void sub_AE8EB0(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dceeb0
void ProgramMemoryCheckerImpl::init220()
{
	int v[2];
	((ProgramMemoryCheckerInit220Target*)0x0130C71C)->sub_AE8EB0(
		0x68,
		(const char*)0x00EBEFC0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x0130C71C = 0x00EBEFA4;
	sub_CF6609((void*)0x00E02F20);
}

class ProgramMemoryCheckerInit221Target
{
public:
	void sub_AECDA0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dcf0f0
void ProgramMemoryCheckerImpl::init221()
{
	int v[2];
	((ProgramMemoryCheckerInit221Target*)0x0130C830)->sub_AECDA0(
		0x00AEDC10,
		0,
		(const char*)0x00EBF4E8,
		(const char*)0x00EBF4C0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E031D0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcf130
void ProgramMemoryCheckerImpl::init222()
{
	int v[2];
	((ProgramMemoryCheckerInit221Target*)0x0130C868)->sub_AECDA0(
		0x00AEDFB0,
		0,
		(const char*)0x00EBF4F8,
		(const char*)0x00EBF4C0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E03240);
}

class ProgramMemoryCheckerSetBestFriendUrlTarget
{
public:
	void sub_AF1BF0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dcf210
void ProgramMemoryCheckerImpl::init223()
{
	int v[2];
	((ProgramMemoryCheckerSetBestFriendUrlTarget*)0x0130C8E8)->sub_AF1BF0(
		0x00B1B650,
		0,
		(const char*)0x00EC0458,
		(const char*)0x00EC0448,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E03380);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcf250
void ProgramMemoryCheckerImpl::init224()
{
	int v[2];
	((ProgramMemoryCheckerSetBestFriendUrlTarget*)0x0130C8B0)->sub_AF1BF0(
		0x00AF2A30,
		0,
		(const char*)0x00EC0438,
		(const char*)0x00EC042C,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E03430);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcf290
void ProgramMemoryCheckerImpl::init225()
{
	int v[2];
	((ProgramMemoryCheckerSetBestFriendUrlTarget*)0x0130C958)->sub_AF1BF0(
		0x00B9A250,
		0,
		(const char*)0x00EC0494,
		(const char*)0x00EC0484,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E034E0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcf2d0
void ProgramMemoryCheckerImpl::init226()
{
	int v[2];
	((ProgramMemoryCheckerSetBestFriendUrlTarget*)0x0130C990)->sub_AF1BF0(
		0x00AF2A90,
		0,
		(const char*)0x00EC04B4,
		(const char*)0x00EC04A4,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E03590);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcf310
void ProgramMemoryCheckerImpl::init227()
{
	int v[2];
	((ProgramMemoryCheckerSetBestFriendUrlTarget*)0x0130C920)->sub_AF1BF0(
		0x00A5D6F0,
		0,
		(const char*)0x00EC0478,
		(const char*)0x00EC046C,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E03640);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcf350
void ProgramMemoryCheckerImpl::init228()
{
	int v[2];
	((ProgramMemoryCheckerSetBestFriendUrlTarget*)0x0130CA00)->sub_AF1BF0(
		0x00AF2AF0,
		0,
		(const char*)0x00EC04DC,
		(const char*)0x00EC04C4,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E036F0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcf390
void ProgramMemoryCheckerImpl::init229()
{
	int v[2];
	((ProgramMemoryCheckerSetBestFriendUrlTarget*)0x0130C9C8)->sub_AF1BF0(
		0x00AF2B50,
		0,
		(const char*)0x00EC04D0,
		(const char*)0x00EC04C4,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E037A0);
}

class ProgramMemoryCheckerInit230Target
{
public:
	void sub_AF2FB0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dcf3d0
void ProgramMemoryCheckerImpl::init230()
{
	int v[2];
	((ProgramMemoryCheckerInit230Target*)0x0130CB18)->sub_AF2FB0(
		0x00AF3AA0,
		0,
		(const char*)0x00EC07FC,
		(const char*)0x00E73878,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E03850);
}

class ProgramMemoryCheckerInit231Target
{
public:
	void sub_AF3080(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dcf410
void ProgramMemoryCheckerImpl::init231()
{
	int v[2];
	((ProgramMemoryCheckerInit231Target*)0x0130CB50)->sub_AF3080(
		0x00AF3F50,
		0,
		(const char*)0x00EC081C,
		(const char*)0x00E5E0C8,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E03920);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcf450
void ProgramMemoryCheckerImpl::init232()
{
	int v[2];
	((ProgramMemoryCheckerInit230Target*)0x0130CAE0)->sub_AF2FB0(
		0x00AF4150,
		0,
		(const char*)0x00EC07F4,
		(const char*)0x00E73878,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E03990);
}

class ProgramMemoryCheckerInit233Target
{
public:
	void sub_AF2EE0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dcf490
void ProgramMemoryCheckerImpl::init233()
{
	int v[2];
	((ProgramMemoryCheckerInit233Target*)0x0130CAA8)->sub_AF2EE0(
		0x00A5D6F0,
		0,
		(const char*)0x00EC07C8,
		(const char*)0x00EC07AC,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E03A60);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcf4d0
void ProgramMemoryCheckerImpl::init234()
{
	int v[2];
	((ProgramMemoryCheckerInit233Target*)0x0130CA38)->sub_AF2EE0(
		0x00AF2A30,
		0,
		(const char*)0x00EC0758,
		(const char*)0x00EC073C,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E03B10);
}

class ProgramMemoryCheckerSubAF85F0Target
{
public:
	void sub_AF85F0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dcf920
void ProgramMemoryCheckerImpl::init235()
{
	int v[2];
	((ProgramMemoryCheckerSubAF85F0Target*)0x0130CCF0)->sub_AF85F0(
		0x00AFB490,
		0,
		(const char*)0x00EC0C90,
		(const char*)0x00E83694,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E04050);
}

class ProgramMemoryCheckerInit236Target
{
public:
	void sub_AF8890(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dcf960
void ProgramMemoryCheckerImpl::init236()
{
	int v[2];
	((ProgramMemoryCheckerInit236Target*)0x0130CD60)->sub_AF8890(
		0x00AFB860,
		0,
		(const char*)0x00EC0CB0,
		(const char*)0x00E83694,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E04100);
}

class ProgramMemoryCheckerInit237Target
{
public:
	void sub_AF86C0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dcfaf0
void ProgramMemoryCheckerImpl::init237()
{
	int v[2];
	((ProgramMemoryCheckerInit237Target*)0x0130CE20)->sub_AF86C0(
		0x00AFEB00,
		0,
		(const char*)0x00EC0D78,
		(const char*)0x00EC0D54,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E042C0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcfb30
void ProgramMemoryCheckerImpl::init238()
{
	int v[2];
	((ProgramMemoryCheckerSubAF85F0Target*)0x0130CF20)->sub_AF85F0(
		0x00AFE730,
		0,
		(const char*)0x00EC0E00,
		(const char*)0x00E5DCF8,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E04390);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcfb70
void ProgramMemoryCheckerImpl::init239()
{
	int v[2];
	((ProgramMemoryCheckerSubAF85F0Target*)0x0130CD28)->sub_AF85F0(
		0x00AFED10,
		0,
		(const char*)0x00EC0C98,
		(const char*)0x00E83694,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E04440);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcfc10
void ProgramMemoryCheckerImpl::init240()
{
	int v[2];
	((ProgramMemoryCheckerSubAF85F0Target*)0x0130D018)->sub_AF85F0(
		0x00AFEF10,
		0,
		(const char*)0x00EC0E7C,
		(const char*)0x00EBEEEC,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E04500);
}

class ProgramMemoryCheckerInit241Target
{
public:
	void sub_B00F90(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dcffb0
void ProgramMemoryCheckerImpl::init241()
{
	int v[2];
	((ProgramMemoryCheckerInit241Target*)0x0130D160)->sub_B00F90(
		0x00B9A250,
		0,
		(const char*)0x00EC17F8,
		(const char*)0x00EC17EC,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E047E0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dcfff0
void ProgramMemoryCheckerImpl::init242()
{
	int v[2];
	((ProgramMemoryCheckerInit241Target*)0x0130D128)->sub_B00F90(
		0x00A5D6F0,
		0,
		(const char*)0x00EC17D8,
		(const char*)0x00EC17CC,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E04890);
}

class ProgramMemoryCheckerInit243Target
{
public:
	void sub_B01250(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd0160
void ProgramMemoryCheckerImpl::init243()
{
	int v[2];
	((ProgramMemoryCheckerInit243Target*)0x0130D2B8)->sub_B01250(
		0x00B05CC0,
		0,
		(const char*)0x00EC18F0,
		(const char*)0x00EC18E4,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E049E0);
}

class ProgramMemoryCheckerInit244Target
{
public:
	void sub_B01060(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd0220
void ProgramMemoryCheckerImpl::init244()
{
	int v[2];
	((ProgramMemoryCheckerInit244Target*)0x0130D248)->sub_B01060(
		0x00B06450,
		0,
		(const char*)0x00EC18A4,
		(const char*)0x00E5E0C8,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E04AB0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dd0330
class ProgramMemoryCheckerInit245Target
{
public:
	void sub_B00F90(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

void ProgramMemoryCheckerImpl::init245()
{
	int v[2];

	((ProgramMemoryCheckerInit245Target*)0x0130D198)->sub_B00F90(
		0x00AF2A90,
		0,
		(const char*)0x00EC1818,
		(const char*)0x00EC180C,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0
	);
	sub_CF6609((void*)0x00E04C00);
}

class ProgramMemoryCheckerInit246Target
{
public:
	void sub_B0A630(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd0590
void ProgramMemoryCheckerImpl::init246()
{
	int v[2];
	((ProgramMemoryCheckerInit246Target*)0x0130D468)->sub_B0A630(
		0x6c,
		(const char*)0x00EAC91C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x0130D468 = 0x00EC251C;
	sub_CF6609((void*)0x00E04DF0);
}

// FUNCTION: ROBLOXSTUDIO 0x00dd05d0
void ProgramMemoryCheckerImpl::init247()
{
	int v[2];
	((ProgramMemoryCheckerInit246Target*)0x0130D4C0)->sub_B0A630(
		0x74,
		(const char*)0x00EAC928,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x0130D4C0 = 0x00EC251C;
	sub_CF6609((void*)0x00E04E50);
}

class ProgramMemoryCheckerInit248Target
{
public:
	void sub_B0A630(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd0610
void ProgramMemoryCheckerImpl::init248()
{
	int v[2];
	((ProgramMemoryCheckerInit248Target*)0x0130D494)->sub_B0A630(
		0x70,
		(const char*)0x00EAC944,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x0130D494 = 0x00EC251C;
	sub_CF6609((void*)0x00E04EB0);
}

class ProgramMemoryCheckerInit249Target
{
public:
	void sub_B0A630(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd0650
void ProgramMemoryCheckerImpl::init249()
{
	int v[2];
	((ProgramMemoryCheckerInit249Target*)0x0130D4EC)->sub_B0A630(
		0x78,
		(const char*)0x00EAC950,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x0130D4EC = 0x00EC251C;
	sub_CF6609((void*)0x00E04F10);
}

class ProgramMemoryCheckerInit250Target
{
public:
	void sub_B0A630(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd06f0
void ProgramMemoryCheckerImpl::init250()
{
	int v[2];
	((ProgramMemoryCheckerInit250Target*)0x0130D43C)->sub_B0A630(
		0x68,
		(const char*)0x00E7DA30,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x0130D43C = 0x00EC251C;
	sub_CF6609((void*)0x00E04F90);
}

class ProgramMemoryCheckerInit251Target
{
public:
	void sub_B0A630(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd07b0
void ProgramMemoryCheckerImpl::init251()
{
	int v[2];
	((ProgramMemoryCheckerInit251Target*)0x0130D410)->sub_B0A630(
		0x64,
		(const char*)0x00E960C0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x0130D410 = 0x00EC251C;
	sub_CF6609((void*)0x00E050B0);
}

class ProgramMemoryCheckerInit252Target
{
public:
	void sub_B0F780(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd0fe0
void ProgramMemoryCheckerImpl::init252()
{
	int v[2];
	((ProgramMemoryCheckerInit252Target*)0x0130DB38)->sub_B0F780(
		0x008BC080,
		0,
		(const char*)0x00EC3A84,
		(const char*)0x01024D30,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E05570);
}

class ProgramMemoryCheckerInit253Target
{
public:
	void sub_B110A0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd1080
void ProgramMemoryCheckerImpl::init253()
{
	int v[2];
	((ProgramMemoryCheckerInit253Target*)0x0130DBE8)->sub_B110A0(
		0x00B115A0,
		0,
		(const char*)0x00EC40B4,
		(const char*)0x00E83694,
		6,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E05600);
}

class ProgramMemoryCheckerInit254Target
{
public:
	void sub_B10F20(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd10c0
void ProgramMemoryCheckerImpl::init254()
{
	int v[2];
	((ProgramMemoryCheckerInit254Target*)0x0130DBB0)->sub_B10F20(
		0x00B11680,
		0,
		(const char*)0x00EC4098,
		(const char*)0x00E83694,
		6,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E056B0);
}

class ProgramMemoryCheckerInit255Target
{
public:
	void sub_B13690(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd11a0
void ProgramMemoryCheckerImpl::init255()
{
	int v[2];
	((ProgramMemoryCheckerInit255Target*)0x0130DC28)->sub_B13690(
		0x00B14C90,
		0,
		(const char*)0x00EC4264,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E057F0);
}

class ProgramMemoryCheckerSubB173C0Target
{
public:
	void sub_B173C0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd12e0
void ProgramMemoryCheckerImpl::init256()
{
	int v[2];
	((ProgramMemoryCheckerSubB173C0Target*)0x0130DCB0)->sub_B173C0(
		0x00B18450,
		0,
		(const char*)0x00EC489C,
		(const char*)0x00EC488C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E05960);
}

// FUNCTION: ROBLOXSTUDIO 0x00dd1320
void ProgramMemoryCheckerImpl::init257()
{
	int v[2];
	((ProgramMemoryCheckerSubB173C0Target*)0x0130DCE8)->sub_B173C0(
		0x00B18550,
		0,
		(const char*)0x00EC48C4,
		(const char*)0x00EC48B8,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E05A30);
}

class ProgramMemoryCheckerInit258Target
{
public:
	void sub_B186F0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd1460
void ProgramMemoryCheckerImpl::init258()
{
	int v[2];
	((ProgramMemoryCheckerInit258Target*)0x0130DDC8)->sub_B186F0(
		0x00403A00,
		0,
		(const char*)0x00EC4D80,
		(const char*)0x01009550,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E05BC0);
}

class ProgramMemoryCheckerInit259Target
{
public:
	void sub_B1B050(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd1560
void ProgramMemoryCheckerImpl::init259()
{
	int v[2];
	((ProgramMemoryCheckerInit259Target*)0x0130DF5C)->sub_B1B050(
		0x6c,
		(const char*)0x00E7E390,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x0130DF5C = 0x00EC585C;
	sub_CF6609((void*)0x00E05CF0);
}

class ProgramMemoryCheckerInit260Target
{
public:
	void sub_B1B050(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd15a0
void ProgramMemoryCheckerImpl::init260()
{
	int v[2];
	((ProgramMemoryCheckerInit260Target*)0x0130DF88)->sub_B1B050(
		0x74,
		(const char*)0x00E7E39C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x0130DF88 = 0x00EC585C;
	sub_CF6609((void*)0x00E05D50);
}

class ProgramMemoryCheckerInit261Target
{
public:
	void sub_B1B050(int a1, const char* a2, int a3, int a4, int a5);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd1620
void ProgramMemoryCheckerImpl::init261()
{
	int v[2];
	((ProgramMemoryCheckerInit261Target*)0x0130DF30)->sub_B1B050(
		0x70,
		(const char*)0x00E7E364,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	*(int*)0x0130DF30 = 0x00EC585C;
	sub_CF6609((void*)0x00E05E10);
}

class ProgramMemoryCheckerInit262Target
{
public:
	void sub_B1B230(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd16c0
void ProgramMemoryCheckerImpl::init262()
{
	int v[2];
	((ProgramMemoryCheckerInit262Target*)0x0130E028)->sub_B1B230(
		0x00B1B650,
		0,
		(const char*)0x00EC5A5C,
		(const char*)0x00EC5A54,
		6,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E05E90);
}

class ProgramMemoryCheckerInit263Target
{
public:
	void sub_B1B230(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd1700
void ProgramMemoryCheckerImpl::init263()
{
	int v[2];
	((ProgramMemoryCheckerInit263Target*)0x0130DFF0)->sub_B1B230(
		0x00AF2A30,
		0,
		(const char*)0x00E742FC,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E05F40);
}

class ProgramMemoryCheckerInit264Target
{
public:
	void sub_B250B0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd1db0
void ProgramMemoryCheckerImpl::init264()
{
	int v[2];
	((ProgramMemoryCheckerInit264Target*)0x0130E480)->sub_B250B0(
		0x00B274E0,
		0,
		(const char*)0x00EC680C,
		(const char*)0x01004E08,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E066B0);
}

class ProgramMemoryCheckerInit265Target
{
public:
	void sub_B25180(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd1e40
void ProgramMemoryCheckerImpl::init265()
{
	int v[2];
	((ProgramMemoryCheckerInit265Target*)0x0130E410)->sub_B25180(
		0x00B28900,
		0,
		(const char*)0x00EC67C4,
		(const char*)0x00EC67B0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E067E0);
}

class ProgramMemoryCheckerInit266Target
{
public:
	void sub_B25180(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd1e80
void ProgramMemoryCheckerImpl::init266()
{
	int v[2];
	((ProgramMemoryCheckerInit266Target*)0x0130E448)->sub_B25180(
		0x00B28A90,
		0,
		(const char*)0x00EC67E4,
		(const char*)0x00EC67B0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E068B0);
}

class ProgramMemoryCheckerInit267Target
{
public:
	void sub_B28F60(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd1f10
void ProgramMemoryCheckerImpl::init267()
{
	int v[2];
	((ProgramMemoryCheckerInit267Target*)0x0130E538)->sub_B28F60(
		0x00AF2A30,
		0,
		(const char*)0x00EC6F00,
		(const char*)0x00EC6EEC,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E06990);
}

class ProgramMemoryCheckerInit268Target
{
public:
	void sub_B2C310(int a1, const char* a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd20b0
void ProgramMemoryCheckerImpl::init268()
{
	int v[2];
	((ProgramMemoryCheckerInit268Target*)0x0130E8BC)->sub_B2C310(
		0x7C,
		(const char*)0x00EC7390,
		(const char*)0x00EC7380,
		(const char*)0x00EC732C,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E06C20);
}

class ProgramMemoryCheckerSubB2BED0Target
{
public:
	void sub_B2BED0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd21e0
void ProgramMemoryCheckerImpl::init269()
{
	int v[2];
	((ProgramMemoryCheckerSubB2BED0Target*)0x0130E788)->sub_B2BED0(
		0x00B32ED0,
		0,
		(const char*)0x00E93DC8,
		(const char*)0x00EC71A8,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E06CB0);
}

class ProgramMemoryCheckerSubB2B940Target
{
public:
	void sub_B2B940(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd23e0
void ProgramMemoryCheckerImpl::init270()
{
	int v[2];
	((ProgramMemoryCheckerSubB2B940Target*)0x0130E828)->sub_B2B940(
		0x00B32D60,
		0,
		(const char*)0x00EC7278,
		(const char*)0x00EC71A8,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E06EB0);
}

class ProgramMemoryCheckerInit271Target
{
public:
	void sub_B2BAC0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd24a0
void ProgramMemoryCheckerImpl::init271()
{
	int v[2];
	((ProgramMemoryCheckerInit271Target*)0x0130E7C0)->sub_B2BAC0(
		0x00B35470,
		0,
		(const char*)0x00EC723C,
		(const char*)0x00EC71A8,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E06FC0);
}

class ProgramMemoryCheckerInit272Target
{
public:
	void sub_B35D40(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd2740
void ProgramMemoryCheckerImpl::init272()
{
	int v[2];
	((ProgramMemoryCheckerInit272Target*)0x0130EB38)->sub_B35D40(
		0x00B36CD0,
		0,
		(const char*)0x00EC7B30,
		(const char*)0x00E7383C,
		2,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E072B0);
}

class ProgramMemoryCheckerInit273Target
{
public:
	void sub_B35FD0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd27d0
void ProgramMemoryCheckerImpl::init273()
{
	int v[2];
	((ProgramMemoryCheckerInit273Target*)0x0130EB70)->sub_B35FD0(
		0x00B37A10,
		0,
		(const char*)0x00EC7B60,
		(const char*)0x00E7383C,
		2,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E073A0);
}

class ProgramMemoryCheckerInit274Target
{
public:
	void sub_BE2250(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd3890
void ProgramMemoryCheckerImpl::init274()
{
	int v[2];
	((ProgramMemoryCheckerInit274Target*)0x0130F818)->sub_BE2250(
		0x00BE9580,
		0,
		(const char*)0x00E8202C,
		(const char*)0x00E83694,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E08590);
}

class ProgramMemoryCheckerInit275Target
{
public:
	void sub_C24C40(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd43f0
void ProgramMemoryCheckerImpl::init275()
{
	int v[2];
	((ProgramMemoryCheckerInit275Target*)0x01310558)->sub_C24C40(
		0x00C2C930,
		0,
		(const char*)0x00E77978,
		(const char*)0x00E5DFD8,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E09220);
}

class ProgramMemoryCheckerInit276Target
{
public:
	void sub_C24C40(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd44d0
void ProgramMemoryCheckerImpl::init276()
{
	int v[2];
	((ProgramMemoryCheckerInit276Target*)0x01310600)->sub_C24C40(
		0x00C36710,
		0,
		(const char*)0x00EEEA7C,
		(const char*)0x00E5DFD8,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E092F0);
}

class ProgramMemoryCheckerInit277Target
{
public:
	void sub_C24AA0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd4510
void ProgramMemoryCheckerImpl::init277()
{
	int v[2];
	((ProgramMemoryCheckerInit277Target*)0x01310118)->sub_C24AA0(
		0x00C30EF0,
		0,
		(const char*)0x00EEEA10,
		(const char*)0x00EEEA08,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E093A0);
}

class ProgramMemoryCheckerInit278Target
{
public:
	void sub_C24C40(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd45d0
void ProgramMemoryCheckerImpl::init278()
{
	int v[2];
	((ProgramMemoryCheckerInit278Target*)0x01310398)->sub_C24C40(
		0x00C2B910,
		0,
		(const char*)0x00EEED18,
		(const char*)0x00E83694,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E09470);
}

class ProgramMemoryCheckerInit279Target
{
public:
	void sub_C24AA0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd4690
void ProgramMemoryCheckerImpl::init279()
{
	int v[2];
	((ProgramMemoryCheckerInit279Target*)0x01310078)->sub_C24AA0(
		0x00C2D9A0,
		0,
		(const char*)0x00EEEB70,
		(const char*)0x00E7383C,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E09580);
}

class ProgramMemoryCheckerSubC24B70Target
{
public:
	void sub_C24B70(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd46d0
void ProgramMemoryCheckerImpl::init280()
{
	int v[2];
	((ProgramMemoryCheckerSubC24B70Target*)0x013102E8)->sub_C24B70(
		0x00C34140,
		0,
		(const char*)0x00EEEBd4,
		(const char*)0x00E9688C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E095F0);
}

class ProgramMemoryCheckerInit281Target
{
public:
	void sub_C24C40(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd4790
void ProgramMemoryCheckerImpl::init281()
{
	int v[2];
	((ProgramMemoryCheckerInit281Target*)0x013103D0)->sub_C24C40(
		0x00AF2B50,
		0,
		(const char*)0x00EEEBAC,
		(const char*)0x00E5DCF8,
		6,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E09840);
}

class ProgramMemoryCheckerInit282Target
{
public:
	void sub_C24C40(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd4850
void ProgramMemoryCheckerImpl::init282()
{
	int v[2];
	((ProgramMemoryCheckerInit282Target*)0x01310150)->sub_C24C40(
		0x00B1B650,
		0,
		(const char*)0x00EEECdc,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E09A10);
}

class ProgramMemoryCheckerInit283Target
{
public:
	void sub_C24C40(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd4890
void ProgramMemoryCheckerImpl::init283()
{
	int v[2];
	((ProgramMemoryCheckerInit283Target*)0x01310320)->sub_C24C40(
		0x00AF2A30,
		0,
		(const char*)0x00EEECEC,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E09AC0);
}

class ProgramMemoryCheckerInit284Target
{
public:
	void sub_C24C40(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd48d0
void ProgramMemoryCheckerImpl::init284()
{
	int v[2];
	((ProgramMemoryCheckerInit284Target*)0x01310498)->sub_C24C40(
		0x00A5D6F0,
		0,
		(const char*)0x00EEECFC,
		(const char*)0x00E5DCF8,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E09B70);
}

class ProgramMemoryCheckerInit285Target
{
public:
	void sub_C24C40(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd4910
void ProgramMemoryCheckerImpl::init285()
{
	int v[2];
	((ProgramMemoryCheckerInit285Target*)0x01310038)->sub_C24C40(
		0x00C36510,
		0,
		(const char*)0x00EEECC8,
		(const char*)0x00EEECC0,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E09C20);
}

class ProgramMemoryCheckerInit286Target
{
public:
	void sub_C3EC80(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5680
void ProgramMemoryCheckerImpl::init286()
{
	int v[2];
	((ProgramMemoryCheckerInit286Target*)0x01312010)->sub_C3EC80(
		0x00C47A30,
		0,
		(const char*)0x00EF054C,
		(const char*)0x00EF0544,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0AAD0);
}

class ProgramMemoryCheckerInit287Target
{
public:
	void sub_C3EBB0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd56c0
void ProgramMemoryCheckerImpl::init287()
{
	int v[2];
	((ProgramMemoryCheckerInit287Target*)0x01311458)->sub_C3EBB0(
		0x00C4A2B0,
		0,
		(const char*)0x00EF0570,
		(const char*)0x00E73878,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0AB40);
}

class ProgramMemoryCheckerSubC3FB70Target
{
public:
	void sub_C3FB70(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5800
void ProgramMemoryCheckerImpl::init288()
{
	int v[2];
	((ProgramMemoryCheckerSubC3FB70Target*)0x01311788)->sub_C3FB70(
		0x00C4B620,
		0,
		(const char*)0x00EF05A0,
		(const char*)0x00E7383C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0ACD0);
}

class ProgramMemoryCheckerInit289Target
{
public:
	void sub_C3FB70(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5840
void ProgramMemoryCheckerImpl::init289()
{
	int v[2];
	((ProgramMemoryCheckerInit289Target*)0x01311B00)->sub_C3FB70(
		0x00C4B770,
		0,
		(const char*)0x00EF0580,
		(const char*)0x00E7383C,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0AD40);
}

class ProgramMemoryCheckerInit290Target
{
public:
	void sub_C3FB70(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5880
void ProgramMemoryCheckerImpl::init290()
{
	int v[2];
	((ProgramMemoryCheckerInit290Target*)0x01311218)->sub_C3FB70(
		0x00C4BA80,
		0,
		(const char*)0x00EF05B4,
		(const char*)0x00EBF4C0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0ADB0);
}

class ProgramMemoryCheckerInit291Target
{
public:
	void sub_C3F280(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5940
void ProgramMemoryCheckerImpl::init291()
{
	int v[2];
	((ProgramMemoryCheckerInit291Target*)0x01311128)->sub_C3F280(
		0x00C4CA30,
		0,
		(const char*)0x00EF0520,
		(const char*)0x00EF0510,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0AE80);
}

class ProgramMemoryCheckerInit292Target
{
public:
	void sub_C3EE20(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5a00
void ProgramMemoryCheckerImpl::init292()
{
	int v[2];
	((ProgramMemoryCheckerInit292Target*)0x01311680)->sub_C3EE20(
		0x00C50C10,
		0,
		(const char*)0x00EF0408,
		(const char*)0x00EF03FC,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0AFB0);
}

class ProgramMemoryCheckerInit293Target
{
public:
	void sub_C3F710(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5a80
void ProgramMemoryCheckerImpl::init293()
{
	int v[2];
	((ProgramMemoryCheckerInit293Target*)0x01310E48)->sub_C3F710(
		0x00C51D40,
		0,
		(const char*)0x00EF03AC,
		(const char*)0x01024D64,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0B090);
}

class ProgramMemoryCheckerInit294Target
{
public:
	void sub_C3F710(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5ac0
void ProgramMemoryCheckerImpl::init294()
{
	int v[2];
	((ProgramMemoryCheckerInit294Target*)0x01311420)->sub_C3F710(
		0x00C51DC0,
		0,
		(const char*)0x00EF0388,
		(const char*)0x01024D64,
		6,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0B100);
}

class ProgramMemoryCheckerInit295Target
{
public:
	void sub_C3FAA0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5c50
void ProgramMemoryCheckerImpl::init295()
{
	int v[2];
	((ProgramMemoryCheckerInit295Target*)0x01310F10)->sub_C3FAA0(
		0x00C4A7E0,
		0,
		(const char*)0x00EF05F8,
		(const char*)0x00EBF4C0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0B2A0);
}

class ProgramMemoryCheckerInit296Target
{
public:
	void sub_C3F8B0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5c90
void ProgramMemoryCheckerImpl::init296()
{
	int v[2];
	((ProgramMemoryCheckerInit296Target*)0x01311F30)->sub_C3F8B0(
		0x00C4A990,
		0,
		(const char*)0x00EF0614,
		(const char*)0x00EBF4C0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0B310);
}

class ProgramMemoryCheckerInit297Target
{
public:
	void sub_C3F7E0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5d50
void ProgramMemoryCheckerImpl::init297()
{
	int v[2];
	((ProgramMemoryCheckerInit297Target*)0x01311718)->sub_C3F7E0(
		0x00C4BCA0,
		0,
		(const char*)0x00EF0208,
		(const char*)0x00E83694,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0B3E0);
}

class ProgramMemoryCheckerInit298Target
{
public:
	void sub_C3EAE0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5e10
void ProgramMemoryCheckerImpl::init298()
{
	int v[2];
	((ProgramMemoryCheckerInit298Target*)0x013110F0)->sub_C3EAE0(
		0x00C4CDB0,
		0,
		(const char*)0x00EF0268,
		(const char*)0x00E83694,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0B4F0);
}

class ProgramMemoryCheckerInit299Target
{
public:
	void sub_C3ED50(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5e50
void ProgramMemoryCheckerImpl::init299()
{
	int v[2];
	((ProgramMemoryCheckerInit299Target*)0x01310E10)->sub_C3ED50(
		0x00C4CED0,
		0,
		(const char*)0x00EF0238,
		(const char*)0x00E83694,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0B5A0);
}

class ProgramMemoryCheckerInit300Target
{
public:
	void sub_C3EA10(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5e90
void ProgramMemoryCheckerImpl::init300()
{
	int v[2];
	((ProgramMemoryCheckerInit300Target*)0x01311750)->sub_C3EA10(
		0x00C4CFE0,
		0,
		(const char*)0x00EF01D8,
		(const char*)0x00E83694,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0B650);
}

class ProgramMemoryCheckerInit301Target
{
public:
	void sub_C3F280(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5ed0
void ProgramMemoryCheckerImpl::init301()
{
	int v[2];
	((ProgramMemoryCheckerInit301Target*)0x01311F68)->sub_C3F280(
		0x00C4FD60,
		0,
		(const char*)0x00EF0130,
		(const char*)0x00E73878,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0B700);
}

class ProgramMemoryCheckerInit302Target
{
public:
	void sub_C3F280(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5f10
void ProgramMemoryCheckerImpl::init302()
{
	int v[2];
	((ProgramMemoryCheckerInit302Target*)0x01311E00)->sub_C3F280(
		0x00C4FF40,
		0,
		(const char*)0x00EF0144,
		(const char*)0x00E73878,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0B7D0);
}

class ProgramMemoryCheckerInit303Target
{
public:
	void sub_C3EFA0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd6190
void ProgramMemoryCheckerImpl::init303()
{
	int v[2];
	((ProgramMemoryCheckerInit303Target*)0x01311610)->sub_C3EFA0(
		0x00C51690,
		0,
		(const char*)0x00EF0AF8,
		(const char*)0x00EF0AEC,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0BB00);
}

class ProgramMemoryCheckerInit304Target
{
public:
	void sub_C3FB70(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd61d0
void ProgramMemoryCheckerImpl::init304()
{
	int v[2];
	((ProgramMemoryCheckerInit304Target*)0x013114F8)->sub_C3FB70(
		0x00C51E60,
		0,
		(const char*)0x00EF00A4,
		(const char*)0x00EF009C,
		4,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0BBB0);
}

class ProgramMemoryCheckerInit305Target
{
public:
	void sub_C79EB0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd94c0
void ProgramMemoryCheckerImpl::init305()
{
	int v[2];
	((ProgramMemoryCheckerInit305Target*)0x01313A98)->sub_C79EB0(
		0x009131D8,
		0,
		(const char*)0x00EF7714,
		(const char*)0x00E5E0A4,
		3,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0D980);
}

class ProgramMemoryCheckerSubCB07E0Target
{
public:
	void sub_CB07E0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7);
};

// FUNCTION: ROBLOXSTUDIO 0x00dda520
void ProgramMemoryCheckerImpl::init306()
{
	int v[2];
	((ProgramMemoryCheckerSubCB07E0Target*)0x01314640)->sub_CB07E0(
		0x00CB7E30,
		0,
		(const char*)0x00EFE2B8,
		(const char*)0x01024D64,
		2,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0E900);
}

class ProgramMemoryCheckerInit199Target
{
public:
	void sub_7AEDA0(int a1, int a2, const char* a3, const char* a4, int a5, int a6);
};

// FUNCTION: ROBLOXSTUDIO 0x00da31a0
void ProgramMemoryCheckerImpl::init199()
{
	int v[2];
	((ProgramMemoryCheckerInit199Target*)0x012E1E98)->sub_7AEDA0(
		0x004A4BD0,
		0,
		(const char*)0x00E553C8,
		(const char*)0x00E553B4,
		(*(unsigned char*)&v[0] = 1, v[0]),
		0x012E1E68
	);
	sub_CF6609((void*)0x00DE32C0);
}

class ProgramMemoryCheckerSub7B8F30Target
{
public:
	void sub_7B8F30(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00da4140
void ProgramMemoryCheckerImpl::init307()
{
	int v[2];
	((ProgramMemoryCheckerSub7B8F30Target*)0x012E3178)->sub_7B8F30(
		0x007BEF50,
		0,
		(const char*)0x00E566B0,
		(const char*)0x00E566A8,
		0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DE44A0);
}

class ProgramMemoryCheckerSub843850Target
{
public:
	void sub_843850(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00dae560
void ProgramMemoryCheckerImpl::init308()
{
	int v[2];
	((ProgramMemoryCheckerSub843850Target*)0x012F87E0)->sub_843850(
		0x00B0ADFA,
		0,
		(const char*)0x00E5DD30,
		(const char*)0x00E5DD24,
		2,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DEA160);
}

class ProgramMemoryCheckerSub8CD9B0Target
{
public:
	void sub_8CD9B0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00db6660
void ProgramMemoryCheckerImpl::init309()
{
	int v[2];
	((ProgramMemoryCheckerSub8CD9B0Target*)0x012FD330)->sub_8CD9B0(
		0x008E3550,
		0,
		(const char*)0x00E700B0,
		(const char*)0x00E2F344,
		0,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF0430);
}

class ProgramMemoryCheckerSub8CD4B0Target
{
public:
	void sub_8CD4B0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00db66a0
void ProgramMemoryCheckerImpl::init310()
{
	int v[2];
	((ProgramMemoryCheckerSub8CD4B0Target*)0x012FD270)->sub_8CD4B0(
		0x008D86E0,
		0,
		(const char*)0x00E70044,
		(const char*)0x00E70030,
		1,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF04A0);
}

class ProgramMemoryCheckerSub92E020Target
{
public:
	void sub_92E020(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbb3a0
void ProgramMemoryCheckerImpl::init311()
{
	int v[2];
	((ProgramMemoryCheckerSub92E020Target*)0x012FF900)->sub_92E020(
		0x00930490,
		0,
		(const char*)0x00E812EC,
		(const char*)0x00E812E4,
		1,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF3890);
}

class ProgramMemoryCheckerSub92E3E0Target
{
public:
	void sub_92E3E0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00dbb4b0
void ProgramMemoryCheckerImpl::init312()
{
	int v[2];
	((ProgramMemoryCheckerSub92E3E0Target*)0x012FF970)->sub_92E3E0(
		0x00931BE0,
		0,
		(const char*)0x00E8133C,
		(const char*)0x00E81330,
		0,
		5,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00DF3970);
}

class ProgramMemoryCheckerInit313Target
{
public:
	void sub_AD5D90(const char* a1, int a2, const char* a3, int a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00dce3d0
void ProgramMemoryCheckerImpl::init313()
{
	int v[2];
	((ProgramMemoryCheckerInit313Target*)0x0130C208)->sub_AD5D90(
		(const char*)0x00EBCBA4,
		0x78,
		(const char*)0x00E97C6C,
		0x00AD6EB0,
		0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E02470);
}

class ProgramMemoryCheckerSubAD7A40Target
{
public:
	void sub_AD7A40(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00dce4d0
void ProgramMemoryCheckerImpl::init314()
{
	int v[2];
	((ProgramMemoryCheckerSubAD7A40Target*)0x0130C350)->sub_AD7A40(
		0x00AD83F0,
		0,
		(const char*)0x00EBCDB8,
		(const char*)0x00EB5F34,
		0,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E026D0);
}

class ProgramMemoryCheckerInit315Target
{
public:
	void sub_C24EA0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd4810
void ProgramMemoryCheckerImpl::init315()
{
	int v[2];
	((ProgramMemoryCheckerInit315Target*)0x01310590)->sub_C24EA0(
		0x00C364C0,
		0,
		(const char*)0x00EEED38,
		(const char*)0x01024CDC,
		0,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E099A0);
}

class ProgramMemoryCheckerSubC3F980Target
{
public:
	void sub_C3F980(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd5b90
void ProgramMemoryCheckerImpl::init316()
{
	int v[2];
	((ProgramMemoryCheckerSubC3F980Target*)0x01311168)->sub_C3F980(
		0x00C4A3F0,
		0,
		(const char*)0x00EF05D8,
		(const char*)0x00EF05CC,
		0x32,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0B1D0);
}

class ProgramMemoryCheckerInit317Target
{
public:
	void sub_C3F5F0(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd6340
void ProgramMemoryCheckerImpl::init317()
{
	int v[2];
	((ProgramMemoryCheckerInit317Target*)0x013118B8)->sub_C3F5F0(
		0x00C4D1C0,
		0,
		(const char*)0x00EF0368,
		(const char*)0x00EF0360,
		1,
		0,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0BCE0);
}

class ProgramMemoryCheckerInit318Target
{
public:
	void sub_C79D90(int a1, int a2, const char* a3, const char* a4, int a5, int a6, int a7, int a8);
};

// FUNCTION: ROBLOXSTUDIO 0x00dd9580
void ProgramMemoryCheckerImpl::init318()
{
	int v[2];
	((ProgramMemoryCheckerInit318Target*)0x01313A60)->sub_C79D90(
		0x00C85CD0,
		0,
		(const char*)0x00EF76C4,
		(const char*)0x00EF76B4,
		0,
		1,
		(*(unsigned char*)&v[0] = 0, v[0]),
		0);
	sub_CF6609((void*)0x00E0DA50);
}

// AUTO-GENERATED IMPLEMENTATIONS


