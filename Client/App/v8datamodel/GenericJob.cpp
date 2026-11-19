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

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace DataModel
} // namespace RBX
