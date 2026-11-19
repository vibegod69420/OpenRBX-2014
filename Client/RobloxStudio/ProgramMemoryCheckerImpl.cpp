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

// AUTO-GENERATED IMPLEMENTATIONS


