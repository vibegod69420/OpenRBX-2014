#include "v8datamodel/VehicleController.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x009b46c0

struct _RBX_StringRep
{
	union
	{
		char _Buf[16];
		char* _Ptr;
	} _Bx;
	unsigned int _Mysize;
	unsigned int _Myres;
};

class _RBX_Sub20
{
public:
	void* _Myhead;
	unsigned int _Mysize;
	void clear();
};

VehicleController::~VehicleController()
{
	_RBX_StringRep* str = *(_RBX_StringRep**)((char*)this + 0x34);
	if (str)
	{
		if (str->_Myres >= 0x10)
		{
			::operator delete(str->_Bx._Ptr);
		}

		str->_Myres = 0x0F;
		str->_Mysize = 0;
		str->_Bx._Buf[0] = 0;
		::operator delete(str);
	}

	::operator delete(*(void**)((char*)this + 0x30));

	((_RBX_Sub20*)((char*)this + 0x20))->clear();
	::operator delete(*(void**)((char*)this + 0x20));

	*(void**)this = (void*)0x00E33A28;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
