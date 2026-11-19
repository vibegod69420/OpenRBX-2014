#include "v8datamodel/filtering_stream.h"

#include "decomp.h"

namespace std {

class filtering_stream_buffer
{
public:
	char _pad[0x40];
	unsigned char active; // 0x40

	void clear(); // 0xa2bde0
};

// FUNCTION: ROBLOXSTUDIO 0x00a2cb70
void filtering_stream::reset()
{
	filtering_stream_buffer* buffer = (filtering_stream_buffer*)_vtable_or_head;
	if (buffer->active)
	{
		buffer->clear();
		buffer->active = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
