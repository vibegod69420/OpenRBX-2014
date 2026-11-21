#ifndef CLIENT_APP_INCLUDE_V8DATAMODEL_SP_COUNTED_IMPL_P_H
#define CLIENT_APP_INCLUDE_V8DATAMODEL_SP_COUNTED_IMPL_P_H

#include "decomp.h"

namespace RBX {

extern int s_value_0077b120;
extern int s_value_0077b130;
// AUTO-GENERATED HELPERS

class sp_counted_impl_p
{
public:
	union
	{
		int _vtable_or_head;
		struct { char _pad_alloc_000c[0xc]; void* alloc_000c; };
		struct { char _pad_ptr_000c[0xc]; sp_counted_impl_p* ptr_000c; };
		// AUTO-GENERATED FIELDS
	};

	void freeMember0C();
	void freeMember0C_slot1();
	void dispose();
	void __cdecl invoke();
	void __cdecl invoke(void* arg);
	void __cdecl invoke(void* a, void* b);
	void __cdecl call(void* arg);
	__int64 __cdecl getPair();
	void onDestroy();
	void destroySubPtr0C();
	void destroySubPtr0C_slot1();
	void destroySubPtr0C_da60();
	void destroySubPtr0C_da80();
	void destroySubPtr0C_71a0();
	void destroySubPtr0C_f620();
	void destroySubPtr0C_ae90();
	void destroySubPtr0C_3d90();
	void destroySubPtr0C_5fe0();
	void destroySubPtr0C_4330();
	void destroySubPtr0C_fda0();
	void disposeHeldMap();
	int getGlobal_b120() const;
	int getGlobal_b130() const;
	void disposeString();
	void disposeStringHolder();
	void destroySubPtr0C_f5e0();
	void destroySubPtr0C_6610();
	void disposeNuggetHistory();
	void __cdecl assign(void* src);
	void __cdecl assignWord(void* src);
	int __cdecl getCount() const;
	int __cdecl sub_A34ED0();
	void* __cdecl sub_A34D00(void* value);
	int __cdecl sub_B72040();
	void __cdecl sub_A34BF0(void* arg);
	int __cdecl sub_B7A200();
	int __cdecl sub_B7A220();
	int __cdecl sub_B7A240();
	int __cdecl sub_B7A3E0();
	int __cdecl sub_B7A430();
	int __cdecl sub_B7A450();
	int __cdecl sub_B7A4E0();
	int __cdecl sub_B7A500();
	int __cdecl sub_B71E40();
	sp_counted_impl_p* __cdecl sub_424710();
	static void destroyInstance(sp_counted_impl_p* p);
	sp_counted_impl_p* __cdecl sub_4B1D10(void* arg);
	sp_counted_impl_p* __cdecl sub_77E970(sp_counted_impl_p* self, void* arg);
	sp_counted_impl_p* __cdecl sub_77E990(sp_counted_impl_p* self, void* arg);
	sp_counted_impl_p* __cdecl sub_77D480(void* a, void* b);
	sp_counted_impl_p* __cdecl sub_77D670(void* a, void* b);
	sp_counted_impl_p* __cdecl sub_77D840(void* /*unused*/, const char* str);
	sp_counted_impl_p* __cdecl sub_77E780(void* a, void* b);
	bool sub_990120();
	int __cdecl sub_B7A400();
	int __cdecl sub_B7A550();
	int __cdecl sub_B7A580();
	int __cdecl sub_B7A5B0();
	int __cdecl sub_B7A5E0();
	int __cdecl sub_B7A610();
	int __cdecl sub_B7A640(void* arg);
	int __cdecl sub_B7A670();
	int __cdecl sub_B7A6A0();
	int __cdecl sub_B7AE60();
	void sub_424450();
	void __cdecl sub_A34CD0(void* arg);
	sp_counted_impl_p* __cdecl sub_77D620(void* arg2, void* arg3);
	sp_counted_impl_p* __cdecl sub_77D6C0(void* arg);
	int __cdecl sub_B7A2A0();
	int __cdecl sub_B7A520();
	int __cdecl sub_A34E90(void* arg2, void* arg3);
	void __cdecl sub_A34D20(int arg2, int arg3);
	void __cdecl sub_6A3E50();
	void __cdecl sub_A34E50(void* arg2, void* arg3);
	int __cdecl sub_B7A470();
	int __cdecl sub_B79B30();
	int __cdecl sub_B79B80();
	int __cdecl sub_B79BD0();
	int __cdecl sub_B79C70();
	int __cdecl sub_B79CC0();
	int __cdecl sub_B79D10();
	int __cdecl sub_B79D60();
	int __cdecl sub_B79DB0();
	int __cdecl sub_B79F10();
	sp_counted_impl_p*sub_778FA0();
	int __cdecl sub_B79C20();
	int __cdecl sub_B7A1B0();
	void __cdecl sub_A351C0(int arg);
	void sub_779B50();
	void sub_426140();
	int __cdecl sub_B79F60();
	void __cdecl sub_A34580(void* arg);
	void __cdecl sub_A348D0(void* arg);
	bool __cdecl sub_B74210(int arg2, void* arg3);
	void __cdecl sub_A34DD0(int arg);
	void __cdecl sub_A349D0(void* arg);
	void __cdecl sub_A342A0();
	void __cdecl sub_77DDA0(int hole, int bottom, void* val);
	void __cdecl sub_B7B4B0(void* arg2, void* arg3);
	sp_counted_impl_p* __cdecl sub_A345E0();
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_V8DATAMODEL_SP_COUNTED_IMPL_P_H
