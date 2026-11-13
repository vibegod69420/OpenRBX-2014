#include "../boost_errors.h"

namespace boost {
namespace io {

// FUNCTION: ROBLOXSTUDIO 0x00860c50
const char* too_many_args::what() const
{
	return "boost::too_many_args: format-string referred to less arguments than were passed";
}

} // namespace io
} // namespace boost
