// Scalar deleting destructors: call the class destructor, then operator
// delete when the low flag bit is set, returning the object pointer.
// The destructor bodies live at the callee addresses and are not part of
// this reconstruction; only the deleting-destructor shape is proven here.

extern "C" __declspec(dllimport) void __cdecl deleteObject(void*);

struct DeletingDtor_00404490 { virtual ~DeletingDtor_00404490(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00404490
void* DeletingDtor_00404490::destroy(int flags)
{
	this->DeletingDtor_00404490::~DeletingDtor_00404490();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00404680 { virtual ~DeletingDtor_00404680(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00404680
void* DeletingDtor_00404680::destroy(int flags)
{
	this->DeletingDtor_00404680::~DeletingDtor_00404680();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00404820 { virtual ~DeletingDtor_00404820(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00404820
void* DeletingDtor_00404820::destroy(int flags)
{
	this->DeletingDtor_00404820::~DeletingDtor_00404820();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004049c0 { virtual ~DeletingDtor_004049c0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004049c0
void* DeletingDtor_004049c0::destroy(int flags)
{
	this->DeletingDtor_004049c0::~DeletingDtor_004049c0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00404b60 { virtual ~DeletingDtor_00404b60(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00404b60
void* DeletingDtor_00404b60::destroy(int flags)
{
	this->DeletingDtor_00404b60::~DeletingDtor_00404b60();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00405060 { virtual ~DeletingDtor_00405060(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00405060
void* DeletingDtor_00405060::destroy(int flags)
{
	this->DeletingDtor_00405060::~DeletingDtor_00405060();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00408870 { virtual ~DeletingDtor_00408870(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00408870
void* DeletingDtor_00408870::destroy(int flags)
{
	this->DeletingDtor_00408870::~DeletingDtor_00408870();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0040ea80 { virtual ~DeletingDtor_0040ea80(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0040ea80
void* DeletingDtor_0040ea80::destroy(int flags)
{
	this->DeletingDtor_0040ea80::~DeletingDtor_0040ea80();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0040f3e0 { virtual ~DeletingDtor_0040f3e0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0040f3e0
void* DeletingDtor_0040f3e0::destroy(int flags)
{
	this->DeletingDtor_0040f3e0::~DeletingDtor_0040f3e0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004117b0 { virtual ~DeletingDtor_004117b0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004117b0
void* DeletingDtor_004117b0::destroy(int flags)
{
	this->DeletingDtor_004117b0::~DeletingDtor_004117b0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00416b50 { virtual ~DeletingDtor_00416b50(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00416b50
void* DeletingDtor_00416b50::destroy(int flags)
{
	this->DeletingDtor_00416b50::~DeletingDtor_00416b50();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00427bf0 { virtual ~DeletingDtor_00427bf0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00427bf0
void* DeletingDtor_00427bf0::destroy(int flags)
{
	this->DeletingDtor_00427bf0::~DeletingDtor_00427bf0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00427de0 { virtual ~DeletingDtor_00427de0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00427de0
void* DeletingDtor_00427de0::destroy(int flags)
{
	this->DeletingDtor_00427de0::~DeletingDtor_00427de0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0042fb30 { virtual ~DeletingDtor_0042fb30(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0042fb30
void* DeletingDtor_0042fb30::destroy(int flags)
{
	this->DeletingDtor_0042fb30::~DeletingDtor_0042fb30();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0043eae0 { virtual ~DeletingDtor_0043eae0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0043eae0
void* DeletingDtor_0043eae0::destroy(int flags)
{
	this->DeletingDtor_0043eae0::~DeletingDtor_0043eae0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00442350 { virtual ~DeletingDtor_00442350(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00442350
void* DeletingDtor_00442350::destroy(int flags)
{
	this->DeletingDtor_00442350::~DeletingDtor_00442350();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004438b0 { virtual ~DeletingDtor_004438b0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004438b0
void* DeletingDtor_004438b0::destroy(int flags)
{
	this->DeletingDtor_004438b0::~DeletingDtor_004438b0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00445600 { virtual ~DeletingDtor_00445600(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00445600
void* DeletingDtor_00445600::destroy(int flags)
{
	this->DeletingDtor_00445600::~DeletingDtor_00445600();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0044e4f0 { virtual ~DeletingDtor_0044e4f0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0044e4f0
void* DeletingDtor_0044e4f0::destroy(int flags)
{
	this->DeletingDtor_0044e4f0::~DeletingDtor_0044e4f0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0044ef60 { virtual ~DeletingDtor_0044ef60(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0044ef60
void* DeletingDtor_0044ef60::destroy(int flags)
{
	this->DeletingDtor_0044ef60::~DeletingDtor_0044ef60();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0044fc00 { virtual ~DeletingDtor_0044fc00(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0044fc00
void* DeletingDtor_0044fc00::destroy(int flags)
{
	this->DeletingDtor_0044fc00::~DeletingDtor_0044fc00();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004511e0 { virtual ~DeletingDtor_004511e0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004511e0
void* DeletingDtor_004511e0::destroy(int flags)
{
	this->DeletingDtor_004511e0::~DeletingDtor_004511e0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004554f0 { virtual ~DeletingDtor_004554f0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004554f0
void* DeletingDtor_004554f0::destroy(int flags)
{
	this->DeletingDtor_004554f0::~DeletingDtor_004554f0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00457f30 { virtual ~DeletingDtor_00457f30(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00457f30
void* DeletingDtor_00457f30::destroy(int flags)
{
	this->DeletingDtor_00457f30::~DeletingDtor_00457f30();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0045c670 { virtual ~DeletingDtor_0045c670(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0045c670
void* DeletingDtor_0045c670::destroy(int flags)
{
	this->DeletingDtor_0045c670::~DeletingDtor_0045c670();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0045d9d0 { virtual ~DeletingDtor_0045d9d0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0045d9d0
void* DeletingDtor_0045d9d0::destroy(int flags)
{
	this->DeletingDtor_0045d9d0::~DeletingDtor_0045d9d0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00460e40 { virtual ~DeletingDtor_00460e40(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00460e40
void* DeletingDtor_00460e40::destroy(int flags)
{
	this->DeletingDtor_00460e40::~DeletingDtor_00460e40();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00461ea0 { virtual ~DeletingDtor_00461ea0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00461ea0
void* DeletingDtor_00461ea0::destroy(int flags)
{
	this->DeletingDtor_00461ea0::~DeletingDtor_00461ea0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004623e0 { virtual ~DeletingDtor_004623e0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004623e0
void* DeletingDtor_004623e0::destroy(int flags)
{
	this->DeletingDtor_004623e0::~DeletingDtor_004623e0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00467fb0 { virtual ~DeletingDtor_00467fb0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00467fb0
void* DeletingDtor_00467fb0::destroy(int flags)
{
	this->DeletingDtor_00467fb0::~DeletingDtor_00467fb0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004702f0 { virtual ~DeletingDtor_004702f0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004702f0
void* DeletingDtor_004702f0::destroy(int flags)
{
	this->DeletingDtor_004702f0::~DeletingDtor_004702f0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004709f0 { virtual ~DeletingDtor_004709f0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004709f0
void* DeletingDtor_004709f0::destroy(int flags)
{
	this->DeletingDtor_004709f0::~DeletingDtor_004709f0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0047ab20 { virtual ~DeletingDtor_0047ab20(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0047ab20
void* DeletingDtor_0047ab20::destroy(int flags)
{
	this->DeletingDtor_0047ab20::~DeletingDtor_0047ab20();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0047ade0 { virtual ~DeletingDtor_0047ade0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0047ade0
void* DeletingDtor_0047ade0::destroy(int flags)
{
	this->DeletingDtor_0047ade0::~DeletingDtor_0047ade0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0047d270 { virtual ~DeletingDtor_0047d270(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0047d270
void* DeletingDtor_0047d270::destroy(int flags)
{
	this->DeletingDtor_0047d270::~DeletingDtor_0047d270();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00490510 { virtual ~DeletingDtor_00490510(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00490510
void* DeletingDtor_00490510::destroy(int flags)
{
	this->DeletingDtor_00490510::~DeletingDtor_00490510();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00490540 { virtual ~DeletingDtor_00490540(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00490540
void* DeletingDtor_00490540::destroy(int flags)
{
	this->DeletingDtor_00490540::~DeletingDtor_00490540();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00490570 { virtual ~DeletingDtor_00490570(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00490570
void* DeletingDtor_00490570::destroy(int flags)
{
	this->DeletingDtor_00490570::~DeletingDtor_00490570();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004905a0 { virtual ~DeletingDtor_004905a0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004905a0
void* DeletingDtor_004905a0::destroy(int flags)
{
	this->DeletingDtor_004905a0::~DeletingDtor_004905a0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004905d0 { virtual ~DeletingDtor_004905d0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004905d0
void* DeletingDtor_004905d0::destroy(int flags)
{
	this->DeletingDtor_004905d0::~DeletingDtor_004905d0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00495a50 { virtual ~DeletingDtor_00495a50(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00495a50
void* DeletingDtor_00495a50::destroy(int flags)
{
	this->DeletingDtor_00495a50::~DeletingDtor_00495a50();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00496030 { virtual ~DeletingDtor_00496030(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00496030
void* DeletingDtor_00496030::destroy(int flags)
{
	this->DeletingDtor_00496030::~DeletingDtor_00496030();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004a2c00 { virtual ~DeletingDtor_004a2c00(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004a2c00
void* DeletingDtor_004a2c00::destroy(int flags)
{
	this->DeletingDtor_004a2c00::~DeletingDtor_004a2c00();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004a2f50 { virtual ~DeletingDtor_004a2f50(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004a2f50
void* DeletingDtor_004a2f50::destroy(int flags)
{
	this->DeletingDtor_004a2f50::~DeletingDtor_004a2f50();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004a3590 { virtual ~DeletingDtor_004a3590(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004a3590
void* DeletingDtor_004a3590::destroy(int flags)
{
	this->DeletingDtor_004a3590::~DeletingDtor_004a3590();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004a4d30 { virtual ~DeletingDtor_004a4d30(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004a4d30
void* DeletingDtor_004a4d30::destroy(int flags)
{
	this->DeletingDtor_004a4d30::~DeletingDtor_004a4d30();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004b6ae0 { virtual ~DeletingDtor_004b6ae0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004b6ae0
void* DeletingDtor_004b6ae0::destroy(int flags)
{
	this->DeletingDtor_004b6ae0::~DeletingDtor_004b6ae0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004d1ce0 { virtual ~DeletingDtor_004d1ce0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004d1ce0
void* DeletingDtor_004d1ce0::destroy(int flags)
{
	this->DeletingDtor_004d1ce0::~DeletingDtor_004d1ce0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004d24e0 { virtual ~DeletingDtor_004d24e0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004d24e0
void* DeletingDtor_004d24e0::destroy(int flags)
{
	this->DeletingDtor_004d24e0::~DeletingDtor_004d24e0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004eb1c0 { virtual ~DeletingDtor_004eb1c0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004eb1c0
void* DeletingDtor_004eb1c0::destroy(int flags)
{
	this->DeletingDtor_004eb1c0::~DeletingDtor_004eb1c0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004f5be0 { virtual ~DeletingDtor_004f5be0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004f5be0
void* DeletingDtor_004f5be0::destroy(int flags)
{
	this->DeletingDtor_004f5be0::~DeletingDtor_004f5be0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004f6790 { virtual ~DeletingDtor_004f6790(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004f6790
void* DeletingDtor_004f6790::destroy(int flags)
{
	this->DeletingDtor_004f6790::~DeletingDtor_004f6790();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004fa700 { virtual ~DeletingDtor_004fa700(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004fa700
void* DeletingDtor_004fa700::destroy(int flags)
{
	this->DeletingDtor_004fa700::~DeletingDtor_004fa700();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_004fc9a0 { virtual ~DeletingDtor_004fc9a0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x004fc9a0
void* DeletingDtor_004fc9a0::destroy(int flags)
{
	this->DeletingDtor_004fc9a0::~DeletingDtor_004fc9a0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00502a90 { virtual ~DeletingDtor_00502a90(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00502a90
void* DeletingDtor_00502a90::destroy(int flags)
{
	this->DeletingDtor_00502a90::~DeletingDtor_00502a90();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0050f1b0 { virtual ~DeletingDtor_0050f1b0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0050f1b0
void* DeletingDtor_0050f1b0::destroy(int flags)
{
	this->DeletingDtor_0050f1b0::~DeletingDtor_0050f1b0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00512a80 { virtual ~DeletingDtor_00512a80(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00512a80
void* DeletingDtor_00512a80::destroy(int flags)
{
	this->DeletingDtor_00512a80::~DeletingDtor_00512a80();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005159f0 { virtual ~DeletingDtor_005159f0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005159f0
void* DeletingDtor_005159f0::destroy(int flags)
{
	this->DeletingDtor_005159f0::~DeletingDtor_005159f0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00516650 { virtual ~DeletingDtor_00516650(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00516650
void* DeletingDtor_00516650::destroy(int flags)
{
	this->DeletingDtor_00516650::~DeletingDtor_00516650();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0051f000 { virtual ~DeletingDtor_0051f000(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0051f000
void* DeletingDtor_0051f000::destroy(int flags)
{
	this->DeletingDtor_0051f000::~DeletingDtor_0051f000();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005249c0 { virtual ~DeletingDtor_005249c0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005249c0
void* DeletingDtor_005249c0::destroy(int flags)
{
	this->DeletingDtor_005249c0::~DeletingDtor_005249c0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00525b70 { virtual ~DeletingDtor_00525b70(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00525b70
void* DeletingDtor_00525b70::destroy(int flags)
{
	this->DeletingDtor_00525b70::~DeletingDtor_00525b70();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00527080 { virtual ~DeletingDtor_00527080(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00527080
void* DeletingDtor_00527080::destroy(int flags)
{
	this->DeletingDtor_00527080::~DeletingDtor_00527080();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00527f70 { virtual ~DeletingDtor_00527f70(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00527f70
void* DeletingDtor_00527f70::destroy(int flags)
{
	this->DeletingDtor_00527f70::~DeletingDtor_00527f70();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0052e8f0 { virtual ~DeletingDtor_0052e8f0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0052e8f0
void* DeletingDtor_0052e8f0::destroy(int flags)
{
	this->DeletingDtor_0052e8f0::~DeletingDtor_0052e8f0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005331e0 { virtual ~DeletingDtor_005331e0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005331e0
void* DeletingDtor_005331e0::destroy(int flags)
{
	this->DeletingDtor_005331e0::~DeletingDtor_005331e0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005347b0 { virtual ~DeletingDtor_005347b0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005347b0
void* DeletingDtor_005347b0::destroy(int flags)
{
	this->DeletingDtor_005347b0::~DeletingDtor_005347b0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00535120 { virtual ~DeletingDtor_00535120(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00535120
void* DeletingDtor_00535120::destroy(int flags)
{
	this->DeletingDtor_00535120::~DeletingDtor_00535120();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00536300 { virtual ~DeletingDtor_00536300(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00536300
void* DeletingDtor_00536300::destroy(int flags)
{
	this->DeletingDtor_00536300::~DeletingDtor_00536300();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00538be0 { virtual ~DeletingDtor_00538be0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00538be0
void* DeletingDtor_00538be0::destroy(int flags)
{
	this->DeletingDtor_00538be0::~DeletingDtor_00538be0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005402b0 { virtual ~DeletingDtor_005402b0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005402b0
void* DeletingDtor_005402b0::destroy(int flags)
{
	this->DeletingDtor_005402b0::~DeletingDtor_005402b0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005408f0 { virtual ~DeletingDtor_005408f0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005408f0
void* DeletingDtor_005408f0::destroy(int flags)
{
	this->DeletingDtor_005408f0::~DeletingDtor_005408f0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00541220 { virtual ~DeletingDtor_00541220(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00541220
void* DeletingDtor_00541220::destroy(int flags)
{
	this->DeletingDtor_00541220::~DeletingDtor_00541220();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005465f0 { virtual ~DeletingDtor_005465f0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005465f0
void* DeletingDtor_005465f0::destroy(int flags)
{
	this->DeletingDtor_005465f0::~DeletingDtor_005465f0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00548d80 { virtual ~DeletingDtor_00548d80(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00548d80
void* DeletingDtor_00548d80::destroy(int flags)
{
	this->DeletingDtor_00548d80::~DeletingDtor_00548d80();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0054a430 { virtual ~DeletingDtor_0054a430(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0054a430
void* DeletingDtor_0054a430::destroy(int flags)
{
	this->DeletingDtor_0054a430::~DeletingDtor_0054a430();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0054ddb0 { virtual ~DeletingDtor_0054ddb0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0054ddb0
void* DeletingDtor_0054ddb0::destroy(int flags)
{
	this->DeletingDtor_0054ddb0::~DeletingDtor_0054ddb0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00554440 { virtual ~DeletingDtor_00554440(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00554440
void* DeletingDtor_00554440::destroy(int flags)
{
	this->DeletingDtor_00554440::~DeletingDtor_00554440();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005550c0 { virtual ~DeletingDtor_005550c0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005550c0
void* DeletingDtor_005550c0::destroy(int flags)
{
	this->DeletingDtor_005550c0::~DeletingDtor_005550c0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00567790 { virtual ~DeletingDtor_00567790(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00567790
void* DeletingDtor_00567790::destroy(int flags)
{
	this->DeletingDtor_00567790::~DeletingDtor_00567790();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005760c0 { virtual ~DeletingDtor_005760c0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005760c0
void* DeletingDtor_005760c0::destroy(int flags)
{
	this->DeletingDtor_005760c0::~DeletingDtor_005760c0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005764c0 { virtual ~DeletingDtor_005764c0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005764c0
void* DeletingDtor_005764c0::destroy(int flags)
{
	this->DeletingDtor_005764c0::~DeletingDtor_005764c0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0057e480 { virtual ~DeletingDtor_0057e480(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0057e480
void* DeletingDtor_0057e480::destroy(int flags)
{
	this->DeletingDtor_0057e480::~DeletingDtor_0057e480();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0058f090 { virtual ~DeletingDtor_0058f090(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0058f090
void* DeletingDtor_0058f090::destroy(int flags)
{
	this->DeletingDtor_0058f090::~DeletingDtor_0058f090();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0058f7c0 { virtual ~DeletingDtor_0058f7c0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0058f7c0
void* DeletingDtor_0058f7c0::destroy(int flags)
{
	this->DeletingDtor_0058f7c0::~DeletingDtor_0058f7c0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_00591730 { virtual ~DeletingDtor_00591730(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x00591730
void* DeletingDtor_00591730::destroy(int flags)
{
	this->DeletingDtor_00591730::~DeletingDtor_00591730();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_0059c5a0 { virtual ~DeletingDtor_0059c5a0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x0059c5a0
void* DeletingDtor_0059c5a0::destroy(int flags)
{
	this->DeletingDtor_0059c5a0::~DeletingDtor_0059c5a0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005a6780 { virtual ~DeletingDtor_005a6780(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005a6780
void* DeletingDtor_005a6780::destroy(int flags)
{
	this->DeletingDtor_005a6780::~DeletingDtor_005a6780();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005aa6b0 { virtual ~DeletingDtor_005aa6b0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005aa6b0
void* DeletingDtor_005aa6b0::destroy(int flags)
{
	this->DeletingDtor_005aa6b0::~DeletingDtor_005aa6b0();
	if (flags & 1)
		deleteObject(this);
	return this;
}

struct DeletingDtor_005ce4e0 { virtual ~DeletingDtor_005ce4e0(); void* destroy(int flags); };
// FUNCTION: ROBLOXSTUDIO 0x005ce4e0
void* DeletingDtor_005ce4e0::destroy(int flags)
{
	this->DeletingDtor_005ce4e0::~DeletingDtor_005ce4e0();
	if (flags & 1)
		deleteObject(this);
	return this;
}
