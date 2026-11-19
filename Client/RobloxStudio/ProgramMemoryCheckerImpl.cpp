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

// AUTO-GENERATED IMPLEMENTATIONS


