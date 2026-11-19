#include "v8datamodel/sp_counted_impl_pd.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0040dfd0
const int* sp_counted_impl_pd::getMemberPtr10() const
{
	return &member_0010;
}

class sp_counted_impl_pd_state
{
public:
	void destroy();
};

// FUNCTION: ROBLOXSTUDIO 0x007a29f0
void sp_counted_impl_pd::dispose()
{
	if (*(unsigned char*)&member_0010)
	{
		((sp_counted_impl_pd_state*)(&member_0010 + 1))->destroy();
		*(unsigned char*)&member_0010 = 0;
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
