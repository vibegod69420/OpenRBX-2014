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

// AUTO-GENERATED IMPLEMENTATIONS


