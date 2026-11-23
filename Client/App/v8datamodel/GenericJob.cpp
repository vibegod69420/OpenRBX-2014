#include "v8datamodel/GenericJob.h"

#include "decomp.h"

namespace RBX {
namespace DataModel {

// FUNCTION: ROBLOXSTUDIO 0x0085fb80
struct GenericJobProgressString
{
	void assign(const char* str, unsigned int len);
};

void GenericJob::setProgress()
{
	reinterpret_cast<GenericJobProgressString*>(reinterpret_cast<char*>(this) + 0xBDC)->assign("[[[progress]]]", 14);
}

// FUNCTION: ROBLOXSTUDIO 0x00860130
void __cdecl GenericJob::initializeState()
{
	int* p = reinterpret_cast<int*>(this);
	p[0] = 1;
	p[1] = 0;
	p[2] = 0;
	p[3] = 0;
}

// FUNCTION: ROBLOXSTUDIO 0x0085fc00
struct GenericJobTask
{
	int type;               // 0x00
	char pad04[0x10];       // 0x04
	unsigned int value14;   // 0x14
	char pad18[0x14];       // 0x18
	unsigned int value2C;   // 0x2C
	char pad30[0x08];       // 0x30
	unsigned int value38;   // 0x38
	char pad3C[0x34];       // 0x3C
};

unsigned int GenericJob::getDataModelProgress()
{
	GenericJobTask* cur = *reinterpret_cast<GenericJobTask**>(reinterpret_cast<char*>(this));
	unsigned int acc = *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x3C);
	GenericJobTask* end = *reinterpret_cast<GenericJobTask**>(reinterpret_cast<char*>(this) + 4);
	int count = end - cur;

	if (count != 0)
	{
		do
		{
			acc += cur->value14;
			if (cur->type == -2)
			{
				unsigned int cap = cur->value38;
				const unsigned int& chosen = (acc < cap) ? cap : acc;
				acc = chosen;
			}
			acc += cur->value2C;
			++cur;
			--count;
		}
		while (count != 0);
	}

	return acc;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace DataModel
} // namespace RBX
