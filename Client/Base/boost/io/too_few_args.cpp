#include "../boost_errors.h"

namespace boost {
namespace io {

// FUNCTION: ROBLOXSTUDIO 0x00860c40
const char* too_few_args::what() const
{
	return "boost::too_few_args: format-string referred to more arguments than were passed";
}

} // namespace io
} // namespace boost
