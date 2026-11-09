#ifndef CLIENT_APP_INCLUDE_V8TREE_INSTANCE_H
#define CLIENT_APP_INCLUDE_V8TREE_INSTANCE_H

#include "decomp.h"

namespace RBX {

extern int s_value_0077b120;
extern int s_value_0077b130;
// AUTO-GENERATED HELPERS

// VTABLE: ROBLOXSTUDIO 0x00ea622c
class Instance
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_member_0040[0x40]; int member_0040; };
		struct { char _pad_flag_000c[0xc]; bool flag_000c; };
		struct { char _pad_flag_000d[0xd]; bool flag_000d; };
		struct { char _pad_flag_0058[0x58]; bool flag_0058; };
		struct { char _pad_member_003c[0x3c]; int member_003c; };
		struct { char _pad_alloc_000c[0xc]; void* alloc_000c; };
		struct { char _pad_field_0040[0x40]; int field_0040; };
		struct { char _pad_field_0048[0x48]; int field_0048; };
		struct { char _pad_field_00d0[0xd0]; int field_00d0; };
		struct { char _pad_ptr_000c[0xc]; Instance* ptr_000c; };
		struct { char _pad_field_2198[0x2198]; int field_2198; };
		struct { char _pad_field_0190[0x190]; int field_0190; };
		struct { char _pad_field_0080[0x80]; int field_0080; };
		// AUTO-GENERATED FIELDS
	};

	const int* getMemberPtr40() const;
	bool getFlag0C() const;
	bool getFlag0D() const;
	bool getFlag58() const;
	const int* getMemberPtr3C() const;
	int getConst16797656() const;
	int getConst16797664() const;
	int getConst14956404() const;
	int getConst19652792() const;
	int getConst15005704() const;
	int getConst19190364() const;
	int getConst19190288() const;
	int getConst19190392() const;
	int getConst19190592() const;
	int getConst19190512() const;
	int getConst19190472() const;
	int getConst19196136() const;
	int getConst19553048() const;
	int getConst19554176() const;
	void freeMember0C();
	void setField40(int value);
	void setField48(int value);
	void setFlag58(bool value);
	void setFieldD0(int value);
	RbxPairInt* makePair(RbxPairInt* out, int firstVal);
	void deleteObject(RbxVDelBase* p);
	void onDestroy();
	void destroySubPtr0C();
	void destroySubPtr0C_slot1();
	void destroySubPtr0C_da60();
	void destroySubPtr0C_da80();
	void destroySubPtr0C_71a0();
	void destroySubPtr0C_f620();
	int getConst18739520() const;
	int getGlobal_b120() const;
	int getGlobal_b130() const;
	int getField2198() const;
	void setField190(int value);
	static void destroyInstance(Instance* p);
	static void destroyInstance_40c0(Instance* p);
	static void destroyInstance_3a10(Instance* p);
	void* scalarDeletingDestructor(unsigned int flags);
	void* scalarDeletingDestructor_55b0(unsigned int flags);
	void* scalarDeletingDestructor_slot1(unsigned int flags);
	void* scalarDeletingDestructor_slot0(unsigned int flags);
	void* scalarDeletingDestructor_d0f0(unsigned int flags);
	void* scalarDeletingDestructor_d120(unsigned int flags);
	void* scalarDeletingDestructor_d150(unsigned int flags);
	void* scalarDeletingDestructor_d180(unsigned int flags);
	void* scalarDeletingDestructor_d1b0(unsigned int flags);
	void* scalarDeletingDestructor_2090(unsigned int flags);
	void* scalarDeletingDestructor_e790(unsigned int flags);
	void* scalarDeletingDestructor_e890(unsigned int flags);
	void* scalarDeletingDestructor_e8c0(unsigned int flags);
	void* scalarDeletingDestructor_e8f0(unsigned int flags);
	void setField80(int value);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8TREE_INSTANCE_H
