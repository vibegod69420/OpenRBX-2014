#include "v8kernel/Kernel.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x00b530d0
int Kernel::getConst15() const
{
	return 15;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53510
int Kernel::getSubField24_34() const
{
	return sub_0024_34->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53530
int Kernel::getSubField24_04() const
{
	return sub_0024_04->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53540
int Kernel::getSubField24_64() const
{
	return sub_0024_64->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53550
int Kernel::getSubField24_24() const
{
	return sub_0024_24->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53570
int Kernel::getSubField24_44() const
{
	return sub_0024_44->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53580
int Kernel::getSubField24_54() const
{
	return sub_0024_54->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53590
int Kernel::getSubField24_14() const
{
	return sub_0024_14->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b535b0
int Kernel::getSubField24_74() const
{
	return sub_0024_74->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53520
int Kernel::getSubField24_A4() const
{
	return sub_0024_00a4->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b53560
int Kernel::getSubField24_94() const
{
	return sub_0024_0094->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b535a0
int Kernel::getSubField24_84() const
{
	return sub_0024_0084->val;
}

// FUNCTION: ROBLOXSTUDIO 0x00b534f0
int Kernel::getSubField24_A4_94_84_74() const
{
	Sub_Kernel_24_00a4* p = sub_0024_00a4;
	return p->val
		+ ((Sub_Kernel_24_0094*)p)->val
		+ ((Sub_Kernel_24_0084*)p)->val
		+ ((Sub_Kernel_24_74*)p)->val;
}

extern int** g_kernelValueRangeBegin;
extern int** g_kernelValueRangeEnd;

// FUNCTION: ROBLOXSTUDIO 0x00b557c0
int Kernel::getAccumulatedKernelValue()
{
    int** it = g_kernelValueRangeBegin;
    int** end = g_kernelValueRangeEnd;
    int sum = 0;
    while (it != end)
    {
        sum += **it;
        ++it;
    }
    return sum;
}

struct KernelStateView_00B55350
{
	char pad[0xF0];
	int m_f0;
	int m_f4;
	int m_f8;
	int m_fC;
};

// FUNCTION: ROBLOXSTUDIO 0x00b55350
int Kernel::getKernelEndStateCountValid() const
{
	KernelStateView_00B55350* view = (KernelStateView_00B55350*)this;
	int count = (view->m_fC >= 0);
	count += (view->m_f8 >= 0);
	count += (view->m_f4 >= 0);
	count += (view->m_f0 >= 0);
	return count <= 1;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
