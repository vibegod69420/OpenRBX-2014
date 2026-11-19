#include "Roblox.h"

#include "decomp.h"



struct RobloxString
{
	union
	{
		char _Buf[16];
		char* _Ptr;
	} _Bx;
	unsigned int _Mysize;
	unsigned int _Myres;
};

// FUNCTION: ROBLOXSTUDIO 0x00496f30
void Roblox::sub_496F30()
{
	typedef void (__cdecl *DeallocFunc)(void*);
	DeallocFunc dealloc = *(DeallocFunc*)0x00E10508;

	RobloxString* str = (RobloxString*)((char*)this + 0x34);
	if (str->_Myres >= 0x10)
		dealloc(str->_Bx._Ptr);
	str->_Myres = 0x0F;
	str->_Mysize = 0;
	str->_Bx._Buf[0] = 0;

	str = (RobloxString*)((char*)this + 0x1C);
	if (str->_Myres >= 0x10)
		dealloc(str->_Bx._Ptr);
	str->_Myres = 0x0F;
	str->_Mysize = 0;
	str->_Bx._Buf[0] = 0;

	str = (RobloxString*)((char*)this + 0x04);
	if (str->_Myres >= 0x10)
		dealloc(str->_Bx._Ptr);
	str->_Myres = 0x0F;
	str->_Mysize = 0;
	str->_Bx._Buf[0] = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS


