#include "v8datamodel/ContextActionService.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b11520
struct ContextActionStringData
{
	union
	{
		wchar_t _Buf[8];
		wchar_t* _Ptr;
	} _Bx;
	unsigned int _Mysize;
	unsigned int _Myres;
};

struct ContextActionTreeData
{
	void* _Myhead;
	void* _Erase(void** _Where, void* _First, void* _Last);
};

struct ContextActionServiceData
{
	ContextActionStringData _Name;
	ContextActionTreeData _Tree;
};

ContextActionService::~ContextActionService()
{
	ContextActionServiceData* data = reinterpret_cast<ContextActionServiceData*>(this);
	void* iter;

	data->_Tree._Erase(&iter, *reinterpret_cast<void**>(data->_Tree._Myhead), data->_Tree._Myhead);
	::operator delete(data->_Tree._Myhead);

	if (data->_Name._Myres >= 8)
		::operator delete(data->_Name._Bx._Ptr);

	data->_Name._Myres = 7;
	data->_Name._Mysize = 0;
	data->_Name._Bx._Buf[0] = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
