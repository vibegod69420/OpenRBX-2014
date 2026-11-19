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

struct sp_counted_impl_pd_scalar_deleting_dtor
{
	virtual void* destroy(unsigned int);
};

// FUNCTION: ROBLOXSTUDIO 0x00412e50
void sp_counted_impl_pd::destroy()
{
	if (this)
	{
		((sp_counted_impl_pd_scalar_deleting_dtor*)this)->destroy(1);
	}
}

struct sp_counted_impl_pd_double_getter
{
	double* (*func)(void*);
	void* arg;
};

// FUNCTION: ROBLOXSTUDIO 0x0067e4d0
double __cdecl sp_counted_impl_pd::getDouble()
{
	sp_counted_impl_pd_double_getter* getter = (sp_counted_impl_pd_double_getter*)this;
	return *getter->func(getter->arg);
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
