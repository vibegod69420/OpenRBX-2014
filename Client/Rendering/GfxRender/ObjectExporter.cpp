#include "ObjectExporter.h"

#include "decomp.h"

namespace RBX {
namespace Graphics {

struct ObjectExporterEntry
{
	char data[0x34];
	void destroy();
};

extern "C" __declspec(dllimport) void ObjectExporter_ClearNotify(void);

// FUNCTION: ROBLOXSTUDIO 0x0066da40
void ObjectExporter::clear()
{
	if (*(ObjectExporterEntry**)this)
	{
		ObjectExporter_ClearNotify();

		ObjectExporterEntry* end = *((ObjectExporterEntry**)this + 1);
		ObjectExporterEntry* it = *(ObjectExporterEntry**)this;
		for (; it != end; ++it)
			it->destroy();

		::operator delete(*(void**)this);
		*(ObjectExporterEntry**)this = 0;
		*((ObjectExporterEntry**)this + 1) = 0;
		*((ObjectExporterEntry**)this + 2) = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
