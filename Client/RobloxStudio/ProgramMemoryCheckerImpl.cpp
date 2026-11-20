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

// AUTO-GENERATED IMPLEMENTATIONS


