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

// FUNCTION: ROBLOXSTUDIO 0x00b2d3c0
struct ContextActionBoundString
{
	union
	{
		char _Buf[16];
		char* _Ptr;
	} _Bx;
	unsigned int _Mysize;
	unsigned int _Myres;
};

struct ContextActionBoundTree
{
	void* _Myhead;
	void _Tidy();
};

void ContextActionService::unbindAllActions()
{
	::operator delete(*reinterpret_cast<void**>(reinterpret_cast<char*>(this) + 0x34));

	ContextActionBoundString* boundString = *reinterpret_cast<ContextActionBoundString**>(reinterpret_cast<char*>(this) + 0x30);
	if (boundString)
	{
		if (boundString->_Myres >= 0x10)
			::operator delete(boundString->_Bx._Ptr);

		boundString->_Myres = 0x0F;
		boundString->_Mysize = 0;
		boundString->_Bx._Buf[0] = 0;
		::operator delete(boundString);
	}

	ContextActionBoundTree* boundTree = reinterpret_cast<ContextActionBoundTree*>(reinterpret_cast<char*>(this) + 0x20);
	boundTree->_Tidy();
	::operator delete(boundTree->_Myhead);

	*reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0x00E33A28);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
