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

// AUTO-GENERATED IMPLEMENTATIONS


