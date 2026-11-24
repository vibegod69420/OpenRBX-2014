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

struct ObjectExporterBuffer
{
	void* begin;
	void* end;
	void* cap;

	__declspec(dllimport) void destroyEntries();
};

struct ObjectExporterLayout
{
	ObjectExporterBuffer buf0;
	ObjectExporterBuffer buf1;
	char strBuf[16];
	unsigned int strSize;
	unsigned int strCap;
};

// FUNCTION: ROBLOXSTUDIO 0x0066d3d0
void ObjectExporter::flush()
{
	ObjectExporterLayout* self = (ObjectExporterLayout*)this;

	if (self->strCap >= 0x10)
	{
		::operator delete(*(void**)self->strBuf);
	}
	self->strCap = 0x0f;
	self->strSize = 0;
	self->strBuf[0] = 0;

	if (self->buf1.begin)
	{
		self->buf1.destroyEntries();
		::operator delete(self->buf1.begin);
		self->buf1.begin = 0;
		self->buf1.end = 0;
		self->buf1.cap = 0;
	}

	if (self->buf0.begin)
	{
		self->buf0.destroyEntries();
		::operator delete(self->buf0.begin);
		self->buf0.begin = 0;
		self->buf0.end = 0;
		self->buf0.cap = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace Graphics
} // namespace RBX
