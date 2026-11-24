#include "v8datamodel/DataModel.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00857ca0
bool DataModel::getFlagB68() const
{
	return flag_0b68;
}

// FUNCTION: ROBLOXSTUDIO 0x00856210
DataModel* DataModel::getDataModel()
{
	return (char*)this - 0xA0 ? this : 0;
}

// FUNCTION: ROBLOXSTUDIO 0x007453c0
int DataModel::getZero() const
{
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00857d10
bool DataModel::isStateValid() const
{
	const int* state = reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x64);
	return state[0] == 8 && state[1] == 2;
}

struct DataModelBdcMember
{
	void dispatch(int, int);
};

// FUNCTION: ROBLOXSTUDIO 0x0084dd30
void DataModel::dispatchBdcMember()
{
	reinterpret_cast<DataModelBdcMember*>(reinterpret_cast<char*>(this) + 0xBDC)->dispatch(0x00F12F2D, 0);
}

// FUNCTION: ROBLOXSTUDIO 0x0085ac00
void __cdecl DataModel::initData()
{
	int* data = reinterpret_cast<int*>(this);
	data[0] = 0;
	data[1] = 0;
	data[2] = 0;
	data[3] = 0;
}

struct DataModelNetworkStats
{
	int getNetworkStats0();
	int getNetworkStats1();
	int getNetworkStats2();
	int getNetworkStats3();
};

// FUNCTION: ROBLOXSTUDIO 0x0085ac30
int DataModel::getNetworkStatsTotal()
{
	DataModelNetworkStats* stats = reinterpret_cast<DataModelNetworkStats*>(this);
	int total = stats->getNetworkStats0();
	total += stats->getNetworkStats1();
	total += stats->getNetworkStats2();
	return total + stats->getNetworkStats3();
}

// FUNCTION: ROBLOXSTUDIO 0x0085d450
struct DataModelIntrusiveNode
{
	void* prev;   // 0x00
	int* count;   // 0x04
	void* next;   // 0x08

	bool isLinked();
};

extern unsigned char gDataModelAssertEnabled; // 0x012DE657
typedef unsigned char (__cdecl *DataModelAssertCallback)(const char*, const char*, int);
extern DataModelAssertCallback gDataModelAssertCallback; // 0x012DE694
void __cdecl RBXAssert(int, const char*); // 0x006B9740

void DataModel::unlinkIntrusive()
{
	DataModelIntrusiveNode* node = reinterpret_cast<DataModelIntrusiveNode*>(this);
	if (!node->isLinked())
		return;

	unsigned char flag = gDataModelAssertEnabled;
	if (flag)
	{
		if (node->next == 0 && node->prev == 0)
		{
			DataModelAssertCallback cb = gDataModelAssertCallback;
			if (cb)
			{
				if (cb(
						"prev!=0 || Set::NextRef::next!=0",
						"D:\\BuildAgent\\work\\Trunk2012\\Client\\Base\\include\\RBX/Intrusive/Set.h",
						72))
					goto skipAssert;
				flag = gDataModelAssertEnabled;
			}
			RBXAssert(flag, "prev!=0 || Set::NextRef::next!=0 file: D:\\BuildAgent\\work\\Trunk2012\\Client\\Base\\include\\RBX/Intrusive/Set.h line: 72");
		skipAssert:
			;
		}
	}

	if (node->next)
		*(void**)node->next = node->prev;

	if (node->prev)
		*(void**)((char*)node->prev + 0xD0) = node->next;

	--(*node->count);

	node->prev = 0;
	node->next = 0;
	node->count = 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00857950
void __cdecl DataModel::dispatchGetImpl()
{
	char* obj = *(char**)this;
	unsigned char flag = *(unsigned char*)(obj + 0x30);
	char* target = obj + 8;
	(*(void (__cdecl **)(char*, int, unsigned char))obj)(target, *(int*)(target + 0x20), flag);
}

} // namespace RBX
#include <new>
namespace RBX {

struct DataModelLocalString
{
	union
	{
		char buf[16];
		char* ptr;
	};
	unsigned int size;
	unsigned int capacity;
};

struct DataModelGetImplStringHelper
{
	void get(DataModelLocalString* out);
};

// FUNCTION: ROBLOXSTUDIO 0x008578f0
void __cdecl DataModel::dispatchGetImplString()
{
	DataModelLocalString s;
	(*(DataModelGetImplStringHelper**)this)->get(&s);
	if (s.capacity >= 0x10)
		::operator delete(s.ptr);
}

// FUNCTION: ROBLOXSTUDIO 0x00857920
void __cdecl DataModel::dispatchGetImplStringValue()
{
	DataModelLocalString s;
	(*(DataModelGetImplStringHelper**)this)->get(&s);
	if (s.capacity >= 0x10)
		::operator delete(s.ptr);
}

struct DataModelVtableSlot0
{
	virtual void call(int);
};

// FUNCTION: ROBLOXSTUDIO 0x007d6e40
void __cdecl DataModel::callVtableSlot0()
{
	reinterpret_cast<DataModelVtableSlot0*>(this)->call(0);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
