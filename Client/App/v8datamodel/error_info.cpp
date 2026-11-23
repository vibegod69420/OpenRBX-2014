#include "v8datamodel/error_info.h"

#include "decomp.h"

namespace boost {

// FUNCTION: ROBLOXSTUDIO 0x00955b30
namespace {

struct error_info_release_helper
{
	void do_release(void*, void*, void*);
};

} // anonymous namespace

bool error_info::release()
{
	char* const self = reinterpret_cast<char*>(this);
	int& refcount = *reinterpret_cast<int*>(self + 0x24);
	if (--refcount != 0)
		return false;

	*reinterpret_cast<int*>(self) = 0x00E84520;

	unsigned int& capacity = *reinterpret_cast<unsigned int*>(self + 0x20);
	if (capacity >= 0x10u)
	{
		::operator delete(*reinterpret_cast<void**>(self + 0x0C));
	}
	capacity = 0x0Fu;
	*reinterpret_cast<unsigned int*>(self + 0x1C) = 0u;
	self[0x0C] = 0;

	void* const p = *reinterpret_cast<void**>(self + 4);
	void* local;
	reinterpret_cast<error_info_release_helper*>(self + 4)->do_release(
		&local,
		*reinterpret_cast<void**>(p),
		p);

	::operator delete(*reinterpret_cast<void**>(self + 4));

	*reinterpret_cast<int*>(self) = 0x00E844E0;
	::operator delete(this);
	return true;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace boost
