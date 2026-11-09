#include "v8tree/Instance.h"

#include "decomp.h"

namespace RBX {

// FUNCTION: ROBLOXSTUDIO 0x0059ab40
const int* Instance::getMemberPtr40() const
{
	return &member_0040;
}

// FUNCTION: ROBLOXSTUDIO 0x00851020
bool Instance::getFlag0C() const
{
	return flag_000c;
}

// FUNCTION: ROBLOXSTUDIO 0x008510f0
bool Instance::getFlag0D() const
{
	return flag_000d;
}

// FUNCTION: ROBLOXSTUDIO 0x00c81470
bool Instance::getFlag58() const
{
	return flag_0058;
}

// FUNCTION: ROBLOXSTUDIO 0x00c81ba0
const int* Instance::getMemberPtr3C() const
{
	return &member_003c;
}

// FUNCTION: ROBLOXSTUDIO 0x00427540
int Instance::getConst16797656() const
{
	return 16797656;
}

// FUNCTION: ROBLOXSTUDIO 0x00427550
int Instance::getConst16797664() const
{
	return 16797664;
}

// FUNCTION: ROBLOXSTUDIO 0x006b89b0
int Instance::getConst14956404() const
{
	return 14956404;
}

// FUNCTION: ROBLOXSTUDIO 0x00787f90
int Instance::getConst19652792() const
{
	return 19652792;
}

// FUNCTION: ROBLOXSTUDIO 0x00788400
int Instance::getConst15005704() const
{
	return 15005704;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da00
int Instance::getConst19190364() const
{
	return 19190364;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da10
int Instance::getConst19190288() const
{
	return 19190288;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da20
int Instance::getConst19190392() const
{
	return 19190392;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da30
int Instance::getConst19190592() const
{
	return 19190592;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da40
int Instance::getConst19190512() const
{
	return 19190512;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da50
int Instance::getConst19190472() const
{
	return 19190472;
}

// FUNCTION: ROBLOXSTUDIO 0x00a320c0
int Instance::getConst19196136() const
{
	return 19196136;
}

// FUNCTION: ROBLOXSTUDIO 0x00c81bb0
int Instance::getConst19553048() const
{
	return 19553048;
}

// FUNCTION: ROBLOXSTUDIO 0x00c81bc0
int Instance::getConst19554176() const
{
	return 19554176;
}

// FUNCTION: ROBLOXSTUDIO 0x00c637a0
void Instance::freeMember0C()
{
	rbx_free_mem(alloc_000c);
}

// FUNCTION: ROBLOXSTUDIO 0x00a30bb0
void Instance::setField40(int value)
{
	field_0040 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00a30bc0
void Instance::setField48(int value)
{
	field_0048 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00c909f0
void Instance::setFlag58(bool value)
{
	flag_0058 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00a30ba0
void Instance::setFieldD0(int value)
{
	field_00d0 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x00427650
RbxPairInt* Instance::makePair(RbxPairInt* out, int firstVal)
{
	out->first = firstVal;
	out->second = (int)this;
	return out;
}

// FUNCTION: ROBLOXSTUDIO 0x0045f4a0
void Instance::deleteObject(RbxVDelBase* p)
{
	if (p)
		delete p;
}

// FUNCTION: ROBLOXSTUDIO 0x006b7c50
void Instance::destroySubPtr0C()
{
	Instance* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00955080
void Instance::destroySubPtr0C_slot1()
{
	Instance* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da60
void Instance::destroySubPtr0C_da60()
{
	Instance* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00a2da80
void Instance::destroySubPtr0C_da80()
{
	Instance* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00b771a0
void Instance::destroySubPtr0C_71a0()
{
	Instance* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00c2f620
void Instance::destroySubPtr0C_f620()
{
	Instance* p = ptr_000c;
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00775320
int Instance::getConst18739520() const
{
	return 18739520;
}

// FUNCTION: ROBLOXSTUDIO 0x0077b120
int Instance::getGlobal_b120() const
{
	return s_value_0077b120;
}

// FUNCTION: ROBLOXSTUDIO 0x0077b130
int Instance::getGlobal_b130() const
{
	return s_value_0077b130;
}

// FUNCTION: ROBLOXSTUDIO 0x00c862e0
int Instance::getField2198() const
{
	return field_2198;
}

// FUNCTION: ROBLOXSTUDIO 0x00c364c0
void Instance::setField190(int value)
{
	field_0190 = value;
}

// FUNCTION: ROBLOXSTUDIO 0x0078a110
void Instance::destroyInstance(Instance* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00b740c0
void Instance::destroyInstance_40c0(Instance* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x00c93a10
void Instance::destroyInstance_3a10(Instance* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

// FUNCTION: ROBLOXSTUDIO 0x006b7340
void* Instance::scalarDeletingDestructor(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x007855b0
void* Instance::scalarDeletingDestructor_55b0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x007856a0
void* Instance::scalarDeletingDestructor_slot1(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d0c0
void* Instance::scalarDeletingDestructor_slot0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d0f0
void* Instance::scalarDeletingDestructor_d0f0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d120
void* Instance::scalarDeletingDestructor_d120(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d150
void* Instance::scalarDeletingDestructor_d150(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d180
void* Instance::scalarDeletingDestructor_d180(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00a2d1b0
void* Instance::scalarDeletingDestructor_d1b0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00a32090
void* Instance::scalarDeletingDestructor_2090(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00c7e790
void* Instance::scalarDeletingDestructor_e790(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00c7e890
void* Instance::scalarDeletingDestructor_e890(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00c7e8c0
void* Instance::scalarDeletingDestructor_e8c0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00c7e8f0
void* Instance::scalarDeletingDestructor_e8f0(unsigned int flags)
{
	onDestroy();
	if (flags & 1)
		rbx_free_mem(this);
	return this;
}

// FUNCTION: ROBLOXSTUDIO 0x00c90a00
void Instance::setField80(int value)
{
	field_0080 = value;
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace RBX
