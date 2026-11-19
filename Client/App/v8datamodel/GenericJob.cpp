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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace DataModel
} // namespace RBX
