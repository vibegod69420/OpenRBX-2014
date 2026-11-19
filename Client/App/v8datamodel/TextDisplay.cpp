#include "v8datamodel/TextDisplay.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00575a80
int TextDisplay::getField90() const
{
	return field_0090;
}

// FUNCTION: ROBLOXSTUDIO 0x0092ac60
bool TextDisplay::getFlagB8() const
{
	return flag_00b8;
}

struct TextDisplayStringData
{
	union
	{
		char _Buf[16];
		char* _Ptr;
	};
	unsigned int _Mysize;
	unsigned int _Myres;
};

// FUNCTION: ROBLOXSTUDIO 0x00574ce0
TextDisplay::~TextDisplay()
{
	typedef void (__cdecl *DeallocFunc)(void*);
	DeallocFunc dealloc = *(DeallocFunc*)0x00E10508;

	TextDisplayStringData* str;

	str = (TextDisplayStringData*)((char*)this + 0x48);
	if (str->_Myres >= 0x10)
		dealloc(str->_Ptr);
	str->_Myres = 0x0F;
	str->_Mysize = 0;
	str->_Buf[0] = 0;

	str = (TextDisplayStringData*)((char*)this + 0x18);
	if (str->_Myres >= 0x10)
		dealloc(str->_Ptr);
	str->_Myres = 0x0F;
	str->_Mysize = 0;
	str->_Buf[0] = 0;

	str = (TextDisplayStringData*)((char*)this + 0x00);
	if (str->_Myres >= 0x10)
		dealloc(str->_Ptr);
	str->_Myres = 0x0F;
	str->_Mysize = 0;
	str->_Buf[0] = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
