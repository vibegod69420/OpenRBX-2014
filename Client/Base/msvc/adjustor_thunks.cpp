// Adjusting thunks: the compiler emits an 8-byte "sub ecx, offset; jmp"
// stub for each secondary base subobject. Naked functions reproduce them
// exactly; the jump target is wildcarded by the comparator. Each thunk
// represents a distinct vtable slot entry in the original image.

extern "C" void thunkTarget_0045f754();
// FUNCTION: ROBLOXSTUDIO 0x0045f754
extern "C" __declspec(naked) void adjustorThunk_0045f754()
{
	__asm { sub ecx, 0x4 }
	__asm { jmp thunkTarget_0045f754 }
}

extern "C" void thunkTarget_00c14ec5();
// FUNCTION: ROBLOXSTUDIO 0x00c14ec5
extern "C" __declspec(naked) void adjustorThunk_00c14ec5()
{
	__asm { sub ecx, 0x4 }
	__asm { jmp thunkTarget_00c14ec5 }
}

extern "C" void thunkTarget_00c151e5();
// FUNCTION: ROBLOXSTUDIO 0x00c151e5
extern "C" __declspec(naked) void adjustorThunk_00c151e5()
{
	__asm { sub ecx, 0x4 }
	__asm { jmp thunkTarget_00c151e5 }
}

extern "C" void thunkTarget_00c15385();
// FUNCTION: ROBLOXSTUDIO 0x00c15385
extern "C" __declspec(naked) void adjustorThunk_00c15385()
{
	__asm { sub ecx, 0x4 }
	__asm { jmp thunkTarget_00c15385 }
}

extern "C" void thunkTarget_00c156ee();
// FUNCTION: ROBLOXSTUDIO 0x00c156ee
extern "C" __declspec(naked) void adjustorThunk_00c156ee()
{
	__asm { sub ecx, 0x4 }
	__asm { jmp thunkTarget_00c156ee }
}

extern "C" void thunkTarget_00c167ba();
// FUNCTION: ROBLOXSTUDIO 0x00c167ba
extern "C" __declspec(naked) void adjustorThunk_00c167ba()
{
	__asm { sub ecx, 0x4 }
	__asm { jmp thunkTarget_00c167ba }
}

extern "C" void thunkTarget_00c167c2();
// FUNCTION: ROBLOXSTUDIO 0x00c167c2
extern "C" __declspec(naked) void adjustorThunk_00c167c2()
{
	__asm { sub ecx, 0x4 }
	__asm { jmp thunkTarget_00c167c2 }
}

extern "C" void thunkTarget_00414937();
// FUNCTION: ROBLOXSTUDIO 0x00414937
extern "C" __declspec(naked) void adjustorThunk_00414937()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00414937 }
}

extern "C" void thunkTarget_0041493f();
// FUNCTION: ROBLOXSTUDIO 0x0041493f
extern "C" __declspec(naked) void adjustorThunk_0041493f()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0041493f }
}

extern "C" void thunkTarget_00414947();
// FUNCTION: ROBLOXSTUDIO 0x00414947
extern "C" __declspec(naked) void adjustorThunk_00414947()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00414947 }
}

extern "C" void thunkTarget_0041494f();
// FUNCTION: ROBLOXSTUDIO 0x0041494f
extern "C" __declspec(naked) void adjustorThunk_0041494f()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0041494f }
}

extern "C" void thunkTarget_00414957();
// FUNCTION: ROBLOXSTUDIO 0x00414957
extern "C" __declspec(naked) void adjustorThunk_00414957()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00414957 }
}

extern "C" void thunkTarget_0042102a();
// FUNCTION: ROBLOXSTUDIO 0x0042102a
extern "C" __declspec(naked) void adjustorThunk_0042102a()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0042102a }
}

extern "C" void thunkTarget_00421032();
// FUNCTION: ROBLOXSTUDIO 0x00421032
extern "C" __declspec(naked) void adjustorThunk_00421032()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00421032 }
}

extern "C" void thunkTarget_0042103a();
// FUNCTION: ROBLOXSTUDIO 0x0042103a
extern "C" __declspec(naked) void adjustorThunk_0042103a()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0042103a }
}

extern "C" void thunkTarget_00421042();
// FUNCTION: ROBLOXSTUDIO 0x00421042
extern "C" __declspec(naked) void adjustorThunk_00421042()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00421042 }
}

extern "C" void thunkTarget_0042104a();
// FUNCTION: ROBLOXSTUDIO 0x0042104a
extern "C" __declspec(naked) void adjustorThunk_0042104a()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0042104a }
}

extern "C" void thunkTarget_0044d989();
// FUNCTION: ROBLOXSTUDIO 0x0044d989
extern "C" __declspec(naked) void adjustorThunk_0044d989()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0044d989 }
}

extern "C" void thunkTarget_0044d991();
// FUNCTION: ROBLOXSTUDIO 0x0044d991
extern "C" __declspec(naked) void adjustorThunk_0044d991()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0044d991 }
}

extern "C" void thunkTarget_0044d999();
// FUNCTION: ROBLOXSTUDIO 0x0044d999
extern "C" __declspec(naked) void adjustorThunk_0044d999()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0044d999 }
}

extern "C" void thunkTarget_0044d9a1();
// FUNCTION: ROBLOXSTUDIO 0x0044d9a1
extern "C" __declspec(naked) void adjustorThunk_0044d9a1()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0044d9a1 }
}

extern "C" void thunkTarget_0044d9a9();
// FUNCTION: ROBLOXSTUDIO 0x0044d9a9
extern "C" __declspec(naked) void adjustorThunk_0044d9a9()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0044d9a9 }
}

extern "C" void thunkTarget_0044d9b1();
// FUNCTION: ROBLOXSTUDIO 0x0044d9b1
extern "C" __declspec(naked) void adjustorThunk_0044d9b1()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0044d9b1 }
}

extern "C" void thunkTarget_0044d9b9();
// FUNCTION: ROBLOXSTUDIO 0x0044d9b9
extern "C" __declspec(naked) void adjustorThunk_0044d9b9()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0044d9b9 }
}

extern "C" void thunkTarget_0044d9c1();
// FUNCTION: ROBLOXSTUDIO 0x0044d9c1
extern "C" __declspec(naked) void adjustorThunk_0044d9c1()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0044d9c1 }
}

extern "C" void thunkTarget_0044f797();
// FUNCTION: ROBLOXSTUDIO 0x0044f797
extern "C" __declspec(naked) void adjustorThunk_0044f797()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0044f797 }
}

extern "C" void thunkTarget_00450cd9();
// FUNCTION: ROBLOXSTUDIO 0x00450cd9
extern "C" __declspec(naked) void adjustorThunk_00450cd9()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00450cd9 }
}

extern "C" void thunkTarget_004542e1();
// FUNCTION: ROBLOXSTUDIO 0x004542e1
extern "C" __declspec(naked) void adjustorThunk_004542e1()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004542e1 }
}

extern "C" void thunkTarget_004542e9();
// FUNCTION: ROBLOXSTUDIO 0x004542e9
extern "C" __declspec(naked) void adjustorThunk_004542e9()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004542e9 }
}

extern "C" void thunkTarget_004542f1();
// FUNCTION: ROBLOXSTUDIO 0x004542f1
extern "C" __declspec(naked) void adjustorThunk_004542f1()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004542f1 }
}

extern "C" void thunkTarget_0045bdda();
// FUNCTION: ROBLOXSTUDIO 0x0045bdda
extern "C" __declspec(naked) void adjustorThunk_0045bdda()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0045bdda }
}

extern "C" void thunkTarget_0045bde2();
// FUNCTION: ROBLOXSTUDIO 0x0045bde2
extern "C" __declspec(naked) void adjustorThunk_0045bde2()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0045bde2 }
}

extern "C" void thunkTarget_00461cfd();
// FUNCTION: ROBLOXSTUDIO 0x00461cfd
extern "C" __declspec(naked) void adjustorThunk_00461cfd()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00461cfd }
}

extern "C" void thunkTarget_00462ba9();
// FUNCTION: ROBLOXSTUDIO 0x00462ba9
extern "C" __declspec(naked) void adjustorThunk_00462ba9()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00462ba9 }
}

extern "C" void thunkTarget_00462bb1();
// FUNCTION: ROBLOXSTUDIO 0x00462bb1
extern "C" __declspec(naked) void adjustorThunk_00462bb1()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00462bb1 }
}

extern "C" void thunkTarget_0046920a();
// FUNCTION: ROBLOXSTUDIO 0x0046920a
extern "C" __declspec(naked) void adjustorThunk_0046920a()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0046920a }
}

extern "C" void thunkTarget_00470503();
// FUNCTION: ROBLOXSTUDIO 0x00470503
extern "C" __declspec(naked) void adjustorThunk_00470503()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00470503 }
}

extern "C" void thunkTarget_00478bd9();
// FUNCTION: ROBLOXSTUDIO 0x00478bd9
extern "C" __declspec(naked) void adjustorThunk_00478bd9()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00478bd9 }
}

extern "C" void thunkTarget_0047a986();
// FUNCTION: ROBLOXSTUDIO 0x0047a986
extern "C" __declspec(naked) void adjustorThunk_0047a986()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0047a986 }
}

extern "C" void thunkTarget_0047a98e();
// FUNCTION: ROBLOXSTUDIO 0x0047a98e
extern "C" __declspec(naked) void adjustorThunk_0047a98e()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0047a98e }
}

extern "C" void thunkTarget_0049cf5b();
// FUNCTION: ROBLOXSTUDIO 0x0049cf5b
extern "C" __declspec(naked) void adjustorThunk_0049cf5b()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0049cf5b }
}

extern "C" void thunkTarget_0049d8af();
// FUNCTION: ROBLOXSTUDIO 0x0049d8af
extern "C" __declspec(naked) void adjustorThunk_0049d8af()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0049d8af }
}

extern "C" void thunkTarget_004a29b6();
// FUNCTION: ROBLOXSTUDIO 0x004a29b6
extern "C" __declspec(naked) void adjustorThunk_004a29b6()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004a29b6 }
}

extern "C" void thunkTarget_004a29be();
// FUNCTION: ROBLOXSTUDIO 0x004a29be
extern "C" __declspec(naked) void adjustorThunk_004a29be()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004a29be }
}

extern "C" void thunkTarget_004a29c6();
// FUNCTION: ROBLOXSTUDIO 0x004a29c6
extern "C" __declspec(naked) void adjustorThunk_004a29c6()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004a29c6 }
}

extern "C" void thunkTarget_004a29ce();
// FUNCTION: ROBLOXSTUDIO 0x004a29ce
extern "C" __declspec(naked) void adjustorThunk_004a29ce()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004a29ce }
}

extern "C" void thunkTarget_004a4b8f();
// FUNCTION: ROBLOXSTUDIO 0x004a4b8f
extern "C" __declspec(naked) void adjustorThunk_004a4b8f()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004a4b8f }
}

extern "C" void thunkTarget_004b5dbe();
// FUNCTION: ROBLOXSTUDIO 0x004b5dbe
extern "C" __declspec(naked) void adjustorThunk_004b5dbe()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004b5dbe }
}

extern "C" void thunkTarget_004cf057();
// FUNCTION: ROBLOXSTUDIO 0x004cf057
extern "C" __declspec(naked) void adjustorThunk_004cf057()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004cf057 }
}

extern "C" void thunkTarget_004d2ca5();
// FUNCTION: ROBLOXSTUDIO 0x004d2ca5
extern "C" __declspec(naked) void adjustorThunk_004d2ca5()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004d2ca5 }
}

extern "C" void thunkTarget_004d6d10();
// FUNCTION: ROBLOXSTUDIO 0x004d6d10
extern "C" __declspec(naked) void adjustorThunk_004d6d10()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004d6d10 }
}

extern "C" void thunkTarget_004d6d18();
// FUNCTION: ROBLOXSTUDIO 0x004d6d18
extern "C" __declspec(naked) void adjustorThunk_004d6d18()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004d6d18 }
}

extern "C" void thunkTarget_004d6d20();
// FUNCTION: ROBLOXSTUDIO 0x004d6d20
extern "C" __declspec(naked) void adjustorThunk_004d6d20()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004d6d20 }
}

extern "C" void thunkTarget_004f4d09();
// FUNCTION: ROBLOXSTUDIO 0x004f4d09
extern "C" __declspec(naked) void adjustorThunk_004f4d09()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004f4d09 }
}

extern "C" void thunkTarget_004f4d11();
// FUNCTION: ROBLOXSTUDIO 0x004f4d11
extern "C" __declspec(naked) void adjustorThunk_004f4d11()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004f4d11 }
}

extern "C" void thunkTarget_004f4d19();
// FUNCTION: ROBLOXSTUDIO 0x004f4d19
extern "C" __declspec(naked) void adjustorThunk_004f4d19()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004f4d19 }
}

extern "C" void thunkTarget_004f4d21();
// FUNCTION: ROBLOXSTUDIO 0x004f4d21
extern "C" __declspec(naked) void adjustorThunk_004f4d21()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004f4d21 }
}

extern "C" void thunkTarget_004f4d29();
// FUNCTION: ROBLOXSTUDIO 0x004f4d29
extern "C" __declspec(naked) void adjustorThunk_004f4d29()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004f4d29 }
}

extern "C" void thunkTarget_004f4d31();
// FUNCTION: ROBLOXSTUDIO 0x004f4d31
extern "C" __declspec(naked) void adjustorThunk_004f4d31()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004f4d31 }
}

extern "C" void thunkTarget_004f4d39();
// FUNCTION: ROBLOXSTUDIO 0x004f4d39
extern "C" __declspec(naked) void adjustorThunk_004f4d39()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004f4d39 }
}

extern "C" void thunkTarget_004f92eb();
// FUNCTION: ROBLOXSTUDIO 0x004f92eb
extern "C" __declspec(naked) void adjustorThunk_004f92eb()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004f92eb }
}

extern "C" void thunkTarget_004f92f3();
// FUNCTION: ROBLOXSTUDIO 0x004f92f3
extern "C" __declspec(naked) void adjustorThunk_004f92f3()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004f92f3 }
}

extern "C" void thunkTarget_004f92fb();
// FUNCTION: ROBLOXSTUDIO 0x004f92fb
extern "C" __declspec(naked) void adjustorThunk_004f92fb()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004f92fb }
}

extern "C" void thunkTarget_004f9303();
// FUNCTION: ROBLOXSTUDIO 0x004f9303
extern "C" __declspec(naked) void adjustorThunk_004f9303()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_004f9303 }
}

extern "C" void thunkTarget_00500305();
// FUNCTION: ROBLOXSTUDIO 0x00500305
extern "C" __declspec(naked) void adjustorThunk_00500305()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00500305 }
}

extern "C" void thunkTarget_00504fe1();
// FUNCTION: ROBLOXSTUDIO 0x00504fe1
extern "C" __declspec(naked) void adjustorThunk_00504fe1()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00504fe1 }
}

extern "C" void thunkTarget_0050efab();
// FUNCTION: ROBLOXSTUDIO 0x0050efab
extern "C" __declspec(naked) void adjustorThunk_0050efab()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0050efab }
}

extern "C" void thunkTarget_0050efb3();
// FUNCTION: ROBLOXSTUDIO 0x0050efb3
extern "C" __declspec(naked) void adjustorThunk_0050efb3()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0050efb3 }
}

extern "C" void thunkTarget_0050efbb();
// FUNCTION: ROBLOXSTUDIO 0x0050efbb
extern "C" __declspec(naked) void adjustorThunk_0050efbb()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0050efbb }
}

extern "C" void thunkTarget_0050efc3();
// FUNCTION: ROBLOXSTUDIO 0x0050efc3
extern "C" __declspec(naked) void adjustorThunk_0050efc3()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0050efc3 }
}

extern "C" void thunkTarget_00512421();
// FUNCTION: ROBLOXSTUDIO 0x00512421
extern "C" __declspec(naked) void adjustorThunk_00512421()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00512421 }
}

extern "C" void thunkTarget_00514689();
// FUNCTION: ROBLOXSTUDIO 0x00514689
extern "C" __declspec(naked) void adjustorThunk_00514689()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00514689 }
}

extern "C" void thunkTarget_005171dc();
// FUNCTION: ROBLOXSTUDIO 0x005171dc
extern "C" __declspec(naked) void adjustorThunk_005171dc()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_005171dc }
}

extern "C" void thunkTarget_005171e4();
// FUNCTION: ROBLOXSTUDIO 0x005171e4
extern "C" __declspec(naked) void adjustorThunk_005171e4()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_005171e4 }
}

extern "C" void thunkTarget_005171ec();
// FUNCTION: ROBLOXSTUDIO 0x005171ec
extern "C" __declspec(naked) void adjustorThunk_005171ec()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_005171ec }
}

extern "C" void thunkTarget_005317cc();
// FUNCTION: ROBLOXSTUDIO 0x005317cc
extern "C" __declspec(naked) void adjustorThunk_005317cc()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_005317cc }
}

extern "C" void thunkTarget_005317dc();
// FUNCTION: ROBLOXSTUDIO 0x005317dc
extern "C" __declspec(naked) void adjustorThunk_005317dc()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_005317dc }
}

extern "C" void thunkTarget_005317e4();
// FUNCTION: ROBLOXSTUDIO 0x005317e4
extern "C" __declspec(naked) void adjustorThunk_005317e4()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_005317e4 }
}

extern "C" void thunkTarget_005317ec();
// FUNCTION: ROBLOXSTUDIO 0x005317ec
extern "C" __declspec(naked) void adjustorThunk_005317ec()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_005317ec }
}

extern "C" void thunkTarget_005317f4();
// FUNCTION: ROBLOXSTUDIO 0x005317f4
extern "C" __declspec(naked) void adjustorThunk_005317f4()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_005317f4 }
}

extern "C" void thunkTarget_00534436();
// FUNCTION: ROBLOXSTUDIO 0x00534436
extern "C" __declspec(naked) void adjustorThunk_00534436()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00534436 }
}

extern "C" void thunkTarget_00534fc1();
// FUNCTION: ROBLOXSTUDIO 0x00534fc1
extern "C" __declspec(naked) void adjustorThunk_00534fc1()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00534fc1 }
}

extern "C" void thunkTarget_00535f7a();
// FUNCTION: ROBLOXSTUDIO 0x00535f7a
extern "C" __declspec(naked) void adjustorThunk_00535f7a()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00535f7a }
}

extern "C" void thunkTarget_00546221();
// FUNCTION: ROBLOXSTUDIO 0x00546221
extern "C" __declspec(naked) void adjustorThunk_00546221()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00546221 }
}

extern "C" void thunkTarget_005474ee();
// FUNCTION: ROBLOXSTUDIO 0x005474ee
extern "C" __declspec(naked) void adjustorThunk_005474ee()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_005474ee }
}

extern "C" void thunkTarget_00548cd8();
// FUNCTION: ROBLOXSTUDIO 0x00548cd8
extern "C" __declspec(naked) void adjustorThunk_00548cd8()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00548cd8 }
}

extern "C" void thunkTarget_00554f2d();
// FUNCTION: ROBLOXSTUDIO 0x00554f2d
extern "C" __declspec(naked) void adjustorThunk_00554f2d()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00554f2d }
}

extern "C" void thunkTarget_0055594d();
// FUNCTION: ROBLOXSTUDIO 0x0055594d
extern "C" __declspec(naked) void adjustorThunk_0055594d()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0055594d }
}

extern "C" void thunkTarget_0056d2e4();
// FUNCTION: ROBLOXSTUDIO 0x0056d2e4
extern "C" __declspec(naked) void adjustorThunk_0056d2e4()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0056d2e4 }
}

extern "C" void thunkTarget_0056d2ec();
// FUNCTION: ROBLOXSTUDIO 0x0056d2ec
extern "C" __declspec(naked) void adjustorThunk_0056d2ec()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0056d2ec }
}

extern "C" void thunkTarget_005762eb();
// FUNCTION: ROBLOXSTUDIO 0x005762eb
extern "C" __declspec(naked) void adjustorThunk_005762eb()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_005762eb }
}

extern "C" void thunkTarget_005762f3();
// FUNCTION: ROBLOXSTUDIO 0x005762f3
extern "C" __declspec(naked) void adjustorThunk_005762f3()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_005762f3 }
}

extern "C" void thunkTarget_0099bfcf();
// FUNCTION: ROBLOXSTUDIO 0x0099bfcf
extern "C" __declspec(naked) void adjustorThunk_0099bfcf()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_0099bfcf }
}

extern "C" void thunkTarget_00b5b3bb();
// FUNCTION: ROBLOXSTUDIO 0x00b5b3bb
extern "C" __declspec(naked) void adjustorThunk_00b5b3bb()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00b5b3bb }
}

extern "C" void thunkTarget_00b5c89b();
// FUNCTION: ROBLOXSTUDIO 0x00b5c89b
extern "C" __declspec(naked) void adjustorThunk_00b5c89b()
{
	__asm { sub ecx, 0x8 }
	__asm { jmp thunkTarget_00b5c89b }
}

extern "C" void thunkTarget_00410092();
// FUNCTION: ROBLOXSTUDIO 0x00410092
extern "C" __declspec(naked) void adjustorThunk_00410092()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00410092 }
}

extern "C" void thunkTarget_0041047b();
// FUNCTION: ROBLOXSTUDIO 0x0041047b
extern "C" __declspec(naked) void adjustorThunk_0041047b()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0041047b }
}

extern "C" void thunkTarget_00411c12();
// FUNCTION: ROBLOXSTUDIO 0x00411c12
extern "C" __declspec(naked) void adjustorThunk_00411c12()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00411c12 }
}

extern "C" void thunkTarget_004120fb();
// FUNCTION: ROBLOXSTUDIO 0x004120fb
extern "C" __declspec(naked) void adjustorThunk_004120fb()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_004120fb }
}

extern "C" void thunkTarget_004218e2();
// FUNCTION: ROBLOXSTUDIO 0x004218e2
extern "C" __declspec(naked) void adjustorThunk_004218e2()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_004218e2 }
}

extern "C" void thunkTarget_00421ccb();
// FUNCTION: ROBLOXSTUDIO 0x00421ccb
extern "C" __declspec(naked) void adjustorThunk_00421ccb()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00421ccb }
}

extern "C" void thunkTarget_0045f9b8();
// FUNCTION: ROBLOXSTUDIO 0x0045f9b8
extern "C" __declspec(naked) void adjustorThunk_0045f9b8()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0045f9b8 }
}

extern "C" void thunkTarget_0045fda1();
// FUNCTION: ROBLOXSTUDIO 0x0045fda1
extern "C" __declspec(naked) void adjustorThunk_0045fda1()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0045fda1 }
}

extern "C" void thunkTarget_004b6012();
// FUNCTION: ROBLOXSTUDIO 0x004b6012
extern "C" __declspec(naked) void adjustorThunk_004b6012()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_004b6012 }
}

extern "C" void thunkTarget_004b63fb();
// FUNCTION: ROBLOXSTUDIO 0x004b63fb
extern "C" __declspec(naked) void adjustorThunk_004b63fb()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_004b63fb }
}

extern "C" void thunkTarget_0067d2e4();
// FUNCTION: ROBLOXSTUDIO 0x0067d2e4
extern "C" __declspec(naked) void adjustorThunk_0067d2e4()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0067d2e4 }
}

extern "C" void thunkTarget_0067d2f7();
// FUNCTION: ROBLOXSTUDIO 0x0067d2f7
extern "C" __declspec(naked) void adjustorThunk_0067d2f7()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0067d2f7 }
}

extern "C" void thunkTarget_0067d30a();
// FUNCTION: ROBLOXSTUDIO 0x0067d30a
extern "C" __declspec(naked) void adjustorThunk_0067d30a()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0067d30a }
}

extern "C" void thunkTarget_0067d31d();
// FUNCTION: ROBLOXSTUDIO 0x0067d31d
extern "C" __declspec(naked) void adjustorThunk_0067d31d()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0067d31d }
}

extern "C" void thunkTarget_0067d330();
// FUNCTION: ROBLOXSTUDIO 0x0067d330
extern "C" __declspec(naked) void adjustorThunk_0067d330()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0067d330 }
}

extern "C" void thunkTarget_0067d338();
// FUNCTION: ROBLOXSTUDIO 0x0067d338
extern "C" __declspec(naked) void adjustorThunk_0067d338()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0067d338 }
}

extern "C" void thunkTarget_0067d340();
// FUNCTION: ROBLOXSTUDIO 0x0067d340
extern "C" __declspec(naked) void adjustorThunk_0067d340()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0067d340 }
}

extern "C" void thunkTarget_0067d348();
// FUNCTION: ROBLOXSTUDIO 0x0067d348
extern "C" __declspec(naked) void adjustorThunk_0067d348()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0067d348 }
}

extern "C" void thunkTarget_0067d350();
// FUNCTION: ROBLOXSTUDIO 0x0067d350
extern "C" __declspec(naked) void adjustorThunk_0067d350()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_0067d350 }
}

extern "C" void thunkTarget_00952d25();
// FUNCTION: ROBLOXSTUDIO 0x00952d25
extern "C" __declspec(naked) void adjustorThunk_00952d25()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952d25 }
}

extern "C" void thunkTarget_00952d38();
// FUNCTION: ROBLOXSTUDIO 0x00952d38
extern "C" __declspec(naked) void adjustorThunk_00952d38()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952d38 }
}

extern "C" void thunkTarget_00952d4b();
// FUNCTION: ROBLOXSTUDIO 0x00952d4b
extern "C" __declspec(naked) void adjustorThunk_00952d4b()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952d4b }
}

extern "C" void thunkTarget_00952d5e();
// FUNCTION: ROBLOXSTUDIO 0x00952d5e
extern "C" __declspec(naked) void adjustorThunk_00952d5e()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952d5e }
}

extern "C" void thunkTarget_00952d71();
// FUNCTION: ROBLOXSTUDIO 0x00952d71
extern "C" __declspec(naked) void adjustorThunk_00952d71()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952d71 }
}

extern "C" void thunkTarget_00952d97();
// FUNCTION: ROBLOXSTUDIO 0x00952d97
extern "C" __declspec(naked) void adjustorThunk_00952d97()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952d97 }
}

extern "C" void thunkTarget_00952daa();
// FUNCTION: ROBLOXSTUDIO 0x00952daa
extern "C" __declspec(naked) void adjustorThunk_00952daa()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952daa }
}

extern "C" void thunkTarget_00952dbd();
// FUNCTION: ROBLOXSTUDIO 0x00952dbd
extern "C" __declspec(naked) void adjustorThunk_00952dbd()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952dbd }
}

extern "C" void thunkTarget_00952dd0();
// FUNCTION: ROBLOXSTUDIO 0x00952dd0
extern "C" __declspec(naked) void adjustorThunk_00952dd0()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952dd0 }
}

extern "C" void thunkTarget_00952de3();
// FUNCTION: ROBLOXSTUDIO 0x00952de3
extern "C" __declspec(naked) void adjustorThunk_00952de3()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952de3 }
}

extern "C" void thunkTarget_00952df6();
// FUNCTION: ROBLOXSTUDIO 0x00952df6
extern "C" __declspec(naked) void adjustorThunk_00952df6()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952df6 }
}

extern "C" void thunkTarget_00952e09();
// FUNCTION: ROBLOXSTUDIO 0x00952e09
extern "C" __declspec(naked) void adjustorThunk_00952e09()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e09 }
}

extern "C" void thunkTarget_00952e1c();
// FUNCTION: ROBLOXSTUDIO 0x00952e1c
extern "C" __declspec(naked) void adjustorThunk_00952e1c()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e1c }
}

extern "C" void thunkTarget_00952e4d();
// FUNCTION: ROBLOXSTUDIO 0x00952e4d
extern "C" __declspec(naked) void adjustorThunk_00952e4d()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e4d }
}

extern "C" void thunkTarget_00952e55();
// FUNCTION: ROBLOXSTUDIO 0x00952e55
extern "C" __declspec(naked) void adjustorThunk_00952e55()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e55 }
}

extern "C" void thunkTarget_00952e5d();
// FUNCTION: ROBLOXSTUDIO 0x00952e5d
extern "C" __declspec(naked) void adjustorThunk_00952e5d()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e5d }
}

extern "C" void thunkTarget_00952e65();
// FUNCTION: ROBLOXSTUDIO 0x00952e65
extern "C" __declspec(naked) void adjustorThunk_00952e65()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e65 }
}

extern "C" void thunkTarget_00952e6d();
// FUNCTION: ROBLOXSTUDIO 0x00952e6d
extern "C" __declspec(naked) void adjustorThunk_00952e6d()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e6d }
}

extern "C" void thunkTarget_00952e7d();
// FUNCTION: ROBLOXSTUDIO 0x00952e7d
extern "C" __declspec(naked) void adjustorThunk_00952e7d()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e7d }
}

extern "C" void thunkTarget_00952e85();
// FUNCTION: ROBLOXSTUDIO 0x00952e85
extern "C" __declspec(naked) void adjustorThunk_00952e85()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e85 }
}

extern "C" void thunkTarget_00952e8d();
// FUNCTION: ROBLOXSTUDIO 0x00952e8d
extern "C" __declspec(naked) void adjustorThunk_00952e8d()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e8d }
}

extern "C" void thunkTarget_00952e95();
// FUNCTION: ROBLOXSTUDIO 0x00952e95
extern "C" __declspec(naked) void adjustorThunk_00952e95()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e95 }
}

extern "C" void thunkTarget_00952e9d();
// FUNCTION: ROBLOXSTUDIO 0x00952e9d
extern "C" __declspec(naked) void adjustorThunk_00952e9d()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952e9d }
}

extern "C" void thunkTarget_00952ea5();
// FUNCTION: ROBLOXSTUDIO 0x00952ea5
extern "C" __declspec(naked) void adjustorThunk_00952ea5()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952ea5 }
}

extern "C" void thunkTarget_00952ead();
// FUNCTION: ROBLOXSTUDIO 0x00952ead
extern "C" __declspec(naked) void adjustorThunk_00952ead()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952ead }
}

extern "C" void thunkTarget_00952eb5();
// FUNCTION: ROBLOXSTUDIO 0x00952eb5
extern "C" __declspec(naked) void adjustorThunk_00952eb5()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00952eb5 }
}

extern "C" void thunkTarget_00a2cc73();
// FUNCTION: ROBLOXSTUDIO 0x00a2cc73
extern "C" __declspec(naked) void adjustorThunk_00a2cc73()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00a2cc73 }
}

extern "C" void thunkTarget_00a2cc8b();
// FUNCTION: ROBLOXSTUDIO 0x00a2cc8b
extern "C" __declspec(naked) void adjustorThunk_00a2cc8b()
{
	__asm { sub ecx, 0xc }
	__asm { jmp thunkTarget_00a2cc8b }
}

extern "C" void thunkTarget_007851f2();
// FUNCTION: ROBLOXSTUDIO 0x007851f2
extern "C" __declspec(naked) void adjustorThunk_007851f2()
{
	__asm { sub ecx, 0x10 }
	__asm { jmp thunkTarget_007851f2 }
}

extern "C" void thunkTarget_0078520a();
// FUNCTION: ROBLOXSTUDIO 0x0078520a
extern "C" __declspec(naked) void adjustorThunk_0078520a()
{
	__asm { sub ecx, 0x10 }
	__asm { jmp thunkTarget_0078520a }
}

extern "C" void thunkTarget_004b5dae();
// FUNCTION: ROBLOXSTUDIO 0x004b5dae
extern "C" __declspec(naked) void adjustorThunk_004b5dae()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_004b5dae }
}

extern "C" void thunkTarget_004b5db6();
// FUNCTION: ROBLOXSTUDIO 0x004b5db6
extern "C" __declspec(naked) void adjustorThunk_004b5db6()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_004b5db6 }
}

extern "C" void thunkTarget_0053f64e();
// FUNCTION: ROBLOXSTUDIO 0x0053f64e
extern "C" __declspec(naked) void adjustorThunk_0053f64e()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_0053f64e }
}

extern "C" void thunkTarget_00565b0c();
// FUNCTION: ROBLOXSTUDIO 0x00565b0c
extern "C" __declspec(naked) void adjustorThunk_00565b0c()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00565b0c }
}

extern "C" void thunkTarget_00565b34();
// FUNCTION: ROBLOXSTUDIO 0x00565b34
extern "C" __declspec(naked) void adjustorThunk_00565b34()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00565b34 }
}

extern "C" void thunkTarget_00565b7f();
// FUNCTION: ROBLOXSTUDIO 0x00565b7f
extern "C" __declspec(naked) void adjustorThunk_00565b7f()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00565b7f }
}

extern "C" void thunkTarget_00565baf();
// FUNCTION: ROBLOXSTUDIO 0x00565baf
extern "C" __declspec(naked) void adjustorThunk_00565baf()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00565baf }
}

extern "C" void thunkTarget_00849be4();
// FUNCTION: ROBLOXSTUDIO 0x00849be4
extern "C" __declspec(naked) void adjustorThunk_00849be4()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00849be4 }
}

extern "C" void thunkTarget_00849bf7();
// FUNCTION: ROBLOXSTUDIO 0x00849bf7
extern "C" __declspec(naked) void adjustorThunk_00849bf7()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00849bf7 }
}

extern "C" void thunkTarget_00849c0a();
// FUNCTION: ROBLOXSTUDIO 0x00849c0a
extern "C" __declspec(naked) void adjustorThunk_00849c0a()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00849c0a }
}

extern "C" void thunkTarget_00849c1d();
// FUNCTION: ROBLOXSTUDIO 0x00849c1d
extern "C" __declspec(naked) void adjustorThunk_00849c1d()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00849c1d }
}

extern "C" void thunkTarget_00849c25();
// FUNCTION: ROBLOXSTUDIO 0x00849c25
extern "C" __declspec(naked) void adjustorThunk_00849c25()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00849c25 }
}

extern "C" void thunkTarget_00849c2d();
// FUNCTION: ROBLOXSTUDIO 0x00849c2d
extern "C" __declspec(naked) void adjustorThunk_00849c2d()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00849c2d }
}

extern "C" void thunkTarget_00849c35();
// FUNCTION: ROBLOXSTUDIO 0x00849c35
extern "C" __declspec(naked) void adjustorThunk_00849c35()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00849c35 }
}

extern "C" void thunkTarget_00849c3d();
// FUNCTION: ROBLOXSTUDIO 0x00849c3d
extern "C" __declspec(naked) void adjustorThunk_00849c3d()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00849c3d }
}

extern "C" void thunkTarget_00952cec();
// FUNCTION: ROBLOXSTUDIO 0x00952cec
extern "C" __declspec(naked) void adjustorThunk_00952cec()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00952cec }
}

extern "C" void thunkTarget_00952cff();
// FUNCTION: ROBLOXSTUDIO 0x00952cff
extern "C" __declspec(naked) void adjustorThunk_00952cff()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00952cff }
}

extern "C" void thunkTarget_00952d12();
// FUNCTION: ROBLOXSTUDIO 0x00952d12
extern "C" __declspec(naked) void adjustorThunk_00952d12()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00952d12 }
}

extern "C" void thunkTarget_00952d84();
// FUNCTION: ROBLOXSTUDIO 0x00952d84
extern "C" __declspec(naked) void adjustorThunk_00952d84()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00952d84 }
}

extern "C" void thunkTarget_00952e45();
// FUNCTION: ROBLOXSTUDIO 0x00952e45
extern "C" __declspec(naked) void adjustorThunk_00952e45()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00952e45 }
}

extern "C" void thunkTarget_00952e75();
// FUNCTION: ROBLOXSTUDIO 0x00952e75
extern "C" __declspec(naked) void adjustorThunk_00952e75()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00952e75 }
}

extern "C" void thunkTarget_00952ebd();
// FUNCTION: ROBLOXSTUDIO 0x00952ebd
extern "C" __declspec(naked) void adjustorThunk_00952ebd()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00952ebd }
}

extern "C" void thunkTarget_00952ec5();
// FUNCTION: ROBLOXSTUDIO 0x00952ec5
extern "C" __declspec(naked) void adjustorThunk_00952ec5()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00952ec5 }
}

extern "C" void thunkTarget_00952ecd();
// FUNCTION: ROBLOXSTUDIO 0x00952ecd
extern "C" __declspec(naked) void adjustorThunk_00952ecd()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00952ecd }
}

extern "C" void thunkTarget_00952ed5();
// FUNCTION: ROBLOXSTUDIO 0x00952ed5
extern "C" __declspec(naked) void adjustorThunk_00952ed5()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00952ed5 }
}

extern "C" void thunkTarget_00a2cc4d();
// FUNCTION: ROBLOXSTUDIO 0x00a2cc4d
extern "C" __declspec(naked) void adjustorThunk_00a2cc4d()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00a2cc4d }
}

extern "C" void thunkTarget_00a2cc7b();
// FUNCTION: ROBLOXSTUDIO 0x00a2cc7b
extern "C" __declspec(naked) void adjustorThunk_00a2cc7b()
{
	__asm { sub ecx, 0x14 }
	__asm { jmp thunkTarget_00a2cc7b }
}

extern "C" void thunkTarget_0040e181();
// FUNCTION: ROBLOXSTUDIO 0x0040e181
extern "C" __declspec(naked) void adjustorThunk_0040e181()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0040e181 }
}

extern "C" void thunkTarget_0040e191();
// FUNCTION: ROBLOXSTUDIO 0x0040e191
extern "C" __declspec(naked) void adjustorThunk_0040e191()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0040e191 }
}

extern "C" void thunkTarget_0040e1a1();
// FUNCTION: ROBLOXSTUDIO 0x0040e1a1
extern "C" __declspec(naked) void adjustorThunk_0040e1a1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0040e1a1 }
}

extern "C" void thunkTarget_0043e7e8();
// FUNCTION: ROBLOXSTUDIO 0x0043e7e8
extern "C" __declspec(naked) void adjustorThunk_0043e7e8()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0043e7e8 }
}

extern "C" void thunkTarget_0043e7f8();
// FUNCTION: ROBLOXSTUDIO 0x0043e7f8
extern "C" __declspec(naked) void adjustorThunk_0043e7f8()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0043e7f8 }
}

extern "C" void thunkTarget_0043e808();
// FUNCTION: ROBLOXSTUDIO 0x0043e808
extern "C" __declspec(naked) void adjustorThunk_0043e808()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0043e808 }
}

extern "C" void thunkTarget_0048dcea();
// FUNCTION: ROBLOXSTUDIO 0x0048dcea
extern "C" __declspec(naked) void adjustorThunk_0048dcea()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0048dcea }
}

extern "C" void thunkTarget_004955ce();
// FUNCTION: ROBLOXSTUDIO 0x004955ce
extern "C" __declspec(naked) void adjustorThunk_004955ce()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_004955ce }
}

extern "C" void thunkTarget_004955de();
// FUNCTION: ROBLOXSTUDIO 0x004955de
extern "C" __declspec(naked) void adjustorThunk_004955de()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_004955de }
}

extern "C" void thunkTarget_004962de();
// FUNCTION: ROBLOXSTUDIO 0x004962de
extern "C" __declspec(naked) void adjustorThunk_004962de()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_004962de }
}

extern "C" void thunkTarget_004962ee();
// FUNCTION: ROBLOXSTUDIO 0x004962ee
extern "C" __declspec(naked) void adjustorThunk_004962ee()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_004962ee }
}

extern "C" void thunkTarget_004962f6();
// FUNCTION: ROBLOXSTUDIO 0x004962f6
extern "C" __declspec(naked) void adjustorThunk_004962f6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_004962f6 }
}

extern "C" void thunkTarget_004a4b87();
// FUNCTION: ROBLOXSTUDIO 0x004a4b87
extern "C" __declspec(naked) void adjustorThunk_004a4b87()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_004a4b87 }
}

extern "C" void thunkTarget_004cf04f();
// FUNCTION: ROBLOXSTUDIO 0x004cf04f
extern "C" __declspec(naked) void adjustorThunk_004cf04f()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_004cf04f }
}

extern "C" void thunkTarget_005317fc();
// FUNCTION: ROBLOXSTUDIO 0x005317fc
extern "C" __declspec(naked) void adjustorThunk_005317fc()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_005317fc }
}

extern "C" void thunkTarget_00565ab1();
// FUNCTION: ROBLOXSTUDIO 0x00565ab1
extern "C" __declspec(naked) void adjustorThunk_00565ab1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565ab1 }
}

extern "C" void thunkTarget_00565ab9();
// FUNCTION: ROBLOXSTUDIO 0x00565ab9
extern "C" __declspec(naked) void adjustorThunk_00565ab9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565ab9 }
}

extern "C" void thunkTarget_00565ac9();
// FUNCTION: ROBLOXSTUDIO 0x00565ac9
extern "C" __declspec(naked) void adjustorThunk_00565ac9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565ac9 }
}

extern "C" void thunkTarget_00565ad1();
// FUNCTION: ROBLOXSTUDIO 0x00565ad1
extern "C" __declspec(naked) void adjustorThunk_00565ad1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565ad1 }
}

extern "C" void thunkTarget_00565ad9();
// FUNCTION: ROBLOXSTUDIO 0x00565ad9
extern "C" __declspec(naked) void adjustorThunk_00565ad9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565ad9 }
}

extern "C" void thunkTarget_00565b14();
// FUNCTION: ROBLOXSTUDIO 0x00565b14
extern "C" __declspec(naked) void adjustorThunk_00565b14()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565b14 }
}

extern "C" void thunkTarget_00565b24();
// FUNCTION: ROBLOXSTUDIO 0x00565b24
extern "C" __declspec(naked) void adjustorThunk_00565b24()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565b24 }
}

extern "C" void thunkTarget_00565b2c();
// FUNCTION: ROBLOXSTUDIO 0x00565b2c
extern "C" __declspec(naked) void adjustorThunk_00565b2c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565b2c }
}

extern "C" void thunkTarget_00565b3c();
// FUNCTION: ROBLOXSTUDIO 0x00565b3c
extern "C" __declspec(naked) void adjustorThunk_00565b3c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565b3c }
}

extern "C" void thunkTarget_00565b77();
// FUNCTION: ROBLOXSTUDIO 0x00565b77
extern "C" __declspec(naked) void adjustorThunk_00565b77()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565b77 }
}

extern "C" void thunkTarget_00565b87();
// FUNCTION: ROBLOXSTUDIO 0x00565b87
extern "C" __declspec(naked) void adjustorThunk_00565b87()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565b87 }
}

extern "C" void thunkTarget_00565b9f();
// FUNCTION: ROBLOXSTUDIO 0x00565b9f
extern "C" __declspec(naked) void adjustorThunk_00565b9f()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565b9f }
}

extern "C" void thunkTarget_00565bbf();
// FUNCTION: ROBLOXSTUDIO 0x00565bbf
extern "C" __declspec(naked) void adjustorThunk_00565bbf()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00565bbf }
}

extern "C" void thunkTarget_00626857();
// FUNCTION: ROBLOXSTUDIO 0x00626857
extern "C" __declspec(naked) void adjustorThunk_00626857()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00626857 }
}

extern "C" void thunkTarget_00626867();
// FUNCTION: ROBLOXSTUDIO 0x00626867
extern "C" __declspec(naked) void adjustorThunk_00626867()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00626867 }
}

extern "C" void thunkTarget_00692ebc();
// FUNCTION: ROBLOXSTUDIO 0x00692ebc
extern "C" __declspec(naked) void adjustorThunk_00692ebc()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00692ebc }
}

extern "C" void thunkTarget_0078c369();
// FUNCTION: ROBLOXSTUDIO 0x0078c369
extern "C" __declspec(naked) void adjustorThunk_0078c369()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0078c369 }
}

extern "C" void thunkTarget_0078c379();
// FUNCTION: ROBLOXSTUDIO 0x0078c379
extern "C" __declspec(naked) void adjustorThunk_0078c379()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0078c379 }
}

extern "C" void thunkTarget_007a0ba0();
// FUNCTION: ROBLOXSTUDIO 0x007a0ba0
extern "C" __declspec(naked) void adjustorThunk_007a0ba0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007a0ba0 }
}

extern "C" void thunkTarget_007a0bb0();
// FUNCTION: ROBLOXSTUDIO 0x007a0bb0
extern "C" __declspec(naked) void adjustorThunk_007a0bb0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007a0bb0 }
}

extern "C" void thunkTarget_007a0bc0();
// FUNCTION: ROBLOXSTUDIO 0x007a0bc0
extern "C" __declspec(naked) void adjustorThunk_007a0bc0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007a0bc0 }
}

extern "C" void thunkTarget_007ba5ec();
// FUNCTION: ROBLOXSTUDIO 0x007ba5ec
extern "C" __declspec(naked) void adjustorThunk_007ba5ec()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007ba5ec }
}

extern "C" void thunkTarget_007ba5fc();
// FUNCTION: ROBLOXSTUDIO 0x007ba5fc
extern "C" __declspec(naked) void adjustorThunk_007ba5fc()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007ba5fc }
}

extern "C" void thunkTarget_007c23dd();
// FUNCTION: ROBLOXSTUDIO 0x007c23dd
extern "C" __declspec(naked) void adjustorThunk_007c23dd()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007c23dd }
}

extern "C" void thunkTarget_007c5858();
// FUNCTION: ROBLOXSTUDIO 0x007c5858
extern "C" __declspec(naked) void adjustorThunk_007c5858()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007c5858 }
}

extern "C" void thunkTarget_007c5860();
// FUNCTION: ROBLOXSTUDIO 0x007c5860
extern "C" __declspec(naked) void adjustorThunk_007c5860()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007c5860 }
}

extern "C" void thunkTarget_007c5870();
// FUNCTION: ROBLOXSTUDIO 0x007c5870
extern "C" __declspec(naked) void adjustorThunk_007c5870()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007c5870 }
}

extern "C" void thunkTarget_007c5880();
// FUNCTION: ROBLOXSTUDIO 0x007c5880
extern "C" __declspec(naked) void adjustorThunk_007c5880()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007c5880 }
}

extern "C" void thunkTarget_007c90cf();
// FUNCTION: ROBLOXSTUDIO 0x007c90cf
extern "C" __declspec(naked) void adjustorThunk_007c90cf()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007c90cf }
}

extern "C" void thunkTarget_007c90df();
// FUNCTION: ROBLOXSTUDIO 0x007c90df
extern "C" __declspec(naked) void adjustorThunk_007c90df()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007c90df }
}

extern "C" void thunkTarget_007c90e7();
// FUNCTION: ROBLOXSTUDIO 0x007c90e7
extern "C" __declspec(naked) void adjustorThunk_007c90e7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007c90e7 }
}

extern "C" void thunkTarget_007c90f7();
// FUNCTION: ROBLOXSTUDIO 0x007c90f7
extern "C" __declspec(naked) void adjustorThunk_007c90f7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_007c90f7 }
}

extern "C" void thunkTarget_0080ce0b();
// FUNCTION: ROBLOXSTUDIO 0x0080ce0b
extern "C" __declspec(naked) void adjustorThunk_0080ce0b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ce0b }
}

extern "C" void thunkTarget_0080ce1b();
// FUNCTION: ROBLOXSTUDIO 0x0080ce1b
extern "C" __declspec(naked) void adjustorThunk_0080ce1b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ce1b }
}

extern "C" void thunkTarget_0080ce2b();
// FUNCTION: ROBLOXSTUDIO 0x0080ce2b
extern "C" __declspec(naked) void adjustorThunk_0080ce2b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ce2b }
}

extern "C" void thunkTarget_0080ce3b();
// FUNCTION: ROBLOXSTUDIO 0x0080ce3b
extern "C" __declspec(naked) void adjustorThunk_0080ce3b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ce3b }
}

extern "C" void thunkTarget_0080ce4b();
// FUNCTION: ROBLOXSTUDIO 0x0080ce4b
extern "C" __declspec(naked) void adjustorThunk_0080ce4b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ce4b }
}

extern "C" void thunkTarget_0080ce5b();
// FUNCTION: ROBLOXSTUDIO 0x0080ce5b
extern "C" __declspec(naked) void adjustorThunk_0080ce5b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ce5b }
}

extern "C" void thunkTarget_0080ce6b();
// FUNCTION: ROBLOXSTUDIO 0x0080ce6b
extern "C" __declspec(naked) void adjustorThunk_0080ce6b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ce6b }
}

extern "C" void thunkTarget_0080ce7b();
// FUNCTION: ROBLOXSTUDIO 0x0080ce7b
extern "C" __declspec(naked) void adjustorThunk_0080ce7b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ce7b }
}

extern "C" void thunkTarget_0080ce8b();
// FUNCTION: ROBLOXSTUDIO 0x0080ce8b
extern "C" __declspec(naked) void adjustorThunk_0080ce8b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ce8b }
}

extern "C" void thunkTarget_0080ce9b();
// FUNCTION: ROBLOXSTUDIO 0x0080ce9b
extern "C" __declspec(naked) void adjustorThunk_0080ce9b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ce9b }
}

extern "C" void thunkTarget_0080ceab();
// FUNCTION: ROBLOXSTUDIO 0x0080ceab
extern "C" __declspec(naked) void adjustorThunk_0080ceab()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ceab }
}

extern "C" void thunkTarget_0080cebb();
// FUNCTION: ROBLOXSTUDIO 0x0080cebb
extern "C" __declspec(naked) void adjustorThunk_0080cebb()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cebb }
}

extern "C" void thunkTarget_0080cecb();
// FUNCTION: ROBLOXSTUDIO 0x0080cecb
extern "C" __declspec(naked) void adjustorThunk_0080cecb()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cecb }
}

extern "C" void thunkTarget_0080cedb();
// FUNCTION: ROBLOXSTUDIO 0x0080cedb
extern "C" __declspec(naked) void adjustorThunk_0080cedb()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cedb }
}

extern "C" void thunkTarget_0080ceeb();
// FUNCTION: ROBLOXSTUDIO 0x0080ceeb
extern "C" __declspec(naked) void adjustorThunk_0080ceeb()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080ceeb }
}

extern "C" void thunkTarget_0080cefb();
// FUNCTION: ROBLOXSTUDIO 0x0080cefb
extern "C" __declspec(naked) void adjustorThunk_0080cefb()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cefb }
}

extern "C" void thunkTarget_0080cf0b();
// FUNCTION: ROBLOXSTUDIO 0x0080cf0b
extern "C" __declspec(naked) void adjustorThunk_0080cf0b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cf0b }
}

extern "C" void thunkTarget_0080cf1b();
// FUNCTION: ROBLOXSTUDIO 0x0080cf1b
extern "C" __declspec(naked) void adjustorThunk_0080cf1b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cf1b }
}

extern "C" void thunkTarget_0080cf23();
// FUNCTION: ROBLOXSTUDIO 0x0080cf23
extern "C" __declspec(naked) void adjustorThunk_0080cf23()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cf23 }
}

extern "C" void thunkTarget_0080cf33();
// FUNCTION: ROBLOXSTUDIO 0x0080cf33
extern "C" __declspec(naked) void adjustorThunk_0080cf33()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cf33 }
}

extern "C" void thunkTarget_0080cf43();
// FUNCTION: ROBLOXSTUDIO 0x0080cf43
extern "C" __declspec(naked) void adjustorThunk_0080cf43()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cf43 }
}

extern "C" void thunkTarget_0080cf53();
// FUNCTION: ROBLOXSTUDIO 0x0080cf53
extern "C" __declspec(naked) void adjustorThunk_0080cf53()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cf53 }
}

extern "C" void thunkTarget_0080cf63();
// FUNCTION: ROBLOXSTUDIO 0x0080cf63
extern "C" __declspec(naked) void adjustorThunk_0080cf63()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cf63 }
}

extern "C" void thunkTarget_0080cf73();
// FUNCTION: ROBLOXSTUDIO 0x0080cf73
extern "C" __declspec(naked) void adjustorThunk_0080cf73()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cf73 }
}

extern "C" void thunkTarget_0080cf83();
// FUNCTION: ROBLOXSTUDIO 0x0080cf83
extern "C" __declspec(naked) void adjustorThunk_0080cf83()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cf83 }
}

extern "C" void thunkTarget_0080cf93();
// FUNCTION: ROBLOXSTUDIO 0x0080cf93
extern "C" __declspec(naked) void adjustorThunk_0080cf93()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cf93 }
}

extern "C" void thunkTarget_0080cfa3();
// FUNCTION: ROBLOXSTUDIO 0x0080cfa3
extern "C" __declspec(naked) void adjustorThunk_0080cfa3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cfa3 }
}

extern "C" void thunkTarget_0080cfb3();
// FUNCTION: ROBLOXSTUDIO 0x0080cfb3
extern "C" __declspec(naked) void adjustorThunk_0080cfb3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cfb3 }
}

extern "C" void thunkTarget_0080cfc3();
// FUNCTION: ROBLOXSTUDIO 0x0080cfc3
extern "C" __declspec(naked) void adjustorThunk_0080cfc3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cfc3 }
}

extern "C" void thunkTarget_0080cfd3();
// FUNCTION: ROBLOXSTUDIO 0x0080cfd3
extern "C" __declspec(naked) void adjustorThunk_0080cfd3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cfd3 }
}

extern "C" void thunkTarget_0080cfe3();
// FUNCTION: ROBLOXSTUDIO 0x0080cfe3
extern "C" __declspec(naked) void adjustorThunk_0080cfe3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cfe3 }
}

extern "C" void thunkTarget_0080cff3();
// FUNCTION: ROBLOXSTUDIO 0x0080cff3
extern "C" __declspec(naked) void adjustorThunk_0080cff3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0080cff3 }
}

extern "C" void thunkTarget_00825f4d();
// FUNCTION: ROBLOXSTUDIO 0x00825f4d
extern "C" __declspec(naked) void adjustorThunk_00825f4d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00825f4d }
}

extern "C" void thunkTarget_00825f5d();
// FUNCTION: ROBLOXSTUDIO 0x00825f5d
extern "C" __declspec(naked) void adjustorThunk_00825f5d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00825f5d }
}

extern "C" void thunkTarget_00829e22();
// FUNCTION: ROBLOXSTUDIO 0x00829e22
extern "C" __declspec(naked) void adjustorThunk_00829e22()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00829e22 }
}

extern "C" void thunkTarget_00849c45();
// FUNCTION: ROBLOXSTUDIO 0x00849c45
extern "C" __declspec(naked) void adjustorThunk_00849c45()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00849c45 }
}

extern "C" void thunkTarget_00849c76();
// FUNCTION: ROBLOXSTUDIO 0x00849c76
extern "C" __declspec(naked) void adjustorThunk_00849c76()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00849c76 }
}

extern "C" void thunkTarget_00849c8e();
// FUNCTION: ROBLOXSTUDIO 0x00849c8e
extern "C" __declspec(naked) void adjustorThunk_00849c8e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00849c8e }
}

extern "C" void thunkTarget_0086c373();
// FUNCTION: ROBLOXSTUDIO 0x0086c373
extern "C" __declspec(naked) void adjustorThunk_0086c373()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0086c373 }
}

extern "C" void thunkTarget_0086c37b();
// FUNCTION: ROBLOXSTUDIO 0x0086c37b
extern "C" __declspec(naked) void adjustorThunk_0086c37b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0086c37b }
}

extern "C" void thunkTarget_0087b5f6();
// FUNCTION: ROBLOXSTUDIO 0x0087b5f6
extern "C" __declspec(naked) void adjustorThunk_0087b5f6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0087b5f6 }
}

extern "C" void thunkTarget_0087b606();
// FUNCTION: ROBLOXSTUDIO 0x0087b606
extern "C" __declspec(naked) void adjustorThunk_0087b606()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0087b606 }
}

extern "C" void thunkTarget_0087dbf6();
// FUNCTION: ROBLOXSTUDIO 0x0087dbf6
extern "C" __declspec(naked) void adjustorThunk_0087dbf6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0087dbf6 }
}

extern "C" void thunkTarget_0087dc06();
// FUNCTION: ROBLOXSTUDIO 0x0087dc06
extern "C" __declspec(naked) void adjustorThunk_0087dc06()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0087dc06 }
}

extern "C" void thunkTarget_0088071a();
// FUNCTION: ROBLOXSTUDIO 0x0088071a
extern "C" __declspec(naked) void adjustorThunk_0088071a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0088071a }
}

extern "C" void thunkTarget_0088072a();
// FUNCTION: ROBLOXSTUDIO 0x0088072a
extern "C" __declspec(naked) void adjustorThunk_0088072a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0088072a }
}

extern "C" void thunkTarget_00884606();
// FUNCTION: ROBLOXSTUDIO 0x00884606
extern "C" __declspec(naked) void adjustorThunk_00884606()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00884606 }
}

extern "C" void thunkTarget_00884616();
// FUNCTION: ROBLOXSTUDIO 0x00884616
extern "C" __declspec(naked) void adjustorThunk_00884616()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00884616 }
}

extern "C" void thunkTarget_0088572e();
// FUNCTION: ROBLOXSTUDIO 0x0088572e
extern "C" __declspec(naked) void adjustorThunk_0088572e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0088572e }
}

extern "C" void thunkTarget_00885736();
// FUNCTION: ROBLOXSTUDIO 0x00885736
extern "C" __declspec(naked) void adjustorThunk_00885736()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00885736 }
}

extern "C" void thunkTarget_0088f0fc();
// FUNCTION: ROBLOXSTUDIO 0x0088f0fc
extern "C" __declspec(naked) void adjustorThunk_0088f0fc()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0088f0fc }
}

extern "C" void thunkTarget_0089a32c();
// FUNCTION: ROBLOXSTUDIO 0x0089a32c
extern "C" __declspec(naked) void adjustorThunk_0089a32c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0089a32c }
}

extern "C" void thunkTarget_008a0efa();
// FUNCTION: ROBLOXSTUDIO 0x008a0efa
extern "C" __declspec(naked) void adjustorThunk_008a0efa()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008a0efa }
}

extern "C" void thunkTarget_008a0f0a();
// FUNCTION: ROBLOXSTUDIO 0x008a0f0a
extern "C" __declspec(naked) void adjustorThunk_008a0f0a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008a0f0a }
}

extern "C" void thunkTarget_008a73b6();
// FUNCTION: ROBLOXSTUDIO 0x008a73b6
extern "C" __declspec(naked) void adjustorThunk_008a73b6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008a73b6 }
}

extern "C" void thunkTarget_008a73c6();
// FUNCTION: ROBLOXSTUDIO 0x008a73c6
extern "C" __declspec(naked) void adjustorThunk_008a73c6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008a73c6 }
}

extern "C" void thunkTarget_008a9c7a();
// FUNCTION: ROBLOXSTUDIO 0x008a9c7a
extern "C" __declspec(naked) void adjustorThunk_008a9c7a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008a9c7a }
}

extern "C" void thunkTarget_008a9c8a();
// FUNCTION: ROBLOXSTUDIO 0x008a9c8a
extern "C" __declspec(naked) void adjustorThunk_008a9c8a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008a9c8a }
}

extern "C" void thunkTarget_008aa580();
// FUNCTION: ROBLOXSTUDIO 0x008aa580
extern "C" __declspec(naked) void adjustorThunk_008aa580()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008aa580 }
}

extern "C" void thunkTarget_008abbf5();
// FUNCTION: ROBLOXSTUDIO 0x008abbf5
extern "C" __declspec(naked) void adjustorThunk_008abbf5()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008abbf5 }
}

extern "C" void thunkTarget_008abc18();
// FUNCTION: ROBLOXSTUDIO 0x008abc18
extern "C" __declspec(naked) void adjustorThunk_008abc18()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008abc18 }
}

extern "C" void thunkTarget_008abc2b();
// FUNCTION: ROBLOXSTUDIO 0x008abc2b
extern "C" __declspec(naked) void adjustorThunk_008abc2b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008abc2b }
}

extern "C" void thunkTarget_008abc46();
// FUNCTION: ROBLOXSTUDIO 0x008abc46
extern "C" __declspec(naked) void adjustorThunk_008abc46()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008abc46 }
}

extern "C" void thunkTarget_008bb44f();
// FUNCTION: ROBLOXSTUDIO 0x008bb44f
extern "C" __declspec(naked) void adjustorThunk_008bb44f()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008bb44f }
}

extern "C" void thunkTarget_008bb45f();
// FUNCTION: ROBLOXSTUDIO 0x008bb45f
extern "C" __declspec(naked) void adjustorThunk_008bb45f()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008bb45f }
}

extern "C" void thunkTarget_008bb46f();
// FUNCTION: ROBLOXSTUDIO 0x008bb46f
extern "C" __declspec(naked) void adjustorThunk_008bb46f()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008bb46f }
}

extern "C" void thunkTarget_008c3f84();
// FUNCTION: ROBLOXSTUDIO 0x008c3f84
extern "C" __declspec(naked) void adjustorThunk_008c3f84()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008c3f84 }
}

extern "C" void thunkTarget_008d1b76();
// FUNCTION: ROBLOXSTUDIO 0x008d1b76
extern "C" __declspec(naked) void adjustorThunk_008d1b76()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008d1b76 }
}

extern "C" void thunkTarget_008d1b86();
// FUNCTION: ROBLOXSTUDIO 0x008d1b86
extern "C" __declspec(naked) void adjustorThunk_008d1b86()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008d1b86 }
}

extern "C" void thunkTarget_008edefb();
// FUNCTION: ROBLOXSTUDIO 0x008edefb
extern "C" __declspec(naked) void adjustorThunk_008edefb()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008edefb }
}

extern "C" void thunkTarget_008f50f3();
// FUNCTION: ROBLOXSTUDIO 0x008f50f3
extern "C" __declspec(naked) void adjustorThunk_008f50f3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008f50f3 }
}

extern "C" void thunkTarget_008fe87b();
// FUNCTION: ROBLOXSTUDIO 0x008fe87b
extern "C" __declspec(naked) void adjustorThunk_008fe87b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008fe87b }
}

extern "C" void thunkTarget_008fe88b();
// FUNCTION: ROBLOXSTUDIO 0x008fe88b
extern "C" __declspec(naked) void adjustorThunk_008fe88b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008fe88b }
}

extern "C" void thunkTarget_008fe89b();
// FUNCTION: ROBLOXSTUDIO 0x008fe89b
extern "C" __declspec(naked) void adjustorThunk_008fe89b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008fe89b }
}

extern "C" void thunkTarget_008fe8a3();
// FUNCTION: ROBLOXSTUDIO 0x008fe8a3
extern "C" __declspec(naked) void adjustorThunk_008fe8a3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_008fe8a3 }
}

extern "C" void thunkTarget_00901197();
// FUNCTION: ROBLOXSTUDIO 0x00901197
extern "C" __declspec(naked) void adjustorThunk_00901197()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00901197 }
}

extern "C" void thunkTarget_009011a7();
// FUNCTION: ROBLOXSTUDIO 0x009011a7
extern "C" __declspec(naked) void adjustorThunk_009011a7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009011a7 }
}

extern "C" void thunkTarget_009021c1();
// FUNCTION: ROBLOXSTUDIO 0x009021c1
extern "C" __declspec(naked) void adjustorThunk_009021c1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009021c1 }
}

extern "C" void thunkTarget_009021d1();
// FUNCTION: ROBLOXSTUDIO 0x009021d1
extern "C" __declspec(naked) void adjustorThunk_009021d1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009021d1 }
}

extern "C" void thunkTarget_009021e1();
// FUNCTION: ROBLOXSTUDIO 0x009021e1
extern "C" __declspec(naked) void adjustorThunk_009021e1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009021e1 }
}

extern "C" void thunkTarget_00908444();
// FUNCTION: ROBLOXSTUDIO 0x00908444
extern "C" __declspec(naked) void adjustorThunk_00908444()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00908444 }
}

extern "C" void thunkTarget_00908454();
// FUNCTION: ROBLOXSTUDIO 0x00908454
extern "C" __declspec(naked) void adjustorThunk_00908454()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00908454 }
}

extern "C" void thunkTarget_00908464();
// FUNCTION: ROBLOXSTUDIO 0x00908464
extern "C" __declspec(naked) void adjustorThunk_00908464()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00908464 }
}

extern "C" void thunkTarget_0090a64a();
// FUNCTION: ROBLOXSTUDIO 0x0090a64a
extern "C" __declspec(naked) void adjustorThunk_0090a64a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0090a64a }
}

extern "C" void thunkTarget_0090a662();
// FUNCTION: ROBLOXSTUDIO 0x0090a662
extern "C" __declspec(naked) void adjustorThunk_0090a662()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0090a662 }
}

extern "C" void thunkTarget_0090a66a();
// FUNCTION: ROBLOXSTUDIO 0x0090a66a
extern "C" __declspec(naked) void adjustorThunk_0090a66a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0090a66a }
}

extern "C" void thunkTarget_0090a67a();
// FUNCTION: ROBLOXSTUDIO 0x0090a67a
extern "C" __declspec(naked) void adjustorThunk_0090a67a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0090a67a }
}

extern "C" void thunkTarget_0090d35d();
// FUNCTION: ROBLOXSTUDIO 0x0090d35d
extern "C" __declspec(naked) void adjustorThunk_0090d35d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0090d35d }
}

extern "C" void thunkTarget_0090fd8e();
// FUNCTION: ROBLOXSTUDIO 0x0090fd8e
extern "C" __declspec(naked) void adjustorThunk_0090fd8e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0090fd8e }
}

extern "C" void thunkTarget_0090fda9();
// FUNCTION: ROBLOXSTUDIO 0x0090fda9
extern "C" __declspec(naked) void adjustorThunk_0090fda9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0090fda9 }
}

extern "C" void thunkTarget_0090fdbc();
// FUNCTION: ROBLOXSTUDIO 0x0090fdbc
extern "C" __declspec(naked) void adjustorThunk_0090fdbc()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0090fdbc }
}

extern "C" void thunkTarget_0090fdd7();
// FUNCTION: ROBLOXSTUDIO 0x0090fdd7
extern "C" __declspec(naked) void adjustorThunk_0090fdd7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0090fdd7 }
}

extern "C" void thunkTarget_009131e0();
// FUNCTION: ROBLOXSTUDIO 0x009131e0
extern "C" __declspec(naked) void adjustorThunk_009131e0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009131e0 }
}

extern "C" void thunkTarget_009131f0();
// FUNCTION: ROBLOXSTUDIO 0x009131f0
extern "C" __declspec(naked) void adjustorThunk_009131f0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009131f0 }
}

extern "C" void thunkTarget_00913210();
// FUNCTION: ROBLOXSTUDIO 0x00913210
extern "C" __declspec(naked) void adjustorThunk_00913210()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00913210 }
}

extern "C" void thunkTarget_00913220();
// FUNCTION: ROBLOXSTUDIO 0x00913220
extern "C" __declspec(naked) void adjustorThunk_00913220()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00913220 }
}

extern "C" void thunkTarget_00913230();
// FUNCTION: ROBLOXSTUDIO 0x00913230
extern "C" __declspec(naked) void adjustorThunk_00913230()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00913230 }
}

extern "C" void thunkTarget_00913238();
// FUNCTION: ROBLOXSTUDIO 0x00913238
extern "C" __declspec(naked) void adjustorThunk_00913238()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00913238 }
}

extern "C" void thunkTarget_00913260();
// FUNCTION: ROBLOXSTUDIO 0x00913260
extern "C" __declspec(naked) void adjustorThunk_00913260()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00913260 }
}

extern "C" void thunkTarget_00913270();
// FUNCTION: ROBLOXSTUDIO 0x00913270
extern "C" __declspec(naked) void adjustorThunk_00913270()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00913270 }
}

extern "C" void thunkTarget_00913278();
// FUNCTION: ROBLOXSTUDIO 0x00913278
extern "C" __declspec(naked) void adjustorThunk_00913278()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00913278 }
}

extern "C" void thunkTarget_00913280();
// FUNCTION: ROBLOXSTUDIO 0x00913280
extern "C" __declspec(naked) void adjustorThunk_00913280()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00913280 }
}

extern "C" void thunkTarget_00913298();
// FUNCTION: ROBLOXSTUDIO 0x00913298
extern "C" __declspec(naked) void adjustorThunk_00913298()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00913298 }
}

extern "C" void thunkTarget_00916a15();
// FUNCTION: ROBLOXSTUDIO 0x00916a15
extern "C" __declspec(naked) void adjustorThunk_00916a15()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00916a15 }
}

extern "C" void thunkTarget_00916a30();
// FUNCTION: ROBLOXSTUDIO 0x00916a30
extern "C" __declspec(naked) void adjustorThunk_00916a30()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00916a30 }
}

extern "C" void thunkTarget_00916a5e();
// FUNCTION: ROBLOXSTUDIO 0x00916a5e
extern "C" __declspec(naked) void adjustorThunk_00916a5e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00916a5e }
}

extern "C" void thunkTarget_00919997();
// FUNCTION: ROBLOXSTUDIO 0x00919997
extern "C" __declspec(naked) void adjustorThunk_00919997()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00919997 }
}

extern "C" void thunkTarget_009199c5();
// FUNCTION: ROBLOXSTUDIO 0x009199c5
extern "C" __declspec(naked) void adjustorThunk_009199c5()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009199c5 }
}

extern "C" void thunkTarget_009199cd();
// FUNCTION: ROBLOXSTUDIO 0x009199cd
extern "C" __declspec(naked) void adjustorThunk_009199cd()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009199cd }
}

extern "C" void thunkTarget_00919a11();
// FUNCTION: ROBLOXSTUDIO 0x00919a11
extern "C" __declspec(naked) void adjustorThunk_00919a11()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00919a11 }
}

extern "C" void thunkTarget_0091c990();
// FUNCTION: ROBLOXSTUDIO 0x0091c990
extern "C" __declspec(naked) void adjustorThunk_0091c990()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0091c990 }
}

extern "C" void thunkTarget_0091d190();
// FUNCTION: ROBLOXSTUDIO 0x0091d190
extern "C" __declspec(naked) void adjustorThunk_0091d190()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0091d190 }
}

extern "C" void thunkTarget_0091f1b4();
// FUNCTION: ROBLOXSTUDIO 0x0091f1b4
extern "C" __declspec(naked) void adjustorThunk_0091f1b4()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0091f1b4 }
}

extern "C" void thunkTarget_0091f1c4();
// FUNCTION: ROBLOXSTUDIO 0x0091f1c4
extern "C" __declspec(naked) void adjustorThunk_0091f1c4()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0091f1c4 }
}

extern "C" void thunkTarget_0092351c();
// FUNCTION: ROBLOXSTUDIO 0x0092351c
extern "C" __declspec(naked) void adjustorThunk_0092351c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0092351c }
}

extern "C" void thunkTarget_0092352c();
// FUNCTION: ROBLOXSTUDIO 0x0092352c
extern "C" __declspec(naked) void adjustorThunk_0092352c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0092352c }
}

extern "C" void thunkTarget_0092353c();
// FUNCTION: ROBLOXSTUDIO 0x0092353c
extern "C" __declspec(naked) void adjustorThunk_0092353c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0092353c }
}

extern "C" void thunkTarget_009285c9();
// FUNCTION: ROBLOXSTUDIO 0x009285c9
extern "C" __declspec(naked) void adjustorThunk_009285c9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009285c9 }
}

extern "C" void thunkTarget_009285d9();
// FUNCTION: ROBLOXSTUDIO 0x009285d9
extern "C" __declspec(naked) void adjustorThunk_009285d9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009285d9 }
}

extern "C" void thunkTarget_009285e9();
// FUNCTION: ROBLOXSTUDIO 0x009285e9
extern "C" __declspec(naked) void adjustorThunk_009285e9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009285e9 }
}

extern "C" void thunkTarget_009285f1();
// FUNCTION: ROBLOXSTUDIO 0x009285f1
extern "C" __declspec(naked) void adjustorThunk_009285f1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009285f1 }
}

extern "C" void thunkTarget_0092a1a7();
// FUNCTION: ROBLOXSTUDIO 0x0092a1a7
extern "C" __declspec(naked) void adjustorThunk_0092a1a7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0092a1a7 }
}

extern "C" void thunkTarget_0092eff9();
// FUNCTION: ROBLOXSTUDIO 0x0092eff9
extern "C" __declspec(naked) void adjustorThunk_0092eff9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0092eff9 }
}

extern "C" void thunkTarget_0092f001();
// FUNCTION: ROBLOXSTUDIO 0x0092f001
extern "C" __declspec(naked) void adjustorThunk_0092f001()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0092f001 }
}

extern "C" void thunkTarget_00937850();
// FUNCTION: ROBLOXSTUDIO 0x00937850
extern "C" __declspec(naked) void adjustorThunk_00937850()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00937850 }
}

extern "C" void thunkTarget_00939bd4();
// FUNCTION: ROBLOXSTUDIO 0x00939bd4
extern "C" __declspec(naked) void adjustorThunk_00939bd4()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00939bd4 }
}

extern "C" void thunkTarget_0093afe6();
// FUNCTION: ROBLOXSTUDIO 0x0093afe6
extern "C" __declspec(naked) void adjustorThunk_0093afe6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0093afe6 }
}

extern "C" void thunkTarget_0093aff6();
// FUNCTION: ROBLOXSTUDIO 0x0093aff6
extern "C" __declspec(naked) void adjustorThunk_0093aff6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0093aff6 }
}

extern "C" void thunkTarget_00941263();
// FUNCTION: ROBLOXSTUDIO 0x00941263
extern "C" __declspec(naked) void adjustorThunk_00941263()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00941263 }
}

extern "C" void thunkTarget_00941273();
// FUNCTION: ROBLOXSTUDIO 0x00941273
extern "C" __declspec(naked) void adjustorThunk_00941273()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00941273 }
}

extern "C" void thunkTarget_00941283();
// FUNCTION: ROBLOXSTUDIO 0x00941283
extern "C" __declspec(naked) void adjustorThunk_00941283()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00941283 }
}

extern "C" void thunkTarget_00941293();
// FUNCTION: ROBLOXSTUDIO 0x00941293
extern "C" __declspec(naked) void adjustorThunk_00941293()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00941293 }
}

extern "C" void thunkTarget_0095d200();
// FUNCTION: ROBLOXSTUDIO 0x0095d200
extern "C" __declspec(naked) void adjustorThunk_0095d200()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0095d200 }
}

extern "C" void thunkTarget_0095d208();
// FUNCTION: ROBLOXSTUDIO 0x0095d208
extern "C" __declspec(naked) void adjustorThunk_0095d208()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0095d208 }
}

extern "C" void thunkTarget_00965774();
// FUNCTION: ROBLOXSTUDIO 0x00965774
extern "C" __declspec(naked) void adjustorThunk_00965774()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00965774 }
}

extern "C" void thunkTarget_009657c8();
// FUNCTION: ROBLOXSTUDIO 0x009657c8
extern "C" __declspec(naked) void adjustorThunk_009657c8()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009657c8 }
}

extern "C" void thunkTarget_0096fb2a();
// FUNCTION: ROBLOXSTUDIO 0x0096fb2a
extern "C" __declspec(naked) void adjustorThunk_0096fb2a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0096fb2a }
}

extern "C" void thunkTarget_0096fb3a();
// FUNCTION: ROBLOXSTUDIO 0x0096fb3a
extern "C" __declspec(naked) void adjustorThunk_0096fb3a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0096fb3a }
}

extern "C" void thunkTarget_0097644d();
// FUNCTION: ROBLOXSTUDIO 0x0097644d
extern "C" __declspec(naked) void adjustorThunk_0097644d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0097644d }
}

extern "C" void thunkTarget_0097645d();
// FUNCTION: ROBLOXSTUDIO 0x0097645d
extern "C" __declspec(naked) void adjustorThunk_0097645d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0097645d }
}

extern "C" void thunkTarget_00980f4e();
// FUNCTION: ROBLOXSTUDIO 0x00980f4e
extern "C" __declspec(naked) void adjustorThunk_00980f4e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00980f4e }
}

extern "C" void thunkTarget_00980f5e();
// FUNCTION: ROBLOXSTUDIO 0x00980f5e
extern "C" __declspec(naked) void adjustorThunk_00980f5e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00980f5e }
}

extern "C" void thunkTarget_00980f6e();
// FUNCTION: ROBLOXSTUDIO 0x00980f6e
extern "C" __declspec(naked) void adjustorThunk_00980f6e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00980f6e }
}

extern "C" void thunkTarget_00981a1e();
// FUNCTION: ROBLOXSTUDIO 0x00981a1e
extern "C" __declspec(naked) void adjustorThunk_00981a1e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00981a1e }
}

extern "C" void thunkTarget_00981a2e();
// FUNCTION: ROBLOXSTUDIO 0x00981a2e
extern "C" __declspec(naked) void adjustorThunk_00981a2e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00981a2e }
}

extern "C" void thunkTarget_009825f1();
// FUNCTION: ROBLOXSTUDIO 0x009825f1
extern "C" __declspec(naked) void adjustorThunk_009825f1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009825f1 }
}

extern "C" void thunkTarget_00982601();
// FUNCTION: ROBLOXSTUDIO 0x00982601
extern "C" __declspec(naked) void adjustorThunk_00982601()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00982601 }
}

extern "C" void thunkTarget_009832fd();
// FUNCTION: ROBLOXSTUDIO 0x009832fd
extern "C" __declspec(naked) void adjustorThunk_009832fd()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009832fd }
}

extern "C" void thunkTarget_0098330d();
// FUNCTION: ROBLOXSTUDIO 0x0098330d
extern "C" __declspec(naked) void adjustorThunk_0098330d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0098330d }
}

extern "C" void thunkTarget_00983e70();
// FUNCTION: ROBLOXSTUDIO 0x00983e70
extern "C" __declspec(naked) void adjustorThunk_00983e70()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00983e70 }
}

extern "C" void thunkTarget_00984240();
// FUNCTION: ROBLOXSTUDIO 0x00984240
extern "C" __declspec(naked) void adjustorThunk_00984240()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00984240 }
}

extern "C" void thunkTarget_009844b0();
// FUNCTION: ROBLOXSTUDIO 0x009844b0
extern "C" __declspec(naked) void adjustorThunk_009844b0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009844b0 }
}

extern "C" void thunkTarget_0098c188();
// FUNCTION: ROBLOXSTUDIO 0x0098c188
extern "C" __declspec(naked) void adjustorThunk_0098c188()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0098c188 }
}

extern "C" void thunkTarget_0098c198();
// FUNCTION: ROBLOXSTUDIO 0x0098c198
extern "C" __declspec(naked) void adjustorThunk_0098c198()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0098c198 }
}

extern "C" void thunkTarget_0098c1a8();
// FUNCTION: ROBLOXSTUDIO 0x0098c1a8
extern "C" __declspec(naked) void adjustorThunk_0098c1a8()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0098c1a8 }
}

extern "C" void thunkTarget_0098c1b8();
// FUNCTION: ROBLOXSTUDIO 0x0098c1b8
extern "C" __declspec(naked) void adjustorThunk_0098c1b8()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0098c1b8 }
}

extern "C" void thunkTarget_0098c1c8();
// FUNCTION: ROBLOXSTUDIO 0x0098c1c8
extern "C" __declspec(naked) void adjustorThunk_0098c1c8()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0098c1c8 }
}

extern "C" void thunkTarget_0099f9cf();
// FUNCTION: ROBLOXSTUDIO 0x0099f9cf
extern "C" __declspec(naked) void adjustorThunk_0099f9cf()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0099f9cf }
}

extern "C" void thunkTarget_0099f9df();
// FUNCTION: ROBLOXSTUDIO 0x0099f9df
extern "C" __declspec(naked) void adjustorThunk_0099f9df()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_0099f9df }
}

extern "C" void thunkTarget_009a2ad0();
// FUNCTION: ROBLOXSTUDIO 0x009a2ad0
extern "C" __declspec(naked) void adjustorThunk_009a2ad0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009a2ad0 }
}

extern "C" void thunkTarget_009a2ae0();
// FUNCTION: ROBLOXSTUDIO 0x009a2ae0
extern "C" __declspec(naked) void adjustorThunk_009a2ae0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009a2ae0 }
}

extern "C" void thunkTarget_009a3d58();
// FUNCTION: ROBLOXSTUDIO 0x009a3d58
extern "C" __declspec(naked) void adjustorThunk_009a3d58()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009a3d58 }
}

extern "C" void thunkTarget_009aa4e6();
// FUNCTION: ROBLOXSTUDIO 0x009aa4e6
extern "C" __declspec(naked) void adjustorThunk_009aa4e6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009aa4e6 }
}

extern "C" void thunkTarget_009aa4f6();
// FUNCTION: ROBLOXSTUDIO 0x009aa4f6
extern "C" __declspec(naked) void adjustorThunk_009aa4f6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009aa4f6 }
}

extern "C" void thunkTarget_009b4c6c();
// FUNCTION: ROBLOXSTUDIO 0x009b4c6c
extern "C" __declspec(naked) void adjustorThunk_009b4c6c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009b4c6c }
}

extern "C" void thunkTarget_009b4c84();
// FUNCTION: ROBLOXSTUDIO 0x009b4c84
extern "C" __declspec(naked) void adjustorThunk_009b4c84()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009b4c84 }
}

extern "C" void thunkTarget_009b4c94();
// FUNCTION: ROBLOXSTUDIO 0x009b4c94
extern "C" __declspec(naked) void adjustorThunk_009b4c94()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009b4c94 }
}

extern "C" void thunkTarget_009b4cac();
// FUNCTION: ROBLOXSTUDIO 0x009b4cac
extern "C" __declspec(naked) void adjustorThunk_009b4cac()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009b4cac }
}

extern "C" void thunkTarget_009b4cc4();
// FUNCTION: ROBLOXSTUDIO 0x009b4cc4
extern "C" __declspec(naked) void adjustorThunk_009b4cc4()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009b4cc4 }
}

extern "C" void thunkTarget_009b81e7();
// FUNCTION: ROBLOXSTUDIO 0x009b81e7
extern "C" __declspec(naked) void adjustorThunk_009b81e7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009b81e7 }
}

extern "C" void thunkTarget_009b81f7();
// FUNCTION: ROBLOXSTUDIO 0x009b81f7
extern "C" __declspec(naked) void adjustorThunk_009b81f7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009b81f7 }
}

extern "C" void thunkTarget_009bd3fe();
// FUNCTION: ROBLOXSTUDIO 0x009bd3fe
extern "C" __declspec(naked) void adjustorThunk_009bd3fe()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009bd3fe }
}

extern "C" void thunkTarget_009bd40e();
// FUNCTION: ROBLOXSTUDIO 0x009bd40e
extern "C" __declspec(naked) void adjustorThunk_009bd40e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009bd40e }
}

extern "C" void thunkTarget_009cb9cc();
// FUNCTION: ROBLOXSTUDIO 0x009cb9cc
extern "C" __declspec(naked) void adjustorThunk_009cb9cc()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009cb9cc }
}

extern "C" void thunkTarget_009ccecd();
// FUNCTION: ROBLOXSTUDIO 0x009ccecd
extern "C" __declspec(naked) void adjustorThunk_009ccecd()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009ccecd }
}

extern "C" void thunkTarget_009d3d5a();
// FUNCTION: ROBLOXSTUDIO 0x009d3d5a
extern "C" __declspec(naked) void adjustorThunk_009d3d5a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009d3d5a }
}

extern "C" void thunkTarget_009d3d6a();
// FUNCTION: ROBLOXSTUDIO 0x009d3d6a
extern "C" __declspec(naked) void adjustorThunk_009d3d6a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009d3d6a }
}

extern "C" void thunkTarget_009d3d85();
// FUNCTION: ROBLOXSTUDIO 0x009d3d85
extern "C" __declspec(naked) void adjustorThunk_009d3d85()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009d3d85 }
}

extern "C" void thunkTarget_009deca0();
// FUNCTION: ROBLOXSTUDIO 0x009deca0
extern "C" __declspec(naked) void adjustorThunk_009deca0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009deca0 }
}

extern "C" void thunkTarget_009df8b0();
// FUNCTION: ROBLOXSTUDIO 0x009df8b0
extern "C" __declspec(naked) void adjustorThunk_009df8b0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009df8b0 }
}

extern "C" void thunkTarget_009e8d3d();
// FUNCTION: ROBLOXSTUDIO 0x009e8d3d
extern "C" __declspec(naked) void adjustorThunk_009e8d3d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009e8d3d }
}

extern "C" void thunkTarget_009e8d4d();
// FUNCTION: ROBLOXSTUDIO 0x009e8d4d
extern "C" __declspec(naked) void adjustorThunk_009e8d4d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009e8d4d }
}

extern "C" void thunkTarget_009e8d5d();
// FUNCTION: ROBLOXSTUDIO 0x009e8d5d
extern "C" __declspec(naked) void adjustorThunk_009e8d5d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009e8d5d }
}

extern "C" void thunkTarget_009e8d6d();
// FUNCTION: ROBLOXSTUDIO 0x009e8d6d
extern "C" __declspec(naked) void adjustorThunk_009e8d6d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009e8d6d }
}

extern "C" void thunkTarget_009f8593();
// FUNCTION: ROBLOXSTUDIO 0x009f8593
extern "C" __declspec(naked) void adjustorThunk_009f8593()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009f8593 }
}

extern "C" void thunkTarget_009f85a3();
// FUNCTION: ROBLOXSTUDIO 0x009f85a3
extern "C" __declspec(naked) void adjustorThunk_009f85a3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009f85a3 }
}

extern "C" void thunkTarget_009f85b3();
// FUNCTION: ROBLOXSTUDIO 0x009f85b3
extern "C" __declspec(naked) void adjustorThunk_009f85b3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009f85b3 }
}

extern "C" void thunkTarget_009fbcf0();
// FUNCTION: ROBLOXSTUDIO 0x009fbcf0
extern "C" __declspec(naked) void adjustorThunk_009fbcf0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009fbcf0 }
}

extern "C" void thunkTarget_009fbd00();
// FUNCTION: ROBLOXSTUDIO 0x009fbd00
extern "C" __declspec(naked) void adjustorThunk_009fbd00()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009fbd00 }
}

extern "C" void thunkTarget_009fbd20();
// FUNCTION: ROBLOXSTUDIO 0x009fbd20
extern "C" __declspec(naked) void adjustorThunk_009fbd20()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009fbd20 }
}

extern "C" void thunkTarget_009fbd48();
// FUNCTION: ROBLOXSTUDIO 0x009fbd48
extern "C" __declspec(naked) void adjustorThunk_009fbd48()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009fbd48 }
}

extern "C" void thunkTarget_009fbd60();
// FUNCTION: ROBLOXSTUDIO 0x009fbd60
extern "C" __declspec(naked) void adjustorThunk_009fbd60()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009fbd60 }
}

extern "C" void thunkTarget_009fbd70();
// FUNCTION: ROBLOXSTUDIO 0x009fbd70
extern "C" __declspec(naked) void adjustorThunk_009fbd70()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009fbd70 }
}

extern "C" void thunkTarget_009fbd88();
// FUNCTION: ROBLOXSTUDIO 0x009fbd88
extern "C" __declspec(naked) void adjustorThunk_009fbd88()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009fbd88 }
}

extern "C" void thunkTarget_009fcf87();
// FUNCTION: ROBLOXSTUDIO 0x009fcf87
extern "C" __declspec(naked) void adjustorThunk_009fcf87()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_009fcf87 }
}

extern "C" void thunkTarget_00a019d5();
// FUNCTION: ROBLOXSTUDIO 0x00a019d5
extern "C" __declspec(naked) void adjustorThunk_00a019d5()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a019d5 }
}

extern "C" void thunkTarget_00a019ed();
// FUNCTION: ROBLOXSTUDIO 0x00a019ed
extern "C" __declspec(naked) void adjustorThunk_00a019ed()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a019ed }
}

extern "C" void thunkTarget_00a0259e();
// FUNCTION: ROBLOXSTUDIO 0x00a0259e
extern "C" __declspec(naked) void adjustorThunk_00a0259e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0259e }
}

extern "C" void thunkTarget_00a025b9();
// FUNCTION: ROBLOXSTUDIO 0x00a025b9
extern "C" __declspec(naked) void adjustorThunk_00a025b9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a025b9 }
}

extern "C" void thunkTarget_00a0b027();
// FUNCTION: ROBLOXSTUDIO 0x00a0b027
extern "C" __declspec(naked) void adjustorThunk_00a0b027()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0b027 }
}

extern "C" void thunkTarget_00a0b037();
// FUNCTION: ROBLOXSTUDIO 0x00a0b037
extern "C" __declspec(naked) void adjustorThunk_00a0b037()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0b037 }
}

extern "C" void thunkTarget_00a0b9f7();
// FUNCTION: ROBLOXSTUDIO 0x00a0b9f7
extern "C" __declspec(naked) void adjustorThunk_00a0b9f7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0b9f7 }
}

extern "C" void thunkTarget_00a0ba07();
// FUNCTION: ROBLOXSTUDIO 0x00a0ba07
extern "C" __declspec(naked) void adjustorThunk_00a0ba07()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0ba07 }
}

extern "C" void thunkTarget_00a0c3b7();
// FUNCTION: ROBLOXSTUDIO 0x00a0c3b7
extern "C" __declspec(naked) void adjustorThunk_00a0c3b7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0c3b7 }
}

extern "C" void thunkTarget_00a0c3c7();
// FUNCTION: ROBLOXSTUDIO 0x00a0c3c7
extern "C" __declspec(naked) void adjustorThunk_00a0c3c7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0c3c7 }
}

extern "C" void thunkTarget_00a0caa3();
// FUNCTION: ROBLOXSTUDIO 0x00a0caa3
extern "C" __declspec(naked) void adjustorThunk_00a0caa3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0caa3 }
}

extern "C" void thunkTarget_00a0cab3();
// FUNCTION: ROBLOXSTUDIO 0x00a0cab3
extern "C" __declspec(naked) void adjustorThunk_00a0cab3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0cab3 }
}

extern "C" void thunkTarget_00a0ddf3();
// FUNCTION: ROBLOXSTUDIO 0x00a0ddf3
extern "C" __declspec(naked) void adjustorThunk_00a0ddf3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0ddf3 }
}

extern "C" void thunkTarget_00a0e645();
// FUNCTION: ROBLOXSTUDIO 0x00a0e645
extern "C" __declspec(naked) void adjustorThunk_00a0e645()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0e645 }
}

extern "C" void thunkTarget_00a0f21b();
// FUNCTION: ROBLOXSTUDIO 0x00a0f21b
extern "C" __declspec(naked) void adjustorThunk_00a0f21b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a0f21b }
}

extern "C" void thunkTarget_00a54c59();
// FUNCTION: ROBLOXSTUDIO 0x00a54c59
extern "C" __declspec(naked) void adjustorThunk_00a54c59()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a54c59 }
}

extern "C" void thunkTarget_00a54c61();
// FUNCTION: ROBLOXSTUDIO 0x00a54c61
extern "C" __declspec(naked) void adjustorThunk_00a54c61()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a54c61 }
}

extern "C" void thunkTarget_00a57281();
// FUNCTION: ROBLOXSTUDIO 0x00a57281
extern "C" __declspec(naked) void adjustorThunk_00a57281()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a57281 }
}

extern "C" void thunkTarget_00a57291();
// FUNCTION: ROBLOXSTUDIO 0x00a57291
extern "C" __declspec(naked) void adjustorThunk_00a57291()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a57291 }
}

extern "C" void thunkTarget_00a586cf();
// FUNCTION: ROBLOXSTUDIO 0x00a586cf
extern "C" __declspec(naked) void adjustorThunk_00a586cf()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a586cf }
}

extern "C" void thunkTarget_00a5b48f();
// FUNCTION: ROBLOXSTUDIO 0x00a5b48f
extern "C" __declspec(naked) void adjustorThunk_00a5b48f()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a5b48f }
}

extern "C" void thunkTarget_00a5b49f();
// FUNCTION: ROBLOXSTUDIO 0x00a5b49f
extern "C" __declspec(naked) void adjustorThunk_00a5b49f()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a5b49f }
}

extern "C" void thunkTarget_00a5ee46();
// FUNCTION: ROBLOXSTUDIO 0x00a5ee46
extern "C" __declspec(naked) void adjustorThunk_00a5ee46()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a5ee46 }
}

extern "C" void thunkTarget_00a5ee56();
// FUNCTION: ROBLOXSTUDIO 0x00a5ee56
extern "C" __declspec(naked) void adjustorThunk_00a5ee56()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a5ee56 }
}

extern "C" void thunkTarget_00a60ccd();
// FUNCTION: ROBLOXSTUDIO 0x00a60ccd
extern "C" __declspec(naked) void adjustorThunk_00a60ccd()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a60ccd }
}

extern "C" void thunkTarget_00a60cdd();
// FUNCTION: ROBLOXSTUDIO 0x00a60cdd
extern "C" __declspec(naked) void adjustorThunk_00a60cdd()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a60cdd }
}

extern "C" void thunkTarget_00a6221c();
// FUNCTION: ROBLOXSTUDIO 0x00a6221c
extern "C" __declspec(naked) void adjustorThunk_00a6221c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a6221c }
}

extern "C" void thunkTarget_00a641b7();
// FUNCTION: ROBLOXSTUDIO 0x00a641b7
extern "C" __declspec(naked) void adjustorThunk_00a641b7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a641b7 }
}

extern "C" void thunkTarget_00a641c7();
// FUNCTION: ROBLOXSTUDIO 0x00a641c7
extern "C" __declspec(naked) void adjustorThunk_00a641c7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a641c7 }
}

extern "C" void thunkTarget_00a6930c();
// FUNCTION: ROBLOXSTUDIO 0x00a6930c
extern "C" __declspec(naked) void adjustorThunk_00a6930c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a6930c }
}

extern "C" void thunkTarget_00a6931c();
// FUNCTION: ROBLOXSTUDIO 0x00a6931c
extern "C" __declspec(naked) void adjustorThunk_00a6931c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a6931c }
}

extern "C" void thunkTarget_00a6eb8e();
// FUNCTION: ROBLOXSTUDIO 0x00a6eb8e
extern "C" __declspec(naked) void adjustorThunk_00a6eb8e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a6eb8e }
}

extern "C" void thunkTarget_00a6eb9e();
// FUNCTION: ROBLOXSTUDIO 0x00a6eb9e
extern "C" __declspec(naked) void adjustorThunk_00a6eb9e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a6eb9e }
}

extern "C" void thunkTarget_00a6fba9();
// FUNCTION: ROBLOXSTUDIO 0x00a6fba9
extern "C" __declspec(naked) void adjustorThunk_00a6fba9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a6fba9 }
}

extern "C" void thunkTarget_00a6fbb9();
// FUNCTION: ROBLOXSTUDIO 0x00a6fbb9
extern "C" __declspec(naked) void adjustorThunk_00a6fbb9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a6fbb9 }
}

extern "C" void thunkTarget_00a7076a();
// FUNCTION: ROBLOXSTUDIO 0x00a7076a
extern "C" __declspec(naked) void adjustorThunk_00a7076a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a7076a }
}

extern "C" void thunkTarget_00a7077a();
// FUNCTION: ROBLOXSTUDIO 0x00a7077a
extern "C" __declspec(naked) void adjustorThunk_00a7077a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a7077a }
}

extern "C" void thunkTarget_00a76fce();
// FUNCTION: ROBLOXSTUDIO 0x00a76fce
extern "C" __declspec(naked) void adjustorThunk_00a76fce()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a76fce }
}

extern "C" void thunkTarget_00a76fde();
// FUNCTION: ROBLOXSTUDIO 0x00a76fde
extern "C" __declspec(naked) void adjustorThunk_00a76fde()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a76fde }
}

extern "C" void thunkTarget_00a76fee();
// FUNCTION: ROBLOXSTUDIO 0x00a76fee
extern "C" __declspec(naked) void adjustorThunk_00a76fee()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a76fee }
}

extern "C" void thunkTarget_00a76ffe();
// FUNCTION: ROBLOXSTUDIO 0x00a76ffe
extern "C" __declspec(naked) void adjustorThunk_00a76ffe()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a76ffe }
}

extern "C" void thunkTarget_00a7ff4e();
// FUNCTION: ROBLOXSTUDIO 0x00a7ff4e
extern "C" __declspec(naked) void adjustorThunk_00a7ff4e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a7ff4e }
}

extern "C" void thunkTarget_00a7ff5e();
// FUNCTION: ROBLOXSTUDIO 0x00a7ff5e
extern "C" __declspec(naked) void adjustorThunk_00a7ff5e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a7ff5e }
}

extern "C" void thunkTarget_00a82cb0();
// FUNCTION: ROBLOXSTUDIO 0x00a82cb0
extern "C" __declspec(naked) void adjustorThunk_00a82cb0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a82cb0 }
}

extern "C" void thunkTarget_00a82cc0();
// FUNCTION: ROBLOXSTUDIO 0x00a82cc0
extern "C" __declspec(naked) void adjustorThunk_00a82cc0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a82cc0 }
}

extern "C" void thunkTarget_00a867d1();
// FUNCTION: ROBLOXSTUDIO 0x00a867d1
extern "C" __declspec(naked) void adjustorThunk_00a867d1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a867d1 }
}

extern "C" void thunkTarget_00a867e1();
// FUNCTION: ROBLOXSTUDIO 0x00a867e1
extern "C" __declspec(naked) void adjustorThunk_00a867e1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a867e1 }
}

extern "C" void thunkTarget_00a867f1();
// FUNCTION: ROBLOXSTUDIO 0x00a867f1
extern "C" __declspec(naked) void adjustorThunk_00a867f1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a867f1 }
}

extern "C" void thunkTarget_00a8b6b1();
// FUNCTION: ROBLOXSTUDIO 0x00a8b6b1
extern "C" __declspec(naked) void adjustorThunk_00a8b6b1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a8b6b1 }
}

extern "C" void thunkTarget_00a8b6b9();
// FUNCTION: ROBLOXSTUDIO 0x00a8b6b9
extern "C" __declspec(naked) void adjustorThunk_00a8b6b9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a8b6b9 }
}

extern "C" void thunkTarget_00a8d39b();
// FUNCTION: ROBLOXSTUDIO 0x00a8d39b
extern "C" __declspec(naked) void adjustorThunk_00a8d39b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a8d39b }
}

extern "C" void thunkTarget_00a8d3a3();
// FUNCTION: ROBLOXSTUDIO 0x00a8d3a3
extern "C" __declspec(naked) void adjustorThunk_00a8d3a3()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a8d3a3 }
}

extern "C" void thunkTarget_00a8d3bb();
// FUNCTION: ROBLOXSTUDIO 0x00a8d3bb
extern "C" __declspec(naked) void adjustorThunk_00a8d3bb()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a8d3bb }
}

extern "C" void thunkTarget_00a8eeb2();
// FUNCTION: ROBLOXSTUDIO 0x00a8eeb2
extern "C" __declspec(naked) void adjustorThunk_00a8eeb2()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a8eeb2 }
}

extern "C" void thunkTarget_00a8eecd();
// FUNCTION: ROBLOXSTUDIO 0x00a8eecd
extern "C" __declspec(naked) void adjustorThunk_00a8eecd()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a8eecd }
}

extern "C" void thunkTarget_00a902c9();
// FUNCTION: ROBLOXSTUDIO 0x00a902c9
extern "C" __declspec(naked) void adjustorThunk_00a902c9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a902c9 }
}

extern "C" void thunkTarget_00a902e4();
// FUNCTION: ROBLOXSTUDIO 0x00a902e4
extern "C" __declspec(naked) void adjustorThunk_00a902e4()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a902e4 }
}

extern "C" void thunkTarget_00a902ff();
// FUNCTION: ROBLOXSTUDIO 0x00a902ff
extern "C" __declspec(naked) void adjustorThunk_00a902ff()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a902ff }
}

extern "C" void thunkTarget_00a91ada();
// FUNCTION: ROBLOXSTUDIO 0x00a91ada
extern "C" __declspec(naked) void adjustorThunk_00a91ada()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a91ada }
}

extern "C" void thunkTarget_00a91af2();
// FUNCTION: ROBLOXSTUDIO 0x00a91af2
extern "C" __declspec(naked) void adjustorThunk_00a91af2()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a91af2 }
}

extern "C" void thunkTarget_00a95471();
// FUNCTION: ROBLOXSTUDIO 0x00a95471
extern "C" __declspec(naked) void adjustorThunk_00a95471()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a95471 }
}

extern "C" void thunkTarget_00a9548c();
// FUNCTION: ROBLOXSTUDIO 0x00a9548c
extern "C" __declspec(naked) void adjustorThunk_00a9548c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a9548c }
}

extern "C" void thunkTarget_00a954ba();
// FUNCTION: ROBLOXSTUDIO 0x00a954ba
extern "C" __declspec(naked) void adjustorThunk_00a954ba()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a954ba }
}

extern "C" void thunkTarget_00a954e8();
// FUNCTION: ROBLOXSTUDIO 0x00a954e8
extern "C" __declspec(naked) void adjustorThunk_00a954e8()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a954e8 }
}

extern "C" void thunkTarget_00a95503();
// FUNCTION: ROBLOXSTUDIO 0x00a95503
extern "C" __declspec(naked) void adjustorThunk_00a95503()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a95503 }
}

extern "C" void thunkTarget_00a95531();
// FUNCTION: ROBLOXSTUDIO 0x00a95531
extern "C" __declspec(naked) void adjustorThunk_00a95531()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a95531 }
}

extern "C" void thunkTarget_00a95590();
// FUNCTION: ROBLOXSTUDIO 0x00a95590
extern "C" __declspec(naked) void adjustorThunk_00a95590()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a95590 }
}

extern "C" void thunkTarget_00a955a0();
// FUNCTION: ROBLOXSTUDIO 0x00a955a0
extern "C" __declspec(naked) void adjustorThunk_00a955a0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a955a0 }
}

extern "C" void thunkTarget_00a955d9();
// FUNCTION: ROBLOXSTUDIO 0x00a955d9
extern "C" __declspec(naked) void adjustorThunk_00a955d9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a955d9 }
}

extern "C" void thunkTarget_00a95625();
// FUNCTION: ROBLOXSTUDIO 0x00a95625
extern "C" __declspec(naked) void adjustorThunk_00a95625()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a95625 }
}

extern "C" void thunkTarget_00a9b47c();
// FUNCTION: ROBLOXSTUDIO 0x00a9b47c
extern "C" __declspec(naked) void adjustorThunk_00a9b47c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a9b47c }
}

extern "C" void thunkTarget_00a9b48c();
// FUNCTION: ROBLOXSTUDIO 0x00a9b48c
extern "C" __declspec(naked) void adjustorThunk_00a9b48c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a9b48c }
}

extern "C" void thunkTarget_00a9f82c();
// FUNCTION: ROBLOXSTUDIO 0x00a9f82c
extern "C" __declspec(naked) void adjustorThunk_00a9f82c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a9f82c }
}

extern "C" void thunkTarget_00a9f83c();
// FUNCTION: ROBLOXSTUDIO 0x00a9f83c
extern "C" __declspec(naked) void adjustorThunk_00a9f83c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00a9f83c }
}

extern "C" void thunkTarget_00aa1f3e();
// FUNCTION: ROBLOXSTUDIO 0x00aa1f3e
extern "C" __declspec(naked) void adjustorThunk_00aa1f3e()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aa1f3e }
}

extern "C" void thunkTarget_00aa2bd6();
// FUNCTION: ROBLOXSTUDIO 0x00aa2bd6
extern "C" __declspec(naked) void adjustorThunk_00aa2bd6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aa2bd6 }
}

extern "C" void thunkTarget_00aa2be9();
// FUNCTION: ROBLOXSTUDIO 0x00aa2be9
extern "C" __declspec(naked) void adjustorThunk_00aa2be9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aa2be9 }
}

extern "C" void thunkTarget_00aa2c04();
// FUNCTION: ROBLOXSTUDIO 0x00aa2c04
extern "C" __declspec(naked) void adjustorThunk_00aa2c04()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aa2c04 }
}

extern "C" void thunkTarget_00aa2ed0();
// FUNCTION: ROBLOXSTUDIO 0x00aa2ed0
extern "C" __declspec(naked) void adjustorThunk_00aa2ed0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aa2ed0 }
}

extern "C" void thunkTarget_00aa5f42();
// FUNCTION: ROBLOXSTUDIO 0x00aa5f42
extern "C" __declspec(naked) void adjustorThunk_00aa5f42()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aa5f42 }
}

extern "C" void thunkTarget_00aa5f55();
// FUNCTION: ROBLOXSTUDIO 0x00aa5f55
extern "C" __declspec(naked) void adjustorThunk_00aa5f55()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aa5f55 }
}

extern "C" void thunkTarget_00aa5f73();
// FUNCTION: ROBLOXSTUDIO 0x00aa5f73
extern "C" __declspec(naked) void adjustorThunk_00aa5f73()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aa5f73 }
}

extern "C" void thunkTarget_00aaaac0();
// FUNCTION: ROBLOXSTUDIO 0x00aaaac0
extern "C" __declspec(naked) void adjustorThunk_00aaaac0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aaaac0 }
}

extern "C" void thunkTarget_00aaaad8();
// FUNCTION: ROBLOXSTUDIO 0x00aaaad8
extern "C" __declspec(naked) void adjustorThunk_00aaaad8()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aaaad8 }
}

extern "C" void thunkTarget_00aac4e1();
// FUNCTION: ROBLOXSTUDIO 0x00aac4e1
extern "C" __declspec(naked) void adjustorThunk_00aac4e1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aac4e1 }
}

extern "C" void thunkTarget_00aac4e9();
// FUNCTION: ROBLOXSTUDIO 0x00aac4e9
extern "C" __declspec(naked) void adjustorThunk_00aac4e9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aac4e9 }
}

extern "C" void thunkTarget_00aac504();
// FUNCTION: ROBLOXSTUDIO 0x00aac504
extern "C" __declspec(naked) void adjustorThunk_00aac504()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aac504 }
}

extern "C" void thunkTarget_00aad5d8();
// FUNCTION: ROBLOXSTUDIO 0x00aad5d8
extern "C" __declspec(naked) void adjustorThunk_00aad5d8()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aad5d8 }
}

extern "C" void thunkTarget_00aade6a();
// FUNCTION: ROBLOXSTUDIO 0x00aade6a
extern "C" __declspec(naked) void adjustorThunk_00aade6a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aade6a }
}

extern "C" void thunkTarget_00aade7a();
// FUNCTION: ROBLOXSTUDIO 0x00aade7a
extern "C" __declspec(naked) void adjustorThunk_00aade7a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aade7a }
}

extern "C" void thunkTarget_00aaee19();
// FUNCTION: ROBLOXSTUDIO 0x00aaee19
extern "C" __declspec(naked) void adjustorThunk_00aaee19()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aaee19 }
}

extern "C" void thunkTarget_00aaee29();
// FUNCTION: ROBLOXSTUDIO 0x00aaee29
extern "C" __declspec(naked) void adjustorThunk_00aaee29()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aaee29 }
}

extern "C" void thunkTarget_00aaf68b();
// FUNCTION: ROBLOXSTUDIO 0x00aaf68b
extern "C" __declspec(naked) void adjustorThunk_00aaf68b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aaf68b }
}

extern "C" void thunkTarget_00aaf693();
// FUNCTION: ROBLOXSTUDIO 0x00aaf693
extern "C" __declspec(naked) void adjustorThunk_00aaf693()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aaf693 }
}

extern "C" void thunkTarget_00aba2f7();
// FUNCTION: ROBLOXSTUDIO 0x00aba2f7
extern "C" __declspec(naked) void adjustorThunk_00aba2f7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aba2f7 }
}

extern "C" void thunkTarget_00aba307();
// FUNCTION: ROBLOXSTUDIO 0x00aba307
extern "C" __declspec(naked) void adjustorThunk_00aba307()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aba307 }
}

extern "C" void thunkTarget_00ac7fb2();
// FUNCTION: ROBLOXSTUDIO 0x00ac7fb2
extern "C" __declspec(naked) void adjustorThunk_00ac7fb2()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ac7fb2 }
}

extern "C" void thunkTarget_00ac7fc2();
// FUNCTION: ROBLOXSTUDIO 0x00ac7fc2
extern "C" __declspec(naked) void adjustorThunk_00ac7fc2()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ac7fc2 }
}

extern "C" void thunkTarget_00ac7fdd();
// FUNCTION: ROBLOXSTUDIO 0x00ac7fdd
extern "C" __declspec(naked) void adjustorThunk_00ac7fdd()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ac7fdd }
}

extern "C" void thunkTarget_00ac96f8();
// FUNCTION: ROBLOXSTUDIO 0x00ac96f8
extern "C" __declspec(naked) void adjustorThunk_00ac96f8()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ac96f8 }
}

extern "C" void thunkTarget_00ac9708();
// FUNCTION: ROBLOXSTUDIO 0x00ac9708
extern "C" __declspec(naked) void adjustorThunk_00ac9708()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ac9708 }
}

extern "C" void thunkTarget_00ac9718();
// FUNCTION: ROBLOXSTUDIO 0x00ac9718
extern "C" __declspec(naked) void adjustorThunk_00ac9718()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ac9718 }
}

extern "C" void thunkTarget_00acab58();
// FUNCTION: ROBLOXSTUDIO 0x00acab58
extern "C" __declspec(naked) void adjustorThunk_00acab58()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00acab58 }
}

extern "C" void thunkTarget_00acab68();
// FUNCTION: ROBLOXSTUDIO 0x00acab68
extern "C" __declspec(naked) void adjustorThunk_00acab68()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00acab68 }
}

extern "C" void thunkTarget_00acbf58();
// FUNCTION: ROBLOXSTUDIO 0x00acbf58
extern "C" __declspec(naked) void adjustorThunk_00acbf58()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00acbf58 }
}

extern "C" void thunkTarget_00acbf68();
// FUNCTION: ROBLOXSTUDIO 0x00acbf68
extern "C" __declspec(naked) void adjustorThunk_00acbf68()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00acbf68 }
}

extern "C" void thunkTarget_00acd490();
// FUNCTION: ROBLOXSTUDIO 0x00acd490
extern "C" __declspec(naked) void adjustorThunk_00acd490()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00acd490 }
}

extern "C" void thunkTarget_00acd4a0();
// FUNCTION: ROBLOXSTUDIO 0x00acd4a0
extern "C" __declspec(naked) void adjustorThunk_00acd4a0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00acd4a0 }
}

extern "C" void thunkTarget_00ad122d();
// FUNCTION: ROBLOXSTUDIO 0x00ad122d
extern "C" __declspec(naked) void adjustorThunk_00ad122d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ad122d }
}

extern "C" void thunkTarget_00ad123d();
// FUNCTION: ROBLOXSTUDIO 0x00ad123d
extern "C" __declspec(naked) void adjustorThunk_00ad123d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ad123d }
}

extern "C" void thunkTarget_00ad814f();
// FUNCTION: ROBLOXSTUDIO 0x00ad814f
extern "C" __declspec(naked) void adjustorThunk_00ad814f()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ad814f }
}

extern "C" void thunkTarget_00ad815f();
// FUNCTION: ROBLOXSTUDIO 0x00ad815f
extern "C" __declspec(naked) void adjustorThunk_00ad815f()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ad815f }
}

extern "C" void thunkTarget_00ad9b4b();
// FUNCTION: ROBLOXSTUDIO 0x00ad9b4b
extern "C" __declspec(naked) void adjustorThunk_00ad9b4b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ad9b4b }
}

extern "C" void thunkTarget_00ad9b5b();
// FUNCTION: ROBLOXSTUDIO 0x00ad9b5b
extern "C" __declspec(naked) void adjustorThunk_00ad9b5b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ad9b5b }
}

extern "C" void thunkTarget_00adf4a0();
// FUNCTION: ROBLOXSTUDIO 0x00adf4a0
extern "C" __declspec(naked) void adjustorThunk_00adf4a0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00adf4a0 }
}

extern "C" void thunkTarget_00adf4b0();
// FUNCTION: ROBLOXSTUDIO 0x00adf4b0
extern "C" __declspec(naked) void adjustorThunk_00adf4b0()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00adf4b0 }
}

extern "C" void thunkTarget_00ae4189();
// FUNCTION: ROBLOXSTUDIO 0x00ae4189
extern "C" __declspec(naked) void adjustorThunk_00ae4189()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ae4189 }
}

extern "C" void thunkTarget_00ae4199();
// FUNCTION: ROBLOXSTUDIO 0x00ae4199
extern "C" __declspec(naked) void adjustorThunk_00ae4199()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ae4199 }
}

extern "C" void thunkTarget_00ae9ab6();
// FUNCTION: ROBLOXSTUDIO 0x00ae9ab6
extern "C" __declspec(naked) void adjustorThunk_00ae9ab6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ae9ab6 }
}

extern "C" void thunkTarget_00ae9ac6();
// FUNCTION: ROBLOXSTUDIO 0x00ae9ac6
extern "C" __declspec(naked) void adjustorThunk_00ae9ac6()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ae9ac6 }
}

extern "C" void thunkTarget_00aed879();
// FUNCTION: ROBLOXSTUDIO 0x00aed879
extern "C" __declspec(naked) void adjustorThunk_00aed879()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00aed879 }
}

extern "C" void thunkTarget_00af233a();
// FUNCTION: ROBLOXSTUDIO 0x00af233a
extern "C" __declspec(naked) void adjustorThunk_00af233a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00af233a }
}

extern "C" void thunkTarget_00af3764();
// FUNCTION: ROBLOXSTUDIO 0x00af3764
extern "C" __declspec(naked) void adjustorThunk_00af3764()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00af3764 }
}

extern "C" void thunkTarget_00afa8f9();
// FUNCTION: ROBLOXSTUDIO 0x00afa8f9
extern "C" __declspec(naked) void adjustorThunk_00afa8f9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00afa8f9 }
}

extern "C" void thunkTarget_00b03589();
// FUNCTION: ROBLOXSTUDIO 0x00b03589
extern "C" __declspec(naked) void adjustorThunk_00b03589()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b03589 }
}

extern "C" void thunkTarget_00b03591();
// FUNCTION: ROBLOXSTUDIO 0x00b03591
extern "C" __declspec(naked) void adjustorThunk_00b03591()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b03591 }
}

extern "C" void thunkTarget_00b0cd32();
// FUNCTION: ROBLOXSTUDIO 0x00b0cd32
extern "C" __declspec(naked) void adjustorThunk_00b0cd32()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b0cd32 }
}

extern "C" void thunkTarget_00b0cd3a();
// FUNCTION: ROBLOXSTUDIO 0x00b0cd3a
extern "C" __declspec(naked) void adjustorThunk_00b0cd3a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b0cd3a }
}

extern "C" void thunkTarget_00b0da3b();
// FUNCTION: ROBLOXSTUDIO 0x00b0da3b
extern "C" __declspec(naked) void adjustorThunk_00b0da3b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b0da3b }
}

extern "C" void thunkTarget_00b0fb67();
// FUNCTION: ROBLOXSTUDIO 0x00b0fb67
extern "C" __declspec(naked) void adjustorThunk_00b0fb67()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b0fb67 }
}

extern "C" void thunkTarget_00b10861();
// FUNCTION: ROBLOXSTUDIO 0x00b10861
extern "C" __declspec(naked) void adjustorThunk_00b10861()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b10861 }
}

extern "C" void thunkTarget_00b1406c();
// FUNCTION: ROBLOXSTUDIO 0x00b1406c
extern "C" __declspec(naked) void adjustorThunk_00b1406c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b1406c }
}

extern "C" void thunkTarget_00b1556f();
// FUNCTION: ROBLOXSTUDIO 0x00b1556f
extern "C" __declspec(naked) void adjustorThunk_00b1556f()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b1556f }
}

extern "C" void thunkTarget_00b1612b();
// FUNCTION: ROBLOXSTUDIO 0x00b1612b
extern "C" __declspec(naked) void adjustorThunk_00b1612b()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b1612b }
}

extern "C" void thunkTarget_00b1790c();
// FUNCTION: ROBLOXSTUDIO 0x00b1790c
extern "C" __declspec(naked) void adjustorThunk_00b1790c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b1790c }
}

extern "C" void thunkTarget_00b1a905();
// FUNCTION: ROBLOXSTUDIO 0x00b1a905
extern "C" __declspec(naked) void adjustorThunk_00b1a905()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b1a905 }
}

extern "C" void thunkTarget_00b1a915();
// FUNCTION: ROBLOXSTUDIO 0x00b1a915
extern "C" __declspec(naked) void adjustorThunk_00b1a915()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b1a915 }
}

extern "C" void thunkTarget_00b1acf7();
// FUNCTION: ROBLOXSTUDIO 0x00b1acf7
extern "C" __declspec(naked) void adjustorThunk_00b1acf7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b1acf7 }
}

extern "C" void thunkTarget_00b1b590();
// FUNCTION: ROBLOXSTUDIO 0x00b1b590
extern "C" __declspec(naked) void adjustorThunk_00b1b590()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b1b590 }
}

extern "C" void thunkTarget_00b1b940();
// FUNCTION: ROBLOXSTUDIO 0x00b1b940
extern "C" __declspec(naked) void adjustorThunk_00b1b940()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b1b940 }
}

extern "C" void thunkTarget_00b1c2be();
// FUNCTION: ROBLOXSTUDIO 0x00b1c2be
extern "C" __declspec(naked) void adjustorThunk_00b1c2be()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b1c2be }
}

extern "C" void thunkTarget_00b1d776();
// FUNCTION: ROBLOXSTUDIO 0x00b1d776
extern "C" __declspec(naked) void adjustorThunk_00b1d776()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b1d776 }
}

extern "C" void thunkTarget_00b20a05();
// FUNCTION: ROBLOXSTUDIO 0x00b20a05
extern "C" __declspec(naked) void adjustorThunk_00b20a05()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b20a05 }
}

extern "C" void thunkTarget_00b25d40();
// FUNCTION: ROBLOXSTUDIO 0x00b25d40
extern "C" __declspec(naked) void adjustorThunk_00b25d40()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b25d40 }
}

extern "C" void thunkTarget_00b29483();
// FUNCTION: ROBLOXSTUDIO 0x00b29483
extern "C" __declspec(naked) void adjustorThunk_00b29483()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b29483 }
}

extern "C" void thunkTarget_00b2ea1d();
// FUNCTION: ROBLOXSTUDIO 0x00b2ea1d
extern "C" __declspec(naked) void adjustorThunk_00b2ea1d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b2ea1d }
}

extern "C" void thunkTarget_00b36a89();
// FUNCTION: ROBLOXSTUDIO 0x00b36a89
extern "C" __declspec(naked) void adjustorThunk_00b36a89()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00b36a89 }
}

extern "C" void thunkTarget_00be5a3a();
// FUNCTION: ROBLOXSTUDIO 0x00be5a3a
extern "C" __declspec(naked) void adjustorThunk_00be5a3a()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00be5a3a }
}

extern "C" void thunkTarget_00be5a42();
// FUNCTION: ROBLOXSTUDIO 0x00be5a42
extern "C" __declspec(naked) void adjustorThunk_00be5a42()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00be5a42 }
}

extern "C" void thunkTarget_00bf8c09();
// FUNCTION: ROBLOXSTUDIO 0x00bf8c09
extern "C" __declspec(naked) void adjustorThunk_00bf8c09()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00bf8c09 }
}

extern "C" void thunkTarget_00bfd9ae();
// FUNCTION: ROBLOXSTUDIO 0x00bfd9ae
extern "C" __declspec(naked) void adjustorThunk_00bfd9ae()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00bfd9ae }
}

extern "C" void thunkTarget_00c29ea9();
// FUNCTION: ROBLOXSTUDIO 0x00c29ea9
extern "C" __declspec(naked) void adjustorThunk_00c29ea9()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c29ea9 }
}

extern "C" void thunkTarget_00c43d76();
// FUNCTION: ROBLOXSTUDIO 0x00c43d76
extern "C" __declspec(naked) void adjustorThunk_00c43d76()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c43d76 }
}

extern "C" void thunkTarget_00c43d86();
// FUNCTION: ROBLOXSTUDIO 0x00c43d86
extern "C" __declspec(naked) void adjustorThunk_00c43d86()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c43d86 }
}

extern "C" void thunkTarget_00c570b4();
// FUNCTION: ROBLOXSTUDIO 0x00c570b4
extern "C" __declspec(naked) void adjustorThunk_00c570b4()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c570b4 }
}

extern "C" void thunkTarget_00c570c4();
// FUNCTION: ROBLOXSTUDIO 0x00c570c4
extern "C" __declspec(naked) void adjustorThunk_00c570c4()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c570c4 }
}

extern "C" void thunkTarget_00c570d4();
// FUNCTION: ROBLOXSTUDIO 0x00c570d4
extern "C" __declspec(naked) void adjustorThunk_00c570d4()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c570d4 }
}

extern "C" void thunkTarget_00c5aaac();
// FUNCTION: ROBLOXSTUDIO 0x00c5aaac
extern "C" __declspec(naked) void adjustorThunk_00c5aaac()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c5aaac }
}

extern "C" void thunkTarget_00c5aabc();
// FUNCTION: ROBLOXSTUDIO 0x00c5aabc
extern "C" __declspec(naked) void adjustorThunk_00c5aabc()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c5aabc }
}

extern "C" void thunkTarget_00c70732();
// FUNCTION: ROBLOXSTUDIO 0x00c70732
extern "C" __declspec(naked) void adjustorThunk_00c70732()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c70732 }
}

extern "C" void thunkTarget_00c93cad();
// FUNCTION: ROBLOXSTUDIO 0x00c93cad
extern "C" __declspec(naked) void adjustorThunk_00c93cad()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c93cad }
}

extern "C" void thunkTarget_00c9595d();
// FUNCTION: ROBLOXSTUDIO 0x00c9595d
extern "C" __declspec(naked) void adjustorThunk_00c9595d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c9595d }
}

extern "C" void thunkTarget_00c95975();
// FUNCTION: ROBLOXSTUDIO 0x00c95975
extern "C" __declspec(naked) void adjustorThunk_00c95975()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c95975 }
}

extern "C" void thunkTarget_00c9bc70();
// FUNCTION: ROBLOXSTUDIO 0x00c9bc70
extern "C" __declspec(naked) void adjustorThunk_00c9bc70()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c9bc70 }
}

extern "C" void thunkTarget_00c9bca8();
// FUNCTION: ROBLOXSTUDIO 0x00c9bca8
extern "C" __declspec(naked) void adjustorThunk_00c9bca8()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c9bca8 }
}

extern "C" void thunkTarget_00c9f35f();
// FUNCTION: ROBLOXSTUDIO 0x00c9f35f
extern "C" __declspec(naked) void adjustorThunk_00c9f35f()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00c9f35f }
}

extern "C" void thunkTarget_00ca3bfa();
// FUNCTION: ROBLOXSTUDIO 0x00ca3bfa
extern "C" __declspec(naked) void adjustorThunk_00ca3bfa()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ca3bfa }
}

extern "C" void thunkTarget_00ca3c0d();
// FUNCTION: ROBLOXSTUDIO 0x00ca3c0d
extern "C" __declspec(naked) void adjustorThunk_00ca3c0d()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ca3c0d }
}

extern "C" void thunkTarget_00cb1ea1();
// FUNCTION: ROBLOXSTUDIO 0x00cb1ea1
extern "C" __declspec(naked) void adjustorThunk_00cb1ea1()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00cb1ea1 }
}

extern "C" void thunkTarget_00cb1ec7();
// FUNCTION: ROBLOXSTUDIO 0x00cb1ec7
extern "C" __declspec(naked) void adjustorThunk_00cb1ec7()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00cb1ec7 }
}

extern "C" void thunkTarget_00cbacbc();
// FUNCTION: ROBLOXSTUDIO 0x00cbacbc
extern "C" __declspec(naked) void adjustorThunk_00cbacbc()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00cbacbc }
}

extern "C" void thunkTarget_00ccbb67();
// FUNCTION: ROBLOXSTUDIO 0x00ccbb67
extern "C" __declspec(naked) void adjustorThunk_00ccbb67()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00ccbb67 }
}

extern "C" void thunkTarget_00d0244c();
// FUNCTION: ROBLOXSTUDIO 0x00d0244c
extern "C" __declspec(naked) void adjustorThunk_00d0244c()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00d0244c }
}

extern "C" void thunkTarget_00d02454();
// FUNCTION: ROBLOXSTUDIO 0x00d02454
extern "C" __declspec(naked) void adjustorThunk_00d02454()
{
	__asm { sub ecx, 0x18 }
	__asm { jmp thunkTarget_00d02454 }
}

extern "C" void thunkTarget_0040e179();
// FUNCTION: ROBLOXSTUDIO 0x0040e179
extern "C" __declspec(naked) void adjustorThunk_0040e179()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0040e179 }
}

extern "C" void thunkTarget_0040e189();
// FUNCTION: ROBLOXSTUDIO 0x0040e189
extern "C" __declspec(naked) void adjustorThunk_0040e189()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0040e189 }
}

extern "C" void thunkTarget_0040e199();
// FUNCTION: ROBLOXSTUDIO 0x0040e199
extern "C" __declspec(naked) void adjustorThunk_0040e199()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0040e199 }
}

extern "C" void thunkTarget_0043e7e0();
// FUNCTION: ROBLOXSTUDIO 0x0043e7e0
extern "C" __declspec(naked) void adjustorThunk_0043e7e0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0043e7e0 }
}

extern "C" void thunkTarget_0043e7f0();
// FUNCTION: ROBLOXSTUDIO 0x0043e7f0
extern "C" __declspec(naked) void adjustorThunk_0043e7f0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0043e7f0 }
}

extern "C" void thunkTarget_0043e800();
// FUNCTION: ROBLOXSTUDIO 0x0043e800
extern "C" __declspec(naked) void adjustorThunk_0043e800()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0043e800 }
}

extern "C" void thunkTarget_0043e810();
// FUNCTION: ROBLOXSTUDIO 0x0043e810
extern "C" __declspec(naked) void adjustorThunk_0043e810()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0043e810 }
}

extern "C" void thunkTarget_0048dcf2();
// FUNCTION: ROBLOXSTUDIO 0x0048dcf2
extern "C" __declspec(naked) void adjustorThunk_0048dcf2()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0048dcf2 }
}

extern "C" void thunkTarget_004955d6();
// FUNCTION: ROBLOXSTUDIO 0x004955d6
extern "C" __declspec(naked) void adjustorThunk_004955d6()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_004955d6 }
}

extern "C" void thunkTarget_004955e6();
// FUNCTION: ROBLOXSTUDIO 0x004955e6
extern "C" __declspec(naked) void adjustorThunk_004955e6()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_004955e6 }
}

extern "C" void thunkTarget_004962e6();
// FUNCTION: ROBLOXSTUDIO 0x004962e6
extern "C" __declspec(naked) void adjustorThunk_004962e6()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_004962e6 }
}

extern "C" void thunkTarget_004962fe();
// FUNCTION: ROBLOXSTUDIO 0x004962fe
extern "C" __declspec(naked) void adjustorThunk_004962fe()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_004962fe }
}

extern "C" void thunkTarget_004a4b97();
// FUNCTION: ROBLOXSTUDIO 0x004a4b97
extern "C" __declspec(naked) void adjustorThunk_004a4b97()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_004a4b97 }
}

extern "C" void thunkTarget_005317d4();
// FUNCTION: ROBLOXSTUDIO 0x005317d4
extern "C" __declspec(naked) void adjustorThunk_005317d4()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_005317d4 }
}

extern "C" void thunkTarget_00565aa9();
// FUNCTION: ROBLOXSTUDIO 0x00565aa9
extern "C" __declspec(naked) void adjustorThunk_00565aa9()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565aa9 }
}

extern "C" void thunkTarget_00565ac1();
// FUNCTION: ROBLOXSTUDIO 0x00565ac1
extern "C" __declspec(naked) void adjustorThunk_00565ac1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565ac1 }
}

extern "C" void thunkTarget_00565ae1();
// FUNCTION: ROBLOXSTUDIO 0x00565ae1
extern "C" __declspec(naked) void adjustorThunk_00565ae1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565ae1 }
}

extern "C" void thunkTarget_00565afc();
// FUNCTION: ROBLOXSTUDIO 0x00565afc
extern "C" __declspec(naked) void adjustorThunk_00565afc()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565afc }
}

extern "C" void thunkTarget_00565b04();
// FUNCTION: ROBLOXSTUDIO 0x00565b04
extern "C" __declspec(naked) void adjustorThunk_00565b04()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565b04 }
}

extern "C" void thunkTarget_00565b1c();
// FUNCTION: ROBLOXSTUDIO 0x00565b1c
extern "C" __declspec(naked) void adjustorThunk_00565b1c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565b1c }
}

extern "C" void thunkTarget_00565b44();
// FUNCTION: ROBLOXSTUDIO 0x00565b44
extern "C" __declspec(naked) void adjustorThunk_00565b44()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565b44 }
}

extern "C" void thunkTarget_00565b4c();
// FUNCTION: ROBLOXSTUDIO 0x00565b4c
extern "C" __declspec(naked) void adjustorThunk_00565b4c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565b4c }
}

extern "C" void thunkTarget_00565b67();
// FUNCTION: ROBLOXSTUDIO 0x00565b67
extern "C" __declspec(naked) void adjustorThunk_00565b67()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565b67 }
}

extern "C" void thunkTarget_00565b6f();
// FUNCTION: ROBLOXSTUDIO 0x00565b6f
extern "C" __declspec(naked) void adjustorThunk_00565b6f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565b6f }
}

extern "C" void thunkTarget_00565b8f();
// FUNCTION: ROBLOXSTUDIO 0x00565b8f
extern "C" __declspec(naked) void adjustorThunk_00565b8f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565b8f }
}

extern "C" void thunkTarget_00565ba7();
// FUNCTION: ROBLOXSTUDIO 0x00565ba7
extern "C" __declspec(naked) void adjustorThunk_00565ba7()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565ba7 }
}

extern "C" void thunkTarget_00565bb7();
// FUNCTION: ROBLOXSTUDIO 0x00565bb7
extern "C" __declspec(naked) void adjustorThunk_00565bb7()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00565bb7 }
}

extern "C" void thunkTarget_0062685f();
// FUNCTION: ROBLOXSTUDIO 0x0062685f
extern "C" __declspec(naked) void adjustorThunk_0062685f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0062685f }
}

extern "C" void thunkTarget_0062686f();
// FUNCTION: ROBLOXSTUDIO 0x0062686f
extern "C" __declspec(naked) void adjustorThunk_0062686f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0062686f }
}

extern "C" void thunkTarget_0067d2d1();
// FUNCTION: ROBLOXSTUDIO 0x0067d2d1
extern "C" __declspec(naked) void adjustorThunk_0067d2d1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0067d2d1 }
}

extern "C" void thunkTarget_00692ec4();
// FUNCTION: ROBLOXSTUDIO 0x00692ec4
extern "C" __declspec(naked) void adjustorThunk_00692ec4()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00692ec4 }
}

extern "C" void thunkTarget_0078c371();
// FUNCTION: ROBLOXSTUDIO 0x0078c371
extern "C" __declspec(naked) void adjustorThunk_0078c371()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0078c371 }
}

extern "C" void thunkTarget_0078c381();
// FUNCTION: ROBLOXSTUDIO 0x0078c381
extern "C" __declspec(naked) void adjustorThunk_0078c381()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0078c381 }
}

extern "C" void thunkTarget_007a0ba8();
// FUNCTION: ROBLOXSTUDIO 0x007a0ba8
extern "C" __declspec(naked) void adjustorThunk_007a0ba8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007a0ba8 }
}

extern "C" void thunkTarget_007a0bb8();
// FUNCTION: ROBLOXSTUDIO 0x007a0bb8
extern "C" __declspec(naked) void adjustorThunk_007a0bb8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007a0bb8 }
}

extern "C" void thunkTarget_007a0bc8();
// FUNCTION: ROBLOXSTUDIO 0x007a0bc8
extern "C" __declspec(naked) void adjustorThunk_007a0bc8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007a0bc8 }
}

extern "C" void thunkTarget_007ba5f4();
// FUNCTION: ROBLOXSTUDIO 0x007ba5f4
extern "C" __declspec(naked) void adjustorThunk_007ba5f4()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007ba5f4 }
}

extern "C" void thunkTarget_007ba604();
// FUNCTION: ROBLOXSTUDIO 0x007ba604
extern "C" __declspec(naked) void adjustorThunk_007ba604()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007ba604 }
}

extern "C" void thunkTarget_007c23e5();
// FUNCTION: ROBLOXSTUDIO 0x007c23e5
extern "C" __declspec(naked) void adjustorThunk_007c23e5()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007c23e5 }
}

extern "C" void thunkTarget_007c23ed();
// FUNCTION: ROBLOXSTUDIO 0x007c23ed
extern "C" __declspec(naked) void adjustorThunk_007c23ed()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007c23ed }
}

extern "C" void thunkTarget_007c5868();
// FUNCTION: ROBLOXSTUDIO 0x007c5868
extern "C" __declspec(naked) void adjustorThunk_007c5868()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007c5868 }
}

extern "C" void thunkTarget_007c5878();
// FUNCTION: ROBLOXSTUDIO 0x007c5878
extern "C" __declspec(naked) void adjustorThunk_007c5878()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007c5878 }
}

extern "C" void thunkTarget_007c5888();
// FUNCTION: ROBLOXSTUDIO 0x007c5888
extern "C" __declspec(naked) void adjustorThunk_007c5888()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007c5888 }
}

extern "C" void thunkTarget_007c5890();
// FUNCTION: ROBLOXSTUDIO 0x007c5890
extern "C" __declspec(naked) void adjustorThunk_007c5890()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007c5890 }
}

extern "C" void thunkTarget_007c90c7();
// FUNCTION: ROBLOXSTUDIO 0x007c90c7
extern "C" __declspec(naked) void adjustorThunk_007c90c7()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007c90c7 }
}

extern "C" void thunkTarget_007c90d7();
// FUNCTION: ROBLOXSTUDIO 0x007c90d7
extern "C" __declspec(naked) void adjustorThunk_007c90d7()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007c90d7 }
}

extern "C" void thunkTarget_007c90ef();
// FUNCTION: ROBLOXSTUDIO 0x007c90ef
extern "C" __declspec(naked) void adjustorThunk_007c90ef()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007c90ef }
}

extern "C" void thunkTarget_007c90ff();
// FUNCTION: ROBLOXSTUDIO 0x007c90ff
extern "C" __declspec(naked) void adjustorThunk_007c90ff()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_007c90ff }
}

extern "C" void thunkTarget_0080ce13();
// FUNCTION: ROBLOXSTUDIO 0x0080ce13
extern "C" __declspec(naked) void adjustorThunk_0080ce13()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080ce13 }
}

extern "C" void thunkTarget_0080ce23();
// FUNCTION: ROBLOXSTUDIO 0x0080ce23
extern "C" __declspec(naked) void adjustorThunk_0080ce23()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080ce23 }
}

extern "C" void thunkTarget_0080ce33();
// FUNCTION: ROBLOXSTUDIO 0x0080ce33
extern "C" __declspec(naked) void adjustorThunk_0080ce33()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080ce33 }
}

extern "C" void thunkTarget_0080ce43();
// FUNCTION: ROBLOXSTUDIO 0x0080ce43
extern "C" __declspec(naked) void adjustorThunk_0080ce43()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080ce43 }
}

extern "C" void thunkTarget_0080ce53();
// FUNCTION: ROBLOXSTUDIO 0x0080ce53
extern "C" __declspec(naked) void adjustorThunk_0080ce53()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080ce53 }
}

extern "C" void thunkTarget_0080ce63();
// FUNCTION: ROBLOXSTUDIO 0x0080ce63
extern "C" __declspec(naked) void adjustorThunk_0080ce63()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080ce63 }
}

extern "C" void thunkTarget_0080ce73();
// FUNCTION: ROBLOXSTUDIO 0x0080ce73
extern "C" __declspec(naked) void adjustorThunk_0080ce73()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080ce73 }
}

extern "C" void thunkTarget_0080ce83();
// FUNCTION: ROBLOXSTUDIO 0x0080ce83
extern "C" __declspec(naked) void adjustorThunk_0080ce83()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080ce83 }
}

extern "C" void thunkTarget_0080ce93();
// FUNCTION: ROBLOXSTUDIO 0x0080ce93
extern "C" __declspec(naked) void adjustorThunk_0080ce93()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080ce93 }
}

extern "C" void thunkTarget_0080cea3();
// FUNCTION: ROBLOXSTUDIO 0x0080cea3
extern "C" __declspec(naked) void adjustorThunk_0080cea3()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cea3 }
}

extern "C" void thunkTarget_0080ceb3();
// FUNCTION: ROBLOXSTUDIO 0x0080ceb3
extern "C" __declspec(naked) void adjustorThunk_0080ceb3()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080ceb3 }
}

extern "C" void thunkTarget_0080cec3();
// FUNCTION: ROBLOXSTUDIO 0x0080cec3
extern "C" __declspec(naked) void adjustorThunk_0080cec3()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cec3 }
}

extern "C" void thunkTarget_0080ced3();
// FUNCTION: ROBLOXSTUDIO 0x0080ced3
extern "C" __declspec(naked) void adjustorThunk_0080ced3()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080ced3 }
}

extern "C" void thunkTarget_0080cee3();
// FUNCTION: ROBLOXSTUDIO 0x0080cee3
extern "C" __declspec(naked) void adjustorThunk_0080cee3()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cee3 }
}

extern "C" void thunkTarget_0080cef3();
// FUNCTION: ROBLOXSTUDIO 0x0080cef3
extern "C" __declspec(naked) void adjustorThunk_0080cef3()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cef3 }
}

extern "C" void thunkTarget_0080cf03();
// FUNCTION: ROBLOXSTUDIO 0x0080cf03
extern "C" __declspec(naked) void adjustorThunk_0080cf03()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cf03 }
}

extern "C" void thunkTarget_0080cf13();
// FUNCTION: ROBLOXSTUDIO 0x0080cf13
extern "C" __declspec(naked) void adjustorThunk_0080cf13()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cf13 }
}

extern "C" void thunkTarget_0080cf2b();
// FUNCTION: ROBLOXSTUDIO 0x0080cf2b
extern "C" __declspec(naked) void adjustorThunk_0080cf2b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cf2b }
}

extern "C" void thunkTarget_0080cf3b();
// FUNCTION: ROBLOXSTUDIO 0x0080cf3b
extern "C" __declspec(naked) void adjustorThunk_0080cf3b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cf3b }
}

extern "C" void thunkTarget_0080cf4b();
// FUNCTION: ROBLOXSTUDIO 0x0080cf4b
extern "C" __declspec(naked) void adjustorThunk_0080cf4b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cf4b }
}

extern "C" void thunkTarget_0080cf5b();
// FUNCTION: ROBLOXSTUDIO 0x0080cf5b
extern "C" __declspec(naked) void adjustorThunk_0080cf5b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cf5b }
}

extern "C" void thunkTarget_0080cf6b();
// FUNCTION: ROBLOXSTUDIO 0x0080cf6b
extern "C" __declspec(naked) void adjustorThunk_0080cf6b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cf6b }
}

extern "C" void thunkTarget_0080cf7b();
// FUNCTION: ROBLOXSTUDIO 0x0080cf7b
extern "C" __declspec(naked) void adjustorThunk_0080cf7b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cf7b }
}

extern "C" void thunkTarget_0080cf8b();
// FUNCTION: ROBLOXSTUDIO 0x0080cf8b
extern "C" __declspec(naked) void adjustorThunk_0080cf8b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cf8b }
}

extern "C" void thunkTarget_0080cf9b();
// FUNCTION: ROBLOXSTUDIO 0x0080cf9b
extern "C" __declspec(naked) void adjustorThunk_0080cf9b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cf9b }
}

extern "C" void thunkTarget_0080cfab();
// FUNCTION: ROBLOXSTUDIO 0x0080cfab
extern "C" __declspec(naked) void adjustorThunk_0080cfab()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cfab }
}

extern "C" void thunkTarget_0080cfbb();
// FUNCTION: ROBLOXSTUDIO 0x0080cfbb
extern "C" __declspec(naked) void adjustorThunk_0080cfbb()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cfbb }
}

extern "C" void thunkTarget_0080cfcb();
// FUNCTION: ROBLOXSTUDIO 0x0080cfcb
extern "C" __declspec(naked) void adjustorThunk_0080cfcb()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cfcb }
}

extern "C" void thunkTarget_0080cfdb();
// FUNCTION: ROBLOXSTUDIO 0x0080cfdb
extern "C" __declspec(naked) void adjustorThunk_0080cfdb()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cfdb }
}

extern "C" void thunkTarget_0080cfeb();
// FUNCTION: ROBLOXSTUDIO 0x0080cfeb
extern "C" __declspec(naked) void adjustorThunk_0080cfeb()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cfeb }
}

extern "C" void thunkTarget_0080cffb();
// FUNCTION: ROBLOXSTUDIO 0x0080cffb
extern "C" __declspec(naked) void adjustorThunk_0080cffb()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080cffb }
}

extern "C" void thunkTarget_0080d003();
// FUNCTION: ROBLOXSTUDIO 0x0080d003
extern "C" __declspec(naked) void adjustorThunk_0080d003()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0080d003 }
}

extern "C" void thunkTarget_00825f55();
// FUNCTION: ROBLOXSTUDIO 0x00825f55
extern "C" __declspec(naked) void adjustorThunk_00825f55()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00825f55 }
}

extern "C" void thunkTarget_00825f65();
// FUNCTION: ROBLOXSTUDIO 0x00825f65
extern "C" __declspec(naked) void adjustorThunk_00825f65()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00825f65 }
}

extern "C" void thunkTarget_00829e2a();
// FUNCTION: ROBLOXSTUDIO 0x00829e2a
extern "C" __declspec(naked) void adjustorThunk_00829e2a()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00829e2a }
}

extern "C" void thunkTarget_00849c4d();
// FUNCTION: ROBLOXSTUDIO 0x00849c4d
extern "C" __declspec(naked) void adjustorThunk_00849c4d()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00849c4d }
}

extern "C" void thunkTarget_00849c7e();
// FUNCTION: ROBLOXSTUDIO 0x00849c7e
extern "C" __declspec(naked) void adjustorThunk_00849c7e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00849c7e }
}

extern "C" void thunkTarget_00849c96();
// FUNCTION: ROBLOXSTUDIO 0x00849c96
extern "C" __declspec(naked) void adjustorThunk_00849c96()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00849c96 }
}

extern "C" void thunkTarget_0086c383();
// FUNCTION: ROBLOXSTUDIO 0x0086c383
extern "C" __declspec(naked) void adjustorThunk_0086c383()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0086c383 }
}

extern "C" void thunkTarget_0086c38b();
// FUNCTION: ROBLOXSTUDIO 0x0086c38b
extern "C" __declspec(naked) void adjustorThunk_0086c38b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0086c38b }
}

extern "C" void thunkTarget_0087b5fe();
// FUNCTION: ROBLOXSTUDIO 0x0087b5fe
extern "C" __declspec(naked) void adjustorThunk_0087b5fe()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0087b5fe }
}

extern "C" void thunkTarget_0087b60e();
// FUNCTION: ROBLOXSTUDIO 0x0087b60e
extern "C" __declspec(naked) void adjustorThunk_0087b60e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0087b60e }
}

extern "C" void thunkTarget_0087dbfe();
// FUNCTION: ROBLOXSTUDIO 0x0087dbfe
extern "C" __declspec(naked) void adjustorThunk_0087dbfe()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0087dbfe }
}

extern "C" void thunkTarget_0087dc0e();
// FUNCTION: ROBLOXSTUDIO 0x0087dc0e
extern "C" __declspec(naked) void adjustorThunk_0087dc0e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0087dc0e }
}

extern "C" void thunkTarget_00880722();
// FUNCTION: ROBLOXSTUDIO 0x00880722
extern "C" __declspec(naked) void adjustorThunk_00880722()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00880722 }
}

extern "C" void thunkTarget_00880732();
// FUNCTION: ROBLOXSTUDIO 0x00880732
extern "C" __declspec(naked) void adjustorThunk_00880732()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00880732 }
}

extern "C" void thunkTarget_0088460e();
// FUNCTION: ROBLOXSTUDIO 0x0088460e
extern "C" __declspec(naked) void adjustorThunk_0088460e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0088460e }
}

extern "C" void thunkTarget_0088461e();
// FUNCTION: ROBLOXSTUDIO 0x0088461e
extern "C" __declspec(naked) void adjustorThunk_0088461e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0088461e }
}

extern "C" void thunkTarget_00885726();
// FUNCTION: ROBLOXSTUDIO 0x00885726
extern "C" __declspec(naked) void adjustorThunk_00885726()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00885726 }
}

extern "C" void thunkTarget_0088573e();
// FUNCTION: ROBLOXSTUDIO 0x0088573e
extern "C" __declspec(naked) void adjustorThunk_0088573e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0088573e }
}

extern "C" void thunkTarget_0088f0f4();
// FUNCTION: ROBLOXSTUDIO 0x0088f0f4
extern "C" __declspec(naked) void adjustorThunk_0088f0f4()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0088f0f4 }
}

extern "C" void thunkTarget_0088f104();
// FUNCTION: ROBLOXSTUDIO 0x0088f104
extern "C" __declspec(naked) void adjustorThunk_0088f104()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0088f104 }
}

extern "C" void thunkTarget_0089a334();
// FUNCTION: ROBLOXSTUDIO 0x0089a334
extern "C" __declspec(naked) void adjustorThunk_0089a334()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0089a334 }
}

extern "C" void thunkTarget_008a0f02();
// FUNCTION: ROBLOXSTUDIO 0x008a0f02
extern "C" __declspec(naked) void adjustorThunk_008a0f02()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008a0f02 }
}

extern "C" void thunkTarget_008a0f12();
// FUNCTION: ROBLOXSTUDIO 0x008a0f12
extern "C" __declspec(naked) void adjustorThunk_008a0f12()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008a0f12 }
}

extern "C" void thunkTarget_008a73be();
// FUNCTION: ROBLOXSTUDIO 0x008a73be
extern "C" __declspec(naked) void adjustorThunk_008a73be()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008a73be }
}

extern "C" void thunkTarget_008a73ce();
// FUNCTION: ROBLOXSTUDIO 0x008a73ce
extern "C" __declspec(naked) void adjustorThunk_008a73ce()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008a73ce }
}

extern "C" void thunkTarget_008a9c82();
// FUNCTION: ROBLOXSTUDIO 0x008a9c82
extern "C" __declspec(naked) void adjustorThunk_008a9c82()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008a9c82 }
}

extern "C" void thunkTarget_008a9c92();
// FUNCTION: ROBLOXSTUDIO 0x008a9c92
extern "C" __declspec(naked) void adjustorThunk_008a9c92()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008a9c92 }
}

extern "C" void thunkTarget_008abbfd();
// FUNCTION: ROBLOXSTUDIO 0x008abbfd
extern "C" __declspec(naked) void adjustorThunk_008abbfd()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008abbfd }
}

extern "C" void thunkTarget_008abc05();
// FUNCTION: ROBLOXSTUDIO 0x008abc05
extern "C" __declspec(naked) void adjustorThunk_008abc05()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008abc05 }
}

extern "C" void thunkTarget_008abc33();
// FUNCTION: ROBLOXSTUDIO 0x008abc33
extern "C" __declspec(naked) void adjustorThunk_008abc33()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008abc33 }
}

extern "C" void thunkTarget_008abc4e();
// FUNCTION: ROBLOXSTUDIO 0x008abc4e
extern "C" __declspec(naked) void adjustorThunk_008abc4e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008abc4e }
}

extern "C" void thunkTarget_008ada22();
// FUNCTION: ROBLOXSTUDIO 0x008ada22
extern "C" __declspec(naked) void adjustorThunk_008ada22()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008ada22 }
}

extern "C" void thunkTarget_008bb457();
// FUNCTION: ROBLOXSTUDIO 0x008bb457
extern "C" __declspec(naked) void adjustorThunk_008bb457()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008bb457 }
}

extern "C" void thunkTarget_008bb467();
// FUNCTION: ROBLOXSTUDIO 0x008bb467
extern "C" __declspec(naked) void adjustorThunk_008bb467()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008bb467 }
}

extern "C" void thunkTarget_008bb477();
// FUNCTION: ROBLOXSTUDIO 0x008bb477
extern "C" __declspec(naked) void adjustorThunk_008bb477()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008bb477 }
}

extern "C" void thunkTarget_008c3f8c();
// FUNCTION: ROBLOXSTUDIO 0x008c3f8c
extern "C" __declspec(naked) void adjustorThunk_008c3f8c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008c3f8c }
}

extern "C" void thunkTarget_008d1b7e();
// FUNCTION: ROBLOXSTUDIO 0x008d1b7e
extern "C" __declspec(naked) void adjustorThunk_008d1b7e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008d1b7e }
}

extern "C" void thunkTarget_008d1b8e();
// FUNCTION: ROBLOXSTUDIO 0x008d1b8e
extern "C" __declspec(naked) void adjustorThunk_008d1b8e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008d1b8e }
}

extern "C" void thunkTarget_008edf03();
// FUNCTION: ROBLOXSTUDIO 0x008edf03
extern "C" __declspec(naked) void adjustorThunk_008edf03()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008edf03 }
}

extern "C" void thunkTarget_008f50fb();
// FUNCTION: ROBLOXSTUDIO 0x008f50fb
extern "C" __declspec(naked) void adjustorThunk_008f50fb()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008f50fb }
}

extern "C" void thunkTarget_008fe883();
// FUNCTION: ROBLOXSTUDIO 0x008fe883
extern "C" __declspec(naked) void adjustorThunk_008fe883()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008fe883 }
}

extern "C" void thunkTarget_008fe893();
// FUNCTION: ROBLOXSTUDIO 0x008fe893
extern "C" __declspec(naked) void adjustorThunk_008fe893()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008fe893 }
}

extern "C" void thunkTarget_008fe8ab();
// FUNCTION: ROBLOXSTUDIO 0x008fe8ab
extern "C" __declspec(naked) void adjustorThunk_008fe8ab()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008fe8ab }
}

extern "C" void thunkTarget_008fe8b3();
// FUNCTION: ROBLOXSTUDIO 0x008fe8b3
extern "C" __declspec(naked) void adjustorThunk_008fe8b3()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_008fe8b3 }
}

extern "C" void thunkTarget_0090119f();
// FUNCTION: ROBLOXSTUDIO 0x0090119f
extern "C" __declspec(naked) void adjustorThunk_0090119f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090119f }
}

extern "C" void thunkTarget_009011af();
// FUNCTION: ROBLOXSTUDIO 0x009011af
extern "C" __declspec(naked) void adjustorThunk_009011af()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009011af }
}

extern "C" void thunkTarget_009021c9();
// FUNCTION: ROBLOXSTUDIO 0x009021c9
extern "C" __declspec(naked) void adjustorThunk_009021c9()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009021c9 }
}

extern "C" void thunkTarget_009021d9();
// FUNCTION: ROBLOXSTUDIO 0x009021d9
extern "C" __declspec(naked) void adjustorThunk_009021d9()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009021d9 }
}

extern "C" void thunkTarget_009021e9();
// FUNCTION: ROBLOXSTUDIO 0x009021e9
extern "C" __declspec(naked) void adjustorThunk_009021e9()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009021e9 }
}

extern "C" void thunkTarget_00903380();
// FUNCTION: ROBLOXSTUDIO 0x00903380
extern "C" __declspec(naked) void adjustorThunk_00903380()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00903380 }
}

extern "C" void thunkTarget_0090844c();
// FUNCTION: ROBLOXSTUDIO 0x0090844c
extern "C" __declspec(naked) void adjustorThunk_0090844c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090844c }
}

extern "C" void thunkTarget_0090845c();
// FUNCTION: ROBLOXSTUDIO 0x0090845c
extern "C" __declspec(naked) void adjustorThunk_0090845c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090845c }
}

extern "C" void thunkTarget_0090846c();
// FUNCTION: ROBLOXSTUDIO 0x0090846c
extern "C" __declspec(naked) void adjustorThunk_0090846c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090846c }
}

extern "C" void thunkTarget_0090a652();
// FUNCTION: ROBLOXSTUDIO 0x0090a652
extern "C" __declspec(naked) void adjustorThunk_0090a652()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090a652 }
}

extern "C" void thunkTarget_0090a65a();
// FUNCTION: ROBLOXSTUDIO 0x0090a65a
extern "C" __declspec(naked) void adjustorThunk_0090a65a()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090a65a }
}

extern "C" void thunkTarget_0090a672();
// FUNCTION: ROBLOXSTUDIO 0x0090a672
extern "C" __declspec(naked) void adjustorThunk_0090a672()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090a672 }
}

extern "C" void thunkTarget_0090a682();
// FUNCTION: ROBLOXSTUDIO 0x0090a682
extern "C" __declspec(naked) void adjustorThunk_0090a682()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090a682 }
}

extern "C" void thunkTarget_0090d365();
// FUNCTION: ROBLOXSTUDIO 0x0090d365
extern "C" __declspec(naked) void adjustorThunk_0090d365()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090d365 }
}

extern "C" void thunkTarget_0090fda1();
// FUNCTION: ROBLOXSTUDIO 0x0090fda1
extern "C" __declspec(naked) void adjustorThunk_0090fda1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090fda1 }
}

extern "C" void thunkTarget_0090fdc4();
// FUNCTION: ROBLOXSTUDIO 0x0090fdc4
extern "C" __declspec(naked) void adjustorThunk_0090fdc4()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090fdc4 }
}

extern "C" void thunkTarget_0090fddf();
// FUNCTION: ROBLOXSTUDIO 0x0090fddf
extern "C" __declspec(naked) void adjustorThunk_0090fddf()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0090fddf }
}

extern "C" void thunkTarget_009131e8();
// FUNCTION: ROBLOXSTUDIO 0x009131e8
extern "C" __declspec(naked) void adjustorThunk_009131e8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009131e8 }
}

extern "C" void thunkTarget_009131f8();
// FUNCTION: ROBLOXSTUDIO 0x009131f8
extern "C" __declspec(naked) void adjustorThunk_009131f8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009131f8 }
}

extern "C" void thunkTarget_00913200();
// FUNCTION: ROBLOXSTUDIO 0x00913200
extern "C" __declspec(naked) void adjustorThunk_00913200()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00913200 }
}

extern "C" void thunkTarget_00913208();
// FUNCTION: ROBLOXSTUDIO 0x00913208
extern "C" __declspec(naked) void adjustorThunk_00913208()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00913208 }
}

extern "C" void thunkTarget_00913218();
// FUNCTION: ROBLOXSTUDIO 0x00913218
extern "C" __declspec(naked) void adjustorThunk_00913218()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00913218 }
}

extern "C" void thunkTarget_00913228();
// FUNCTION: ROBLOXSTUDIO 0x00913228
extern "C" __declspec(naked) void adjustorThunk_00913228()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00913228 }
}

extern "C" void thunkTarget_00913240();
// FUNCTION: ROBLOXSTUDIO 0x00913240
extern "C" __declspec(naked) void adjustorThunk_00913240()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00913240 }
}

extern "C" void thunkTarget_00913248();
// FUNCTION: ROBLOXSTUDIO 0x00913248
extern "C" __declspec(naked) void adjustorThunk_00913248()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00913248 }
}

extern "C" void thunkTarget_00913250();
// FUNCTION: ROBLOXSTUDIO 0x00913250
extern "C" __declspec(naked) void adjustorThunk_00913250()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00913250 }
}

extern "C" void thunkTarget_00913258();
// FUNCTION: ROBLOXSTUDIO 0x00913258
extern "C" __declspec(naked) void adjustorThunk_00913258()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00913258 }
}

extern "C" void thunkTarget_00913268();
// FUNCTION: ROBLOXSTUDIO 0x00913268
extern "C" __declspec(naked) void adjustorThunk_00913268()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00913268 }
}

extern "C" void thunkTarget_00913288();
// FUNCTION: ROBLOXSTUDIO 0x00913288
extern "C" __declspec(naked) void adjustorThunk_00913288()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00913288 }
}

extern "C" void thunkTarget_00913290();
// FUNCTION: ROBLOXSTUDIO 0x00913290
extern "C" __declspec(naked) void adjustorThunk_00913290()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00913290 }
}

extern "C" void thunkTarget_009132a0();
// FUNCTION: ROBLOXSTUDIO 0x009132a0
extern "C" __declspec(naked) void adjustorThunk_009132a0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009132a0 }
}

extern "C" void thunkTarget_00916a1d();
// FUNCTION: ROBLOXSTUDIO 0x00916a1d
extern "C" __declspec(naked) void adjustorThunk_00916a1d()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00916a1d }
}

extern "C" void thunkTarget_00916a43();
// FUNCTION: ROBLOXSTUDIO 0x00916a43
extern "C" __declspec(naked) void adjustorThunk_00916a43()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00916a43 }
}

extern "C" void thunkTarget_00916a4b();
// FUNCTION: ROBLOXSTUDIO 0x00916a4b
extern "C" __declspec(naked) void adjustorThunk_00916a4b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00916a4b }
}

extern "C" void thunkTarget_00916a66();
// FUNCTION: ROBLOXSTUDIO 0x00916a66
extern "C" __declspec(naked) void adjustorThunk_00916a66()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00916a66 }
}

extern "C" void thunkTarget_0091999f();
// FUNCTION: ROBLOXSTUDIO 0x0091999f
extern "C" __declspec(naked) void adjustorThunk_0091999f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0091999f }
}

extern "C" void thunkTarget_009199b2();
// FUNCTION: ROBLOXSTUDIO 0x009199b2
extern "C" __declspec(naked) void adjustorThunk_009199b2()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009199b2 }
}

extern "C" void thunkTarget_009199d5();
// FUNCTION: ROBLOXSTUDIO 0x009199d5
extern "C" __declspec(naked) void adjustorThunk_009199d5()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009199d5 }
}

extern "C" void thunkTarget_009199e8();
// FUNCTION: ROBLOXSTUDIO 0x009199e8
extern "C" __declspec(naked) void adjustorThunk_009199e8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009199e8 }
}

extern "C" void thunkTarget_00919a19();
// FUNCTION: ROBLOXSTUDIO 0x00919a19
extern "C" __declspec(naked) void adjustorThunk_00919a19()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00919a19 }
}

extern "C" void thunkTarget_0091f1bc();
// FUNCTION: ROBLOXSTUDIO 0x0091f1bc
extern "C" __declspec(naked) void adjustorThunk_0091f1bc()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0091f1bc }
}

extern "C" void thunkTarget_0091f1cc();
// FUNCTION: ROBLOXSTUDIO 0x0091f1cc
extern "C" __declspec(naked) void adjustorThunk_0091f1cc()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0091f1cc }
}

extern "C" void thunkTarget_00923524();
// FUNCTION: ROBLOXSTUDIO 0x00923524
extern "C" __declspec(naked) void adjustorThunk_00923524()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00923524 }
}

extern "C" void thunkTarget_00923534();
// FUNCTION: ROBLOXSTUDIO 0x00923534
extern "C" __declspec(naked) void adjustorThunk_00923534()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00923534 }
}

extern "C" void thunkTarget_0092354f();
// FUNCTION: ROBLOXSTUDIO 0x0092354f
extern "C" __declspec(naked) void adjustorThunk_0092354f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0092354f }
}

extern "C" void thunkTarget_009285d1();
// FUNCTION: ROBLOXSTUDIO 0x009285d1
extern "C" __declspec(naked) void adjustorThunk_009285d1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009285d1 }
}

extern "C" void thunkTarget_009285e1();
// FUNCTION: ROBLOXSTUDIO 0x009285e1
extern "C" __declspec(naked) void adjustorThunk_009285e1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009285e1 }
}

extern "C" void thunkTarget_009285f9();
// FUNCTION: ROBLOXSTUDIO 0x009285f9
extern "C" __declspec(naked) void adjustorThunk_009285f9()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009285f9 }
}

extern "C" void thunkTarget_0092a1af();
// FUNCTION: ROBLOXSTUDIO 0x0092a1af
extern "C" __declspec(naked) void adjustorThunk_0092a1af()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0092a1af }
}

extern "C" void thunkTarget_00933515();
// FUNCTION: ROBLOXSTUDIO 0x00933515
extern "C" __declspec(naked) void adjustorThunk_00933515()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00933515 }
}

extern "C" void thunkTarget_00937858();
// FUNCTION: ROBLOXSTUDIO 0x00937858
extern "C" __declspec(naked) void adjustorThunk_00937858()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00937858 }
}

extern "C" void thunkTarget_00939bcc();
// FUNCTION: ROBLOXSTUDIO 0x00939bcc
extern "C" __declspec(naked) void adjustorThunk_00939bcc()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00939bcc }
}

extern "C" void thunkTarget_0093afee();
// FUNCTION: ROBLOXSTUDIO 0x0093afee
extern "C" __declspec(naked) void adjustorThunk_0093afee()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0093afee }
}

extern "C" void thunkTarget_0093affe();
// FUNCTION: ROBLOXSTUDIO 0x0093affe
extern "C" __declspec(naked) void adjustorThunk_0093affe()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0093affe }
}

extern "C" void thunkTarget_0094126b();
// FUNCTION: ROBLOXSTUDIO 0x0094126b
extern "C" __declspec(naked) void adjustorThunk_0094126b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0094126b }
}

extern "C" void thunkTarget_0094127b();
// FUNCTION: ROBLOXSTUDIO 0x0094127b
extern "C" __declspec(naked) void adjustorThunk_0094127b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0094127b }
}

extern "C" void thunkTarget_0094128b();
// FUNCTION: ROBLOXSTUDIO 0x0094128b
extern "C" __declspec(naked) void adjustorThunk_0094128b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0094128b }
}

extern "C" void thunkTarget_0094129b();
// FUNCTION: ROBLOXSTUDIO 0x0094129b
extern "C" __declspec(naked) void adjustorThunk_0094129b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0094129b }
}

extern "C" void thunkTarget_0095d210();
// FUNCTION: ROBLOXSTUDIO 0x0095d210
extern "C" __declspec(naked) void adjustorThunk_0095d210()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0095d210 }
}

extern "C" void thunkTarget_0095d218();
// FUNCTION: ROBLOXSTUDIO 0x0095d218
extern "C" __declspec(naked) void adjustorThunk_0095d218()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0095d218 }
}

extern "C" void thunkTarget_0095d220();
// FUNCTION: ROBLOXSTUDIO 0x0095d220
extern "C" __declspec(naked) void adjustorThunk_0095d220()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0095d220 }
}

extern "C" void thunkTarget_0096576c();
// FUNCTION: ROBLOXSTUDIO 0x0096576c
extern "C" __declspec(naked) void adjustorThunk_0096576c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0096576c }
}

extern "C" void thunkTarget_0096577c();
// FUNCTION: ROBLOXSTUDIO 0x0096577c
extern "C" __declspec(naked) void adjustorThunk_0096577c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0096577c }
}

extern "C" void thunkTarget_0096578f();
// FUNCTION: ROBLOXSTUDIO 0x0096578f
extern "C" __declspec(naked) void adjustorThunk_0096578f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0096578f }
}

extern "C" void thunkTarget_00965797();
// FUNCTION: ROBLOXSTUDIO 0x00965797
extern "C" __declspec(naked) void adjustorThunk_00965797()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00965797 }
}

extern "C" void thunkTarget_0096579f();
// FUNCTION: ROBLOXSTUDIO 0x0096579f
extern "C" __declspec(naked) void adjustorThunk_0096579f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0096579f }
}

extern "C" void thunkTarget_009657d0();
// FUNCTION: ROBLOXSTUDIO 0x009657d0
extern "C" __declspec(naked) void adjustorThunk_009657d0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009657d0 }
}

extern "C" void thunkTarget_0096fb32();
// FUNCTION: ROBLOXSTUDIO 0x0096fb32
extern "C" __declspec(naked) void adjustorThunk_0096fb32()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0096fb32 }
}

extern "C" void thunkTarget_0096fb42();
// FUNCTION: ROBLOXSTUDIO 0x0096fb42
extern "C" __declspec(naked) void adjustorThunk_0096fb42()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0096fb42 }
}

extern "C" void thunkTarget_00976455();
// FUNCTION: ROBLOXSTUDIO 0x00976455
extern "C" __declspec(naked) void adjustorThunk_00976455()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00976455 }
}

extern "C" void thunkTarget_00976465();
// FUNCTION: ROBLOXSTUDIO 0x00976465
extern "C" __declspec(naked) void adjustorThunk_00976465()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00976465 }
}

extern "C" void thunkTarget_0097f79a();
// FUNCTION: ROBLOXSTUDIO 0x0097f79a
extern "C" __declspec(naked) void adjustorThunk_0097f79a()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0097f79a }
}

extern "C" void thunkTarget_00980f56();
// FUNCTION: ROBLOXSTUDIO 0x00980f56
extern "C" __declspec(naked) void adjustorThunk_00980f56()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00980f56 }
}

extern "C" void thunkTarget_00980f66();
// FUNCTION: ROBLOXSTUDIO 0x00980f66
extern "C" __declspec(naked) void adjustorThunk_00980f66()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00980f66 }
}

extern "C" void thunkTarget_00980f76();
// FUNCTION: ROBLOXSTUDIO 0x00980f76
extern "C" __declspec(naked) void adjustorThunk_00980f76()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00980f76 }
}

extern "C" void thunkTarget_00981a26();
// FUNCTION: ROBLOXSTUDIO 0x00981a26
extern "C" __declspec(naked) void adjustorThunk_00981a26()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00981a26 }
}

extern "C" void thunkTarget_00981a36();
// FUNCTION: ROBLOXSTUDIO 0x00981a36
extern "C" __declspec(naked) void adjustorThunk_00981a36()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00981a36 }
}

extern "C" void thunkTarget_009825f9();
// FUNCTION: ROBLOXSTUDIO 0x009825f9
extern "C" __declspec(naked) void adjustorThunk_009825f9()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009825f9 }
}

extern "C" void thunkTarget_00982609();
// FUNCTION: ROBLOXSTUDIO 0x00982609
extern "C" __declspec(naked) void adjustorThunk_00982609()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00982609 }
}

extern "C" void thunkTarget_00983305();
// FUNCTION: ROBLOXSTUDIO 0x00983305
extern "C" __declspec(naked) void adjustorThunk_00983305()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00983305 }
}

extern "C" void thunkTarget_00983315();
// FUNCTION: ROBLOXSTUDIO 0x00983315
extern "C" __declspec(naked) void adjustorThunk_00983315()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00983315 }
}

extern "C" void thunkTarget_0098c190();
// FUNCTION: ROBLOXSTUDIO 0x0098c190
extern "C" __declspec(naked) void adjustorThunk_0098c190()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0098c190 }
}

extern "C" void thunkTarget_0098c1a0();
// FUNCTION: ROBLOXSTUDIO 0x0098c1a0
extern "C" __declspec(naked) void adjustorThunk_0098c1a0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0098c1a0 }
}

extern "C" void thunkTarget_0098c1b0();
// FUNCTION: ROBLOXSTUDIO 0x0098c1b0
extern "C" __declspec(naked) void adjustorThunk_0098c1b0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0098c1b0 }
}

extern "C" void thunkTarget_0098c1c0();
// FUNCTION: ROBLOXSTUDIO 0x0098c1c0
extern "C" __declspec(naked) void adjustorThunk_0098c1c0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0098c1c0 }
}

extern "C" void thunkTarget_0098c1d0();
// FUNCTION: ROBLOXSTUDIO 0x0098c1d0
extern "C" __declspec(naked) void adjustorThunk_0098c1d0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0098c1d0 }
}

extern "C" void thunkTarget_0099f9d7();
// FUNCTION: ROBLOXSTUDIO 0x0099f9d7
extern "C" __declspec(naked) void adjustorThunk_0099f9d7()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0099f9d7 }
}

extern "C" void thunkTarget_0099f9e7();
// FUNCTION: ROBLOXSTUDIO 0x0099f9e7
extern "C" __declspec(naked) void adjustorThunk_0099f9e7()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_0099f9e7 }
}

extern "C" void thunkTarget_009a2ad8();
// FUNCTION: ROBLOXSTUDIO 0x009a2ad8
extern "C" __declspec(naked) void adjustorThunk_009a2ad8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009a2ad8 }
}

extern "C" void thunkTarget_009a3d60();
// FUNCTION: ROBLOXSTUDIO 0x009a3d60
extern "C" __declspec(naked) void adjustorThunk_009a3d60()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009a3d60 }
}

extern "C" void thunkTarget_009aa4ee();
// FUNCTION: ROBLOXSTUDIO 0x009aa4ee
extern "C" __declspec(naked) void adjustorThunk_009aa4ee()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009aa4ee }
}

extern "C" void thunkTarget_009aa4fe();
// FUNCTION: ROBLOXSTUDIO 0x009aa4fe
extern "C" __declspec(naked) void adjustorThunk_009aa4fe()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009aa4fe }
}

extern "C" void thunkTarget_009b4c74();
// FUNCTION: ROBLOXSTUDIO 0x009b4c74
extern "C" __declspec(naked) void adjustorThunk_009b4c74()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009b4c74 }
}

extern "C" void thunkTarget_009b4c8c();
// FUNCTION: ROBLOXSTUDIO 0x009b4c8c
extern "C" __declspec(naked) void adjustorThunk_009b4c8c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009b4c8c }
}

extern "C" void thunkTarget_009b4c9c();
// FUNCTION: ROBLOXSTUDIO 0x009b4c9c
extern "C" __declspec(naked) void adjustorThunk_009b4c9c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009b4c9c }
}

extern "C" void thunkTarget_009b4cb4();
// FUNCTION: ROBLOXSTUDIO 0x009b4cb4
extern "C" __declspec(naked) void adjustorThunk_009b4cb4()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009b4cb4 }
}

extern "C" void thunkTarget_009b4ccc();
// FUNCTION: ROBLOXSTUDIO 0x009b4ccc
extern "C" __declspec(naked) void adjustorThunk_009b4ccc()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009b4ccc }
}

extern "C" void thunkTarget_009b81ef();
// FUNCTION: ROBLOXSTUDIO 0x009b81ef
extern "C" __declspec(naked) void adjustorThunk_009b81ef()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009b81ef }
}

extern "C" void thunkTarget_009b81ff();
// FUNCTION: ROBLOXSTUDIO 0x009b81ff
extern "C" __declspec(naked) void adjustorThunk_009b81ff()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009b81ff }
}

extern "C" void thunkTarget_009bd406();
// FUNCTION: ROBLOXSTUDIO 0x009bd406
extern "C" __declspec(naked) void adjustorThunk_009bd406()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009bd406 }
}

extern "C" void thunkTarget_009bd416();
// FUNCTION: ROBLOXSTUDIO 0x009bd416
extern "C" __declspec(naked) void adjustorThunk_009bd416()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009bd416 }
}

extern "C" void thunkTarget_009cb9c4();
// FUNCTION: ROBLOXSTUDIO 0x009cb9c4
extern "C" __declspec(naked) void adjustorThunk_009cb9c4()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009cb9c4 }
}

extern "C" void thunkTarget_009d3d62();
// FUNCTION: ROBLOXSTUDIO 0x009d3d62
extern "C" __declspec(naked) void adjustorThunk_009d3d62()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009d3d62 }
}

extern "C" void thunkTarget_009d3d72();
// FUNCTION: ROBLOXSTUDIO 0x009d3d72
extern "C" __declspec(naked) void adjustorThunk_009d3d72()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009d3d72 }
}

extern "C" void thunkTarget_009d3da3();
// FUNCTION: ROBLOXSTUDIO 0x009d3da3
extern "C" __declspec(naked) void adjustorThunk_009d3da3()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009d3da3 }
}

extern "C" void thunkTarget_009e8d45();
// FUNCTION: ROBLOXSTUDIO 0x009e8d45
extern "C" __declspec(naked) void adjustorThunk_009e8d45()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009e8d45 }
}

extern "C" void thunkTarget_009e8d55();
// FUNCTION: ROBLOXSTUDIO 0x009e8d55
extern "C" __declspec(naked) void adjustorThunk_009e8d55()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009e8d55 }
}

extern "C" void thunkTarget_009e8d65();
// FUNCTION: ROBLOXSTUDIO 0x009e8d65
extern "C" __declspec(naked) void adjustorThunk_009e8d65()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009e8d65 }
}

extern "C" void thunkTarget_009e8d75();
// FUNCTION: ROBLOXSTUDIO 0x009e8d75
extern "C" __declspec(naked) void adjustorThunk_009e8d75()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009e8d75 }
}

extern "C" void thunkTarget_009f858b();
// FUNCTION: ROBLOXSTUDIO 0x009f858b
extern "C" __declspec(naked) void adjustorThunk_009f858b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009f858b }
}

extern "C" void thunkTarget_009f85ab();
// FUNCTION: ROBLOXSTUDIO 0x009f85ab
extern "C" __declspec(naked) void adjustorThunk_009f85ab()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009f85ab }
}

extern "C" void thunkTarget_009f85bb();
// FUNCTION: ROBLOXSTUDIO 0x009f85bb
extern "C" __declspec(naked) void adjustorThunk_009f85bb()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009f85bb }
}

extern "C" void thunkTarget_009fbd08();
// FUNCTION: ROBLOXSTUDIO 0x009fbd08
extern "C" __declspec(naked) void adjustorThunk_009fbd08()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009fbd08 }
}

extern "C" void thunkTarget_009fbd18();
// FUNCTION: ROBLOXSTUDIO 0x009fbd18
extern "C" __declspec(naked) void adjustorThunk_009fbd18()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009fbd18 }
}

extern "C" void thunkTarget_009fbd28();
// FUNCTION: ROBLOXSTUDIO 0x009fbd28
extern "C" __declspec(naked) void adjustorThunk_009fbd28()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009fbd28 }
}

extern "C" void thunkTarget_009fbd40();
// FUNCTION: ROBLOXSTUDIO 0x009fbd40
extern "C" __declspec(naked) void adjustorThunk_009fbd40()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009fbd40 }
}

extern "C" void thunkTarget_009fbd50();
// FUNCTION: ROBLOXSTUDIO 0x009fbd50
extern "C" __declspec(naked) void adjustorThunk_009fbd50()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009fbd50 }
}

extern "C" void thunkTarget_009fbd78();
// FUNCTION: ROBLOXSTUDIO 0x009fbd78
extern "C" __declspec(naked) void adjustorThunk_009fbd78()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009fbd78 }
}

extern "C" void thunkTarget_009fbd90();
// FUNCTION: ROBLOXSTUDIO 0x009fbd90
extern "C" __declspec(naked) void adjustorThunk_009fbd90()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009fbd90 }
}

extern "C" void thunkTarget_009fcf8f();
// FUNCTION: ROBLOXSTUDIO 0x009fcf8f
extern "C" __declspec(naked) void adjustorThunk_009fcf8f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_009fcf8f }
}

extern "C" void thunkTarget_00a019dd();
// FUNCTION: ROBLOXSTUDIO 0x00a019dd
extern "C" __declspec(naked) void adjustorThunk_00a019dd()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a019dd }
}

extern "C" void thunkTarget_00a019f5();
// FUNCTION: ROBLOXSTUDIO 0x00a019f5
extern "C" __declspec(naked) void adjustorThunk_00a019f5()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a019f5 }
}

extern "C" void thunkTarget_00a025a6();
// FUNCTION: ROBLOXSTUDIO 0x00a025a6
extern "C" __declspec(naked) void adjustorThunk_00a025a6()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a025a6 }
}

extern "C" void thunkTarget_00a025c1();
// FUNCTION: ROBLOXSTUDIO 0x00a025c1
extern "C" __declspec(naked) void adjustorThunk_00a025c1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a025c1 }
}

extern "C" void thunkTarget_00a0b02f();
// FUNCTION: ROBLOXSTUDIO 0x00a0b02f
extern "C" __declspec(naked) void adjustorThunk_00a0b02f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a0b02f }
}

extern "C" void thunkTarget_00a0b03f();
// FUNCTION: ROBLOXSTUDIO 0x00a0b03f
extern "C" __declspec(naked) void adjustorThunk_00a0b03f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a0b03f }
}

extern "C" void thunkTarget_00a0b9ff();
// FUNCTION: ROBLOXSTUDIO 0x00a0b9ff
extern "C" __declspec(naked) void adjustorThunk_00a0b9ff()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a0b9ff }
}

extern "C" void thunkTarget_00a0ba0f();
// FUNCTION: ROBLOXSTUDIO 0x00a0ba0f
extern "C" __declspec(naked) void adjustorThunk_00a0ba0f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a0ba0f }
}

extern "C" void thunkTarget_00a0c3bf();
// FUNCTION: ROBLOXSTUDIO 0x00a0c3bf
extern "C" __declspec(naked) void adjustorThunk_00a0c3bf()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a0c3bf }
}

extern "C" void thunkTarget_00a0c3cf();
// FUNCTION: ROBLOXSTUDIO 0x00a0c3cf
extern "C" __declspec(naked) void adjustorThunk_00a0c3cf()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a0c3cf }
}

extern "C" void thunkTarget_00a0caab();
// FUNCTION: ROBLOXSTUDIO 0x00a0caab
extern "C" __declspec(naked) void adjustorThunk_00a0caab()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a0caab }
}

extern "C" void thunkTarget_00a0cabb();
// FUNCTION: ROBLOXSTUDIO 0x00a0cabb
extern "C" __declspec(naked) void adjustorThunk_00a0cabb()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a0cabb }
}

extern "C" void thunkTarget_00a0ddfb();
// FUNCTION: ROBLOXSTUDIO 0x00a0ddfb
extern "C" __declspec(naked) void adjustorThunk_00a0ddfb()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a0ddfb }
}

extern "C" void thunkTarget_00a0e64d();
// FUNCTION: ROBLOXSTUDIO 0x00a0e64d
extern "C" __declspec(naked) void adjustorThunk_00a0e64d()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a0e64d }
}

extern "C" void thunkTarget_00a0f223();
// FUNCTION: ROBLOXSTUDIO 0x00a0f223
extern "C" __declspec(naked) void adjustorThunk_00a0f223()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a0f223 }
}

extern "C" void thunkTarget_00a2cc60();
// FUNCTION: ROBLOXSTUDIO 0x00a2cc60
extern "C" __declspec(naked) void adjustorThunk_00a2cc60()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a2cc60 }
}

extern "C" void thunkTarget_00a2cc83();
// FUNCTION: ROBLOXSTUDIO 0x00a2cc83
extern "C" __declspec(naked) void adjustorThunk_00a2cc83()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a2cc83 }
}

extern "C" void thunkTarget_00a54c69();
// FUNCTION: ROBLOXSTUDIO 0x00a54c69
extern "C" __declspec(naked) void adjustorThunk_00a54c69()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a54c69 }
}

extern "C" void thunkTarget_00a54c71();
// FUNCTION: ROBLOXSTUDIO 0x00a54c71
extern "C" __declspec(naked) void adjustorThunk_00a54c71()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a54c71 }
}

extern "C" void thunkTarget_00a57289();
// FUNCTION: ROBLOXSTUDIO 0x00a57289
extern "C" __declspec(naked) void adjustorThunk_00a57289()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a57289 }
}

extern "C" void thunkTarget_00a57299();
// FUNCTION: ROBLOXSTUDIO 0x00a57299
extern "C" __declspec(naked) void adjustorThunk_00a57299()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a57299 }
}

extern "C" void thunkTarget_00a586c7();
// FUNCTION: ROBLOXSTUDIO 0x00a586c7
extern "C" __declspec(naked) void adjustorThunk_00a586c7()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a586c7 }
}

extern "C" void thunkTarget_00a5b497();
// FUNCTION: ROBLOXSTUDIO 0x00a5b497
extern "C" __declspec(naked) void adjustorThunk_00a5b497()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a5b497 }
}

extern "C" void thunkTarget_00a5b4a7();
// FUNCTION: ROBLOXSTUDIO 0x00a5b4a7
extern "C" __declspec(naked) void adjustorThunk_00a5b4a7()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a5b4a7 }
}

extern "C" void thunkTarget_00a5ee4e();
// FUNCTION: ROBLOXSTUDIO 0x00a5ee4e
extern "C" __declspec(naked) void adjustorThunk_00a5ee4e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a5ee4e }
}

extern "C" void thunkTarget_00a5ee5e();
// FUNCTION: ROBLOXSTUDIO 0x00a5ee5e
extern "C" __declspec(naked) void adjustorThunk_00a5ee5e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a5ee5e }
}

extern "C" void thunkTarget_00a60cd5();
// FUNCTION: ROBLOXSTUDIO 0x00a60cd5
extern "C" __declspec(naked) void adjustorThunk_00a60cd5()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a60cd5 }
}

extern "C" void thunkTarget_00a60ce5();
// FUNCTION: ROBLOXSTUDIO 0x00a60ce5
extern "C" __declspec(naked) void adjustorThunk_00a60ce5()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a60ce5 }
}

extern "C" void thunkTarget_00a62224();
// FUNCTION: ROBLOXSTUDIO 0x00a62224
extern "C" __declspec(naked) void adjustorThunk_00a62224()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a62224 }
}

extern "C" void thunkTarget_00a641bf();
// FUNCTION: ROBLOXSTUDIO 0x00a641bf
extern "C" __declspec(naked) void adjustorThunk_00a641bf()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a641bf }
}

extern "C" void thunkTarget_00a641cf();
// FUNCTION: ROBLOXSTUDIO 0x00a641cf
extern "C" __declspec(naked) void adjustorThunk_00a641cf()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a641cf }
}

extern "C" void thunkTarget_00a69314();
// FUNCTION: ROBLOXSTUDIO 0x00a69314
extern "C" __declspec(naked) void adjustorThunk_00a69314()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a69314 }
}

extern "C" void thunkTarget_00a69324();
// FUNCTION: ROBLOXSTUDIO 0x00a69324
extern "C" __declspec(naked) void adjustorThunk_00a69324()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a69324 }
}

extern "C" void thunkTarget_00a6eb96();
// FUNCTION: ROBLOXSTUDIO 0x00a6eb96
extern "C" __declspec(naked) void adjustorThunk_00a6eb96()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a6eb96 }
}

extern "C" void thunkTarget_00a6eba6();
// FUNCTION: ROBLOXSTUDIO 0x00a6eba6
extern "C" __declspec(naked) void adjustorThunk_00a6eba6()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a6eba6 }
}

extern "C" void thunkTarget_00a6fbb1();
// FUNCTION: ROBLOXSTUDIO 0x00a6fbb1
extern "C" __declspec(naked) void adjustorThunk_00a6fbb1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a6fbb1 }
}

extern "C" void thunkTarget_00a6fbc1();
// FUNCTION: ROBLOXSTUDIO 0x00a6fbc1
extern "C" __declspec(naked) void adjustorThunk_00a6fbc1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a6fbc1 }
}

extern "C" void thunkTarget_00a70772();
// FUNCTION: ROBLOXSTUDIO 0x00a70772
extern "C" __declspec(naked) void adjustorThunk_00a70772()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a70772 }
}

extern "C" void thunkTarget_00a70782();
// FUNCTION: ROBLOXSTUDIO 0x00a70782
extern "C" __declspec(naked) void adjustorThunk_00a70782()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a70782 }
}

extern "C" void thunkTarget_00a76fd6();
// FUNCTION: ROBLOXSTUDIO 0x00a76fd6
extern "C" __declspec(naked) void adjustorThunk_00a76fd6()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a76fd6 }
}

extern "C" void thunkTarget_00a76fe6();
// FUNCTION: ROBLOXSTUDIO 0x00a76fe6
extern "C" __declspec(naked) void adjustorThunk_00a76fe6()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a76fe6 }
}

extern "C" void thunkTarget_00a76ff6();
// FUNCTION: ROBLOXSTUDIO 0x00a76ff6
extern "C" __declspec(naked) void adjustorThunk_00a76ff6()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a76ff6 }
}

extern "C" void thunkTarget_00a77006();
// FUNCTION: ROBLOXSTUDIO 0x00a77006
extern "C" __declspec(naked) void adjustorThunk_00a77006()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a77006 }
}

extern "C" void thunkTarget_00a7ff56();
// FUNCTION: ROBLOXSTUDIO 0x00a7ff56
extern "C" __declspec(naked) void adjustorThunk_00a7ff56()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a7ff56 }
}

extern "C" void thunkTarget_00a7ff66();
// FUNCTION: ROBLOXSTUDIO 0x00a7ff66
extern "C" __declspec(naked) void adjustorThunk_00a7ff66()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a7ff66 }
}

extern "C" void thunkTarget_00a82cb8();
// FUNCTION: ROBLOXSTUDIO 0x00a82cb8
extern "C" __declspec(naked) void adjustorThunk_00a82cb8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a82cb8 }
}

extern "C" void thunkTarget_00a867d9();
// FUNCTION: ROBLOXSTUDIO 0x00a867d9
extern "C" __declspec(naked) void adjustorThunk_00a867d9()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a867d9 }
}

extern "C" void thunkTarget_00a867e9();
// FUNCTION: ROBLOXSTUDIO 0x00a867e9
extern "C" __declspec(naked) void adjustorThunk_00a867e9()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a867e9 }
}

extern "C" void thunkTarget_00a867f9();
// FUNCTION: ROBLOXSTUDIO 0x00a867f9
extern "C" __declspec(naked) void adjustorThunk_00a867f9()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a867f9 }
}

extern "C" void thunkTarget_00a8b69e();
// FUNCTION: ROBLOXSTUDIO 0x00a8b69e
extern "C" __declspec(naked) void adjustorThunk_00a8b69e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a8b69e }
}

extern "C" void thunkTarget_00a8b6c1();
// FUNCTION: ROBLOXSTUDIO 0x00a8b6c1
extern "C" __declspec(naked) void adjustorThunk_00a8b6c1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a8b6c1 }
}

extern "C" void thunkTarget_00a8d3ab();
// FUNCTION: ROBLOXSTUDIO 0x00a8d3ab
extern "C" __declspec(naked) void adjustorThunk_00a8d3ab()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a8d3ab }
}

extern "C" void thunkTarget_00a8d3b3();
// FUNCTION: ROBLOXSTUDIO 0x00a8d3b3
extern "C" __declspec(naked) void adjustorThunk_00a8d3b3()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a8d3b3 }
}

extern "C" void thunkTarget_00a8d3c3();
// FUNCTION: ROBLOXSTUDIO 0x00a8d3c3
extern "C" __declspec(naked) void adjustorThunk_00a8d3c3()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a8d3c3 }
}

extern "C" void thunkTarget_00a8eec5();
// FUNCTION: ROBLOXSTUDIO 0x00a8eec5
extern "C" __declspec(naked) void adjustorThunk_00a8eec5()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a8eec5 }
}

extern "C" void thunkTarget_00a8eee0();
// FUNCTION: ROBLOXSTUDIO 0x00a8eee0
extern "C" __declspec(naked) void adjustorThunk_00a8eee0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a8eee0 }
}

extern "C" void thunkTarget_00a902d1();
// FUNCTION: ROBLOXSTUDIO 0x00a902d1
extern "C" __declspec(naked) void adjustorThunk_00a902d1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a902d1 }
}

extern "C" void thunkTarget_00a902ec();
// FUNCTION: ROBLOXSTUDIO 0x00a902ec
extern "C" __declspec(naked) void adjustorThunk_00a902ec()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a902ec }
}

extern "C" void thunkTarget_00a90307();
// FUNCTION: ROBLOXSTUDIO 0x00a90307
extern "C" __declspec(naked) void adjustorThunk_00a90307()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a90307 }
}

extern "C" void thunkTarget_00a91ae2();
// FUNCTION: ROBLOXSTUDIO 0x00a91ae2
extern "C" __declspec(naked) void adjustorThunk_00a91ae2()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a91ae2 }
}

extern "C" void thunkTarget_00a91aea();
// FUNCTION: ROBLOXSTUDIO 0x00a91aea
extern "C" __declspec(naked) void adjustorThunk_00a91aea()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a91aea }
}

extern "C" void thunkTarget_00a95494();
// FUNCTION: ROBLOXSTUDIO 0x00a95494
extern "C" __declspec(naked) void adjustorThunk_00a95494()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a95494 }
}

extern "C" void thunkTarget_00a954c2();
// FUNCTION: ROBLOXSTUDIO 0x00a954c2
extern "C" __declspec(naked) void adjustorThunk_00a954c2()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a954c2 }
}

extern "C" void thunkTarget_00a9550b();
// FUNCTION: ROBLOXSTUDIO 0x00a9550b
extern "C" __declspec(naked) void adjustorThunk_00a9550b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a9550b }
}

extern "C" void thunkTarget_00a95539();
// FUNCTION: ROBLOXSTUDIO 0x00a95539
extern "C" __declspec(naked) void adjustorThunk_00a95539()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a95539 }
}

extern "C" void thunkTarget_00a9555f();
// FUNCTION: ROBLOXSTUDIO 0x00a9555f
extern "C" __declspec(naked) void adjustorThunk_00a9555f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a9555f }
}

extern "C" void thunkTarget_00a95598();
// FUNCTION: ROBLOXSTUDIO 0x00a95598
extern "C" __declspec(naked) void adjustorThunk_00a95598()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a95598 }
}

extern "C" void thunkTarget_00a955a8();
// FUNCTION: ROBLOXSTUDIO 0x00a955a8
extern "C" __declspec(naked) void adjustorThunk_00a955a8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a955a8 }
}

extern "C" void thunkTarget_00a955e1();
// FUNCTION: ROBLOXSTUDIO 0x00a955e1
extern "C" __declspec(naked) void adjustorThunk_00a955e1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a955e1 }
}

extern "C" void thunkTarget_00a95607();
// FUNCTION: ROBLOXSTUDIO 0x00a95607
extern "C" __declspec(naked) void adjustorThunk_00a95607()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a95607 }
}

extern "C" void thunkTarget_00a9562d();
// FUNCTION: ROBLOXSTUDIO 0x00a9562d
extern "C" __declspec(naked) void adjustorThunk_00a9562d()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a9562d }
}

extern "C" void thunkTarget_00a9b484();
// FUNCTION: ROBLOXSTUDIO 0x00a9b484
extern "C" __declspec(naked) void adjustorThunk_00a9b484()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a9b484 }
}

extern "C" void thunkTarget_00a9b494();
// FUNCTION: ROBLOXSTUDIO 0x00a9b494
extern "C" __declspec(naked) void adjustorThunk_00a9b494()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a9b494 }
}

extern "C" void thunkTarget_00a9f834();
// FUNCTION: ROBLOXSTUDIO 0x00a9f834
extern "C" __declspec(naked) void adjustorThunk_00a9f834()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a9f834 }
}

extern "C" void thunkTarget_00a9f844();
// FUNCTION: ROBLOXSTUDIO 0x00a9f844
extern "C" __declspec(naked) void adjustorThunk_00a9f844()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00a9f844 }
}

extern "C" void thunkTarget_00aa1f46();
// FUNCTION: ROBLOXSTUDIO 0x00aa1f46
extern "C" __declspec(naked) void adjustorThunk_00aa1f46()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aa1f46 }
}

extern "C" void thunkTarget_00aa2bce();
// FUNCTION: ROBLOXSTUDIO 0x00aa2bce
extern "C" __declspec(naked) void adjustorThunk_00aa2bce()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aa2bce }
}

extern "C" void thunkTarget_00aa2bf1();
// FUNCTION: ROBLOXSTUDIO 0x00aa2bf1
extern "C" __declspec(naked) void adjustorThunk_00aa2bf1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aa2bf1 }
}

extern "C" void thunkTarget_00aa2c0c();
// FUNCTION: ROBLOXSTUDIO 0x00aa2c0c
extern "C" __declspec(naked) void adjustorThunk_00aa2c0c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aa2c0c }
}

extern "C" void thunkTarget_00aa2ec8();
// FUNCTION: ROBLOXSTUDIO 0x00aa2ec8
extern "C" __declspec(naked) void adjustorThunk_00aa2ec8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aa2ec8 }
}

extern "C" void thunkTarget_00aa5f3a();
// FUNCTION: ROBLOXSTUDIO 0x00aa5f3a
extern "C" __declspec(naked) void adjustorThunk_00aa5f3a()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aa5f3a }
}

extern "C" void thunkTarget_00aa5f7b();
// FUNCTION: ROBLOXSTUDIO 0x00aa5f7b
extern "C" __declspec(naked) void adjustorThunk_00aa5f7b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aa5f7b }
}

extern "C" void thunkTarget_00aaaac8();
// FUNCTION: ROBLOXSTUDIO 0x00aaaac8
extern "C" __declspec(naked) void adjustorThunk_00aaaac8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aaaac8 }
}

extern "C" void thunkTarget_00aaaae0();
// FUNCTION: ROBLOXSTUDIO 0x00aaaae0
extern "C" __declspec(naked) void adjustorThunk_00aaaae0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aaaae0 }
}

extern "C" void thunkTarget_00aac4ce();
// FUNCTION: ROBLOXSTUDIO 0x00aac4ce
extern "C" __declspec(naked) void adjustorThunk_00aac4ce()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aac4ce }
}

extern "C" void thunkTarget_00aac4f1();
// FUNCTION: ROBLOXSTUDIO 0x00aac4f1
extern "C" __declspec(naked) void adjustorThunk_00aac4f1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aac4f1 }
}

extern "C" void thunkTarget_00aac50c();
// FUNCTION: ROBLOXSTUDIO 0x00aac50c
extern "C" __declspec(naked) void adjustorThunk_00aac50c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aac50c }
}

extern "C" void thunkTarget_00aad5e0();
// FUNCTION: ROBLOXSTUDIO 0x00aad5e0
extern "C" __declspec(naked) void adjustorThunk_00aad5e0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aad5e0 }
}

extern "C" void thunkTarget_00aade72();
// FUNCTION: ROBLOXSTUDIO 0x00aade72
extern "C" __declspec(naked) void adjustorThunk_00aade72()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aade72 }
}

extern "C" void thunkTarget_00aade82();
// FUNCTION: ROBLOXSTUDIO 0x00aade82
extern "C" __declspec(naked) void adjustorThunk_00aade82()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aade82 }
}

extern "C" void thunkTarget_00aaee21();
// FUNCTION: ROBLOXSTUDIO 0x00aaee21
extern "C" __declspec(naked) void adjustorThunk_00aaee21()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aaee21 }
}

extern "C" void thunkTarget_00aaee31();
// FUNCTION: ROBLOXSTUDIO 0x00aaee31
extern "C" __declspec(naked) void adjustorThunk_00aaee31()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aaee31 }
}

extern "C" void thunkTarget_00aaf683();
// FUNCTION: ROBLOXSTUDIO 0x00aaf683
extern "C" __declspec(naked) void adjustorThunk_00aaf683()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aaf683 }
}

extern "C" void thunkTarget_00aaf69b();
// FUNCTION: ROBLOXSTUDIO 0x00aaf69b
extern "C" __declspec(naked) void adjustorThunk_00aaf69b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aaf69b }
}

extern "C" void thunkTarget_00aba2ff();
// FUNCTION: ROBLOXSTUDIO 0x00aba2ff
extern "C" __declspec(naked) void adjustorThunk_00aba2ff()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aba2ff }
}

extern "C" void thunkTarget_00aba30f();
// FUNCTION: ROBLOXSTUDIO 0x00aba30f
extern "C" __declspec(naked) void adjustorThunk_00aba30f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aba30f }
}

extern "C" void thunkTarget_00ac7fba();
// FUNCTION: ROBLOXSTUDIO 0x00ac7fba
extern "C" __declspec(naked) void adjustorThunk_00ac7fba()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ac7fba }
}

extern "C" void thunkTarget_00ac7fca();
// FUNCTION: ROBLOXSTUDIO 0x00ac7fca
extern "C" __declspec(naked) void adjustorThunk_00ac7fca()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ac7fca }
}

extern "C" void thunkTarget_00ac7fe5();
// FUNCTION: ROBLOXSTUDIO 0x00ac7fe5
extern "C" __declspec(naked) void adjustorThunk_00ac7fe5()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ac7fe5 }
}

extern "C" void thunkTarget_00ac9700();
// FUNCTION: ROBLOXSTUDIO 0x00ac9700
extern "C" __declspec(naked) void adjustorThunk_00ac9700()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ac9700 }
}

extern "C" void thunkTarget_00ac9710();
// FUNCTION: ROBLOXSTUDIO 0x00ac9710
extern "C" __declspec(naked) void adjustorThunk_00ac9710()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ac9710 }
}

extern "C" void thunkTarget_00ac9720();
// FUNCTION: ROBLOXSTUDIO 0x00ac9720
extern "C" __declspec(naked) void adjustorThunk_00ac9720()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ac9720 }
}

extern "C" void thunkTarget_00acab60();
// FUNCTION: ROBLOXSTUDIO 0x00acab60
extern "C" __declspec(naked) void adjustorThunk_00acab60()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00acab60 }
}

extern "C" void thunkTarget_00acab70();
// FUNCTION: ROBLOXSTUDIO 0x00acab70
extern "C" __declspec(naked) void adjustorThunk_00acab70()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00acab70 }
}

extern "C" void thunkTarget_00acbf60();
// FUNCTION: ROBLOXSTUDIO 0x00acbf60
extern "C" __declspec(naked) void adjustorThunk_00acbf60()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00acbf60 }
}

extern "C" void thunkTarget_00acbf70();
// FUNCTION: ROBLOXSTUDIO 0x00acbf70
extern "C" __declspec(naked) void adjustorThunk_00acbf70()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00acbf70 }
}

extern "C" void thunkTarget_00acd498();
// FUNCTION: ROBLOXSTUDIO 0x00acd498
extern "C" __declspec(naked) void adjustorThunk_00acd498()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00acd498 }
}

extern "C" void thunkTarget_00acd4a8();
// FUNCTION: ROBLOXSTUDIO 0x00acd4a8
extern "C" __declspec(naked) void adjustorThunk_00acd4a8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00acd4a8 }
}

extern "C" void thunkTarget_00ad1235();
// FUNCTION: ROBLOXSTUDIO 0x00ad1235
extern "C" __declspec(naked) void adjustorThunk_00ad1235()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ad1235 }
}

extern "C" void thunkTarget_00ad1245();
// FUNCTION: ROBLOXSTUDIO 0x00ad1245
extern "C" __declspec(naked) void adjustorThunk_00ad1245()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ad1245 }
}

extern "C" void thunkTarget_00ad8157();
// FUNCTION: ROBLOXSTUDIO 0x00ad8157
extern "C" __declspec(naked) void adjustorThunk_00ad8157()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ad8157 }
}

extern "C" void thunkTarget_00ad8167();
// FUNCTION: ROBLOXSTUDIO 0x00ad8167
extern "C" __declspec(naked) void adjustorThunk_00ad8167()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ad8167 }
}

extern "C" void thunkTarget_00ad9b53();
// FUNCTION: ROBLOXSTUDIO 0x00ad9b53
extern "C" __declspec(naked) void adjustorThunk_00ad9b53()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ad9b53 }
}

extern "C" void thunkTarget_00ad9b63();
// FUNCTION: ROBLOXSTUDIO 0x00ad9b63
extern "C" __declspec(naked) void adjustorThunk_00ad9b63()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ad9b63 }
}

extern "C" void thunkTarget_00adf4a8();
// FUNCTION: ROBLOXSTUDIO 0x00adf4a8
extern "C" __declspec(naked) void adjustorThunk_00adf4a8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00adf4a8 }
}

extern "C" void thunkTarget_00ae4191();
// FUNCTION: ROBLOXSTUDIO 0x00ae4191
extern "C" __declspec(naked) void adjustorThunk_00ae4191()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ae4191 }
}

extern "C" void thunkTarget_00ae41a1();
// FUNCTION: ROBLOXSTUDIO 0x00ae41a1
extern "C" __declspec(naked) void adjustorThunk_00ae41a1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ae41a1 }
}

extern "C" void thunkTarget_00ae9abe();
// FUNCTION: ROBLOXSTUDIO 0x00ae9abe
extern "C" __declspec(naked) void adjustorThunk_00ae9abe()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ae9abe }
}

extern "C" void thunkTarget_00ae9ace();
// FUNCTION: ROBLOXSTUDIO 0x00ae9ace
extern "C" __declspec(naked) void adjustorThunk_00ae9ace()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ae9ace }
}

extern "C" void thunkTarget_00aed881();
// FUNCTION: ROBLOXSTUDIO 0x00aed881
extern "C" __declspec(naked) void adjustorThunk_00aed881()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00aed881 }
}

extern "C" void thunkTarget_00af2342();
// FUNCTION: ROBLOXSTUDIO 0x00af2342
extern "C" __declspec(naked) void adjustorThunk_00af2342()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00af2342 }
}

extern "C" void thunkTarget_00af376c();
// FUNCTION: ROBLOXSTUDIO 0x00af376c
extern "C" __declspec(naked) void adjustorThunk_00af376c()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00af376c }
}

extern "C" void thunkTarget_00afa901();
// FUNCTION: ROBLOXSTUDIO 0x00afa901
extern "C" __declspec(naked) void adjustorThunk_00afa901()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00afa901 }
}

extern "C" void thunkTarget_00b03599();
// FUNCTION: ROBLOXSTUDIO 0x00b03599
extern "C" __declspec(naked) void adjustorThunk_00b03599()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b03599 }
}

extern "C" void thunkTarget_00b0ae1f();
// FUNCTION: ROBLOXSTUDIO 0x00b0ae1f
extern "C" __declspec(naked) void adjustorThunk_00b0ae1f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b0ae1f }
}

extern "C" void thunkTarget_00b0da43();
// FUNCTION: ROBLOXSTUDIO 0x00b0da43
extern "C" __declspec(naked) void adjustorThunk_00b0da43()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b0da43 }
}

extern "C" void thunkTarget_00b0fb6f();
// FUNCTION: ROBLOXSTUDIO 0x00b0fb6f
extern "C" __declspec(naked) void adjustorThunk_00b0fb6f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b0fb6f }
}

extern "C" void thunkTarget_00b10869();
// FUNCTION: ROBLOXSTUDIO 0x00b10869
extern "C" __declspec(naked) void adjustorThunk_00b10869()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b10869 }
}

extern "C" void thunkTarget_00b14074();
// FUNCTION: ROBLOXSTUDIO 0x00b14074
extern "C" __declspec(naked) void adjustorThunk_00b14074()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b14074 }
}

extern "C" void thunkTarget_00b15577();
// FUNCTION: ROBLOXSTUDIO 0x00b15577
extern "C" __declspec(naked) void adjustorThunk_00b15577()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b15577 }
}

extern "C" void thunkTarget_00b16123();
// FUNCTION: ROBLOXSTUDIO 0x00b16123
extern "C" __declspec(naked) void adjustorThunk_00b16123()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b16123 }
}

extern "C" void thunkTarget_00b16133();
// FUNCTION: ROBLOXSTUDIO 0x00b16133
extern "C" __declspec(naked) void adjustorThunk_00b16133()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b16133 }
}

extern "C" void thunkTarget_00b17914();
// FUNCTION: ROBLOXSTUDIO 0x00b17914
extern "C" __declspec(naked) void adjustorThunk_00b17914()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b17914 }
}

extern "C" void thunkTarget_00b1a90d();
// FUNCTION: ROBLOXSTUDIO 0x00b1a90d
extern "C" __declspec(naked) void adjustorThunk_00b1a90d()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b1a90d }
}

extern "C" void thunkTarget_00b1a91d();
// FUNCTION: ROBLOXSTUDIO 0x00b1a91d
extern "C" __declspec(naked) void adjustorThunk_00b1a91d()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b1a91d }
}

extern "C" void thunkTarget_00b1acff();
// FUNCTION: ROBLOXSTUDIO 0x00b1acff
extern "C" __declspec(naked) void adjustorThunk_00b1acff()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b1acff }
}

extern "C" void thunkTarget_00b1b948();
// FUNCTION: ROBLOXSTUDIO 0x00b1b948
extern "C" __declspec(naked) void adjustorThunk_00b1b948()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b1b948 }
}

extern "C" void thunkTarget_00b1c2c6();
// FUNCTION: ROBLOXSTUDIO 0x00b1c2c6
extern "C" __declspec(naked) void adjustorThunk_00b1c2c6()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b1c2c6 }
}

extern "C" void thunkTarget_00b1d77e();
// FUNCTION: ROBLOXSTUDIO 0x00b1d77e
extern "C" __declspec(naked) void adjustorThunk_00b1d77e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b1d77e }
}

extern "C" void thunkTarget_00b20a0d();
// FUNCTION: ROBLOXSTUDIO 0x00b20a0d
extern "C" __declspec(naked) void adjustorThunk_00b20a0d()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b20a0d }
}

extern "C" void thunkTarget_00b25d48();
// FUNCTION: ROBLOXSTUDIO 0x00b25d48
extern "C" __declspec(naked) void adjustorThunk_00b25d48()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b25d48 }
}

extern "C" void thunkTarget_00b2948b();
// FUNCTION: ROBLOXSTUDIO 0x00b2948b
extern "C" __declspec(naked) void adjustorThunk_00b2948b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b2948b }
}

extern "C" void thunkTarget_00b2ea25();
// FUNCTION: ROBLOXSTUDIO 0x00b2ea25
extern "C" __declspec(naked) void adjustorThunk_00b2ea25()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b2ea25 }
}

extern "C" void thunkTarget_00b36a91();
// FUNCTION: ROBLOXSTUDIO 0x00b36a91
extern "C" __declspec(naked) void adjustorThunk_00b36a91()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b36a91 }
}

extern "C" void thunkTarget_00b47f9f();
// FUNCTION: ROBLOXSTUDIO 0x00b47f9f
extern "C" __declspec(naked) void adjustorThunk_00b47f9f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b47f9f }
}

extern "C" void thunkTarget_00b8d242();
// FUNCTION: ROBLOXSTUDIO 0x00b8d242
extern "C" __declspec(naked) void adjustorThunk_00b8d242()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b8d242 }
}

extern "C" void thunkTarget_00b8e1e2();
// FUNCTION: ROBLOXSTUDIO 0x00b8e1e2
extern "C" __declspec(naked) void adjustorThunk_00b8e1e2()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b8e1e2 }
}

extern "C" void thunkTarget_00b8f636();
// FUNCTION: ROBLOXSTUDIO 0x00b8f636
extern "C" __declspec(naked) void adjustorThunk_00b8f636()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b8f636 }
}

extern "C" void thunkTarget_00b8fd46();
// FUNCTION: ROBLOXSTUDIO 0x00b8fd46
extern "C" __declspec(naked) void adjustorThunk_00b8fd46()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b8fd46 }
}

extern "C" void thunkTarget_00b920e5();
// FUNCTION: ROBLOXSTUDIO 0x00b920e5
extern "C" __declspec(naked) void adjustorThunk_00b920e5()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b920e5 }
}

extern "C" void thunkTarget_00b927f1();
// FUNCTION: ROBLOXSTUDIO 0x00b927f1
extern "C" __declspec(naked) void adjustorThunk_00b927f1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b927f1 }
}

extern "C" void thunkTarget_00b971e0();
// FUNCTION: ROBLOXSTUDIO 0x00b971e0
extern "C" __declspec(naked) void adjustorThunk_00b971e0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b971e0 }
}

extern "C" void thunkTarget_00b971e8();
// FUNCTION: ROBLOXSTUDIO 0x00b971e8
extern "C" __declspec(naked) void adjustorThunk_00b971e8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b971e8 }
}

extern "C" void thunkTarget_00b971f0();
// FUNCTION: ROBLOXSTUDIO 0x00b971f0
extern "C" __declspec(naked) void adjustorThunk_00b971f0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b971f0 }
}

extern "C" void thunkTarget_00b971f8();
// FUNCTION: ROBLOXSTUDIO 0x00b971f8
extern "C" __declspec(naked) void adjustorThunk_00b971f8()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b971f8 }
}

extern "C" void thunkTarget_00b97200();
// FUNCTION: ROBLOXSTUDIO 0x00b97200
extern "C" __declspec(naked) void adjustorThunk_00b97200()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b97200 }
}

extern "C" void thunkTarget_00b9d130();
// FUNCTION: ROBLOXSTUDIO 0x00b9d130
extern "C" __declspec(naked) void adjustorThunk_00b9d130()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00b9d130 }
}

extern "C" void thunkTarget_00ba18ed();
// FUNCTION: ROBLOXSTUDIO 0x00ba18ed
extern "C" __declspec(naked) void adjustorThunk_00ba18ed()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ba18ed }
}

extern "C" void thunkTarget_00bdc622();
// FUNCTION: ROBLOXSTUDIO 0x00bdc622
extern "C" __declspec(naked) void adjustorThunk_00bdc622()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00bdc622 }
}

extern "C" void thunkTarget_00bdd01b();
// FUNCTION: ROBLOXSTUDIO 0x00bdd01b
extern "C" __declspec(naked) void adjustorThunk_00bdd01b()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00bdd01b }
}

extern "C" void thunkTarget_00be5a4a();
// FUNCTION: ROBLOXSTUDIO 0x00be5a4a
extern "C" __declspec(naked) void adjustorThunk_00be5a4a()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00be5a4a }
}

extern "C" void thunkTarget_00bf8c11();
// FUNCTION: ROBLOXSTUDIO 0x00bf8c11
extern "C" __declspec(naked) void adjustorThunk_00bf8c11()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00bf8c11 }
}

extern "C" void thunkTarget_00bfd9b6();
// FUNCTION: ROBLOXSTUDIO 0x00bfd9b6
extern "C" __declspec(naked) void adjustorThunk_00bfd9b6()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00bfd9b6 }
}

extern "C" void thunkTarget_00c04db7();
// FUNCTION: ROBLOXSTUDIO 0x00c04db7
extern "C" __declspec(naked) void adjustorThunk_00c04db7()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c04db7 }
}

extern "C" void thunkTarget_00c052f5();
// FUNCTION: ROBLOXSTUDIO 0x00c052f5
extern "C" __declspec(naked) void adjustorThunk_00c052f5()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c052f5 }
}

extern "C" void thunkTarget_00c05907();
// FUNCTION: ROBLOXSTUDIO 0x00c05907
extern "C" __declspec(naked) void adjustorThunk_00c05907()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c05907 }
}

extern "C" void thunkTarget_00c05ea5();
// FUNCTION: ROBLOXSTUDIO 0x00c05ea5
extern "C" __declspec(naked) void adjustorThunk_00c05ea5()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c05ea5 }
}

extern "C" void thunkTarget_00c0ed25();
// FUNCTION: ROBLOXSTUDIO 0x00c0ed25
extern "C" __declspec(naked) void adjustorThunk_00c0ed25()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c0ed25 }
}

extern "C" void thunkTarget_00c0f315();
// FUNCTION: ROBLOXSTUDIO 0x00c0f315
extern "C" __declspec(naked) void adjustorThunk_00c0f315()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c0f315 }
}

extern "C" void thunkTarget_00c0f31d();
// FUNCTION: ROBLOXSTUDIO 0x00c0f31d
extern "C" __declspec(naked) void adjustorThunk_00c0f31d()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c0f31d }
}

extern "C" void thunkTarget_00c1c2dd();
// FUNCTION: ROBLOXSTUDIO 0x00c1c2dd
extern "C" __declspec(naked) void adjustorThunk_00c1c2dd()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c1c2dd }
}

extern "C" void thunkTarget_00c29eb1();
// FUNCTION: ROBLOXSTUDIO 0x00c29eb1
extern "C" __declspec(naked) void adjustorThunk_00c29eb1()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c29eb1 }
}

extern "C" void thunkTarget_00c43d7e();
// FUNCTION: ROBLOXSTUDIO 0x00c43d7e
extern "C" __declspec(naked) void adjustorThunk_00c43d7e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c43d7e }
}

extern "C" void thunkTarget_00c43d8e();
// FUNCTION: ROBLOXSTUDIO 0x00c43d8e
extern "C" __declspec(naked) void adjustorThunk_00c43d8e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c43d8e }
}

extern "C" void thunkTarget_00c570bc();
// FUNCTION: ROBLOXSTUDIO 0x00c570bc
extern "C" __declspec(naked) void adjustorThunk_00c570bc()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c570bc }
}

extern "C" void thunkTarget_00c570cc();
// FUNCTION: ROBLOXSTUDIO 0x00c570cc
extern "C" __declspec(naked) void adjustorThunk_00c570cc()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c570cc }
}

extern "C" void thunkTarget_00c570dc();
// FUNCTION: ROBLOXSTUDIO 0x00c570dc
extern "C" __declspec(naked) void adjustorThunk_00c570dc()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c570dc }
}

extern "C" void thunkTarget_00c5aab4();
// FUNCTION: ROBLOXSTUDIO 0x00c5aab4
extern "C" __declspec(naked) void adjustorThunk_00c5aab4()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c5aab4 }
}

extern "C" void thunkTarget_00c5aac4();
// FUNCTION: ROBLOXSTUDIO 0x00c5aac4
extern "C" __declspec(naked) void adjustorThunk_00c5aac4()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c5aac4 }
}

extern "C" void thunkTarget_00c7073a();
// FUNCTION: ROBLOXSTUDIO 0x00c7073a
extern "C" __declspec(naked) void adjustorThunk_00c7073a()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c7073a }
}

extern "C" void thunkTarget_00c93cb5();
// FUNCTION: ROBLOXSTUDIO 0x00c93cb5
extern "C" __declspec(naked) void adjustorThunk_00c93cb5()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c93cb5 }
}

extern "C" void thunkTarget_00c95965();
// FUNCTION: ROBLOXSTUDIO 0x00c95965
extern "C" __declspec(naked) void adjustorThunk_00c95965()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c95965 }
}

extern "C" void thunkTarget_00c9597d();
// FUNCTION: ROBLOXSTUDIO 0x00c9597d
extern "C" __declspec(naked) void adjustorThunk_00c9597d()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c9597d }
}

extern "C" void thunkTarget_00c9bc78();
// FUNCTION: ROBLOXSTUDIO 0x00c9bc78
extern "C" __declspec(naked) void adjustorThunk_00c9bc78()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c9bc78 }
}

extern "C" void thunkTarget_00c9bcb0();
// FUNCTION: ROBLOXSTUDIO 0x00c9bcb0
extern "C" __declspec(naked) void adjustorThunk_00c9bcb0()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c9bcb0 }
}

extern "C" void thunkTarget_00c9f367();
// FUNCTION: ROBLOXSTUDIO 0x00c9f367
extern "C" __declspec(naked) void adjustorThunk_00c9f367()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c9f367 }
}

extern "C" void thunkTarget_00c9f377();
// FUNCTION: ROBLOXSTUDIO 0x00c9f377
extern "C" __declspec(naked) void adjustorThunk_00c9f377()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00c9f377 }
}

extern "C" void thunkTarget_00ca3c15();
// FUNCTION: ROBLOXSTUDIO 0x00ca3c15
extern "C" __declspec(naked) void adjustorThunk_00ca3c15()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ca3c15 }
}

extern "C" void thunkTarget_00ca3c33();
// FUNCTION: ROBLOXSTUDIO 0x00ca3c33
extern "C" __declspec(naked) void adjustorThunk_00ca3c33()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ca3c33 }
}

extern "C" void thunkTarget_00cb1e8e();
// FUNCTION: ROBLOXSTUDIO 0x00cb1e8e
extern "C" __declspec(naked) void adjustorThunk_00cb1e8e()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00cb1e8e }
}

extern "C" void thunkTarget_00cb1ea9();
// FUNCTION: ROBLOXSTUDIO 0x00cb1ea9
extern "C" __declspec(naked) void adjustorThunk_00cb1ea9()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00cb1ea9 }
}

extern "C" void thunkTarget_00cbacc4();
// FUNCTION: ROBLOXSTUDIO 0x00cbacc4
extern "C" __declspec(naked) void adjustorThunk_00cbacc4()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00cbacc4 }
}

extern "C" void thunkTarget_00ccbb6f();
// FUNCTION: ROBLOXSTUDIO 0x00ccbb6f
extern "C" __declspec(naked) void adjustorThunk_00ccbb6f()
{
	__asm { sub ecx, 0x1c }
	__asm { jmp thunkTarget_00ccbb6f }
}

extern "C" void thunkTarget_007851cc();
// FUNCTION: ROBLOXSTUDIO 0x007851cc
extern "C" __declspec(naked) void adjustorThunk_007851cc()
{
	__asm { sub ecx, 0x28 }
	__asm { jmp thunkTarget_007851cc }
}

extern "C" void thunkTarget_007851fa();
// FUNCTION: ROBLOXSTUDIO 0x007851fa
extern "C" __declspec(naked) void adjustorThunk_007851fa()
{
	__asm { sub ecx, 0x28 }
	__asm { jmp thunkTarget_007851fa }
}

extern "C" void thunkTarget_0040e7ec();
// FUNCTION: ROBLOXSTUDIO 0x0040e7ec
extern "C" __declspec(naked) void adjustorThunk_0040e7ec()
{
	__asm { sub ecx, 0x2c }
	__asm { jmp thunkTarget_0040e7ec }
}

extern "C" void thunkTarget_0040eaa2();
// FUNCTION: ROBLOXSTUDIO 0x0040eaa2
extern "C" __declspec(naked) void adjustorThunk_0040eaa2()
{
	__asm { sub ecx, 0x2c }
	__asm { jmp thunkTarget_0040eaa2 }
}

extern "C" void thunkTarget_0040f14c();
// FUNCTION: ROBLOXSTUDIO 0x0040f14c
extern "C" __declspec(naked) void adjustorThunk_0040f14c()
{
	__asm { sub ecx, 0x2c }
	__asm { jmp thunkTarget_0040f14c }
}

extern "C" void thunkTarget_0040f402();
// FUNCTION: ROBLOXSTUDIO 0x0040f402
extern "C" __declspec(naked) void adjustorThunk_0040f402()
{
	__asm { sub ecx, 0x2c }
	__asm { jmp thunkTarget_0040f402 }
}

extern "C" void thunkTarget_00c7e5de();
// FUNCTION: ROBLOXSTUDIO 0x00c7e5de
extern "C" __declspec(naked) void adjustorThunk_00c7e5de()
{
	__asm { sub ecx, 0x38 }
	__asm { jmp thunkTarget_00c7e5de }
}

extern "C" void thunkTarget_00c7e5e6();
// FUNCTION: ROBLOXSTUDIO 0x00c7e5e6
extern "C" __declspec(naked) void adjustorThunk_00c7e5e6()
{
	__asm { sub ecx, 0x38 }
	__asm { jmp thunkTarget_00c7e5e6 }
}

extern "C" void thunkTarget_007851df();
// FUNCTION: ROBLOXSTUDIO 0x007851df
extern "C" __declspec(naked) void adjustorThunk_007851df()
{
	__asm { sub ecx, 0x40 }
	__asm { jmp thunkTarget_007851df }
}

extern "C" void thunkTarget_00785202();
// FUNCTION: ROBLOXSTUDIO 0x00785202
extern "C" __declspec(naked) void adjustorThunk_00785202()
{
	__asm { sub ecx, 0x40 }
	__asm { jmp thunkTarget_00785202 }
}

extern "C" void thunkTarget_0042bc11();
// FUNCTION: ROBLOXSTUDIO 0x0042bc11
extern "C" __declspec(naked) void adjustorThunk_0042bc11()
{
	__asm { sub ecx, 0x48 }
	__asm { jmp thunkTarget_0042bc11 }
}

extern "C" void thunkTarget_006b3680();
// FUNCTION: ROBLOXSTUDIO 0x006b3680
extern "C" __declspec(naked) void adjustorThunk_006b3680()
{
	__asm { sub ecx, 0x48 }
	__asm { jmp thunkTarget_006b3680 }
}

extern "C" void thunkTarget_00c9bc88();
// FUNCTION: ROBLOXSTUDIO 0x00c9bc88
extern "C" __declspec(naked) void adjustorThunk_00c9bc88()
{
	__asm { sub ecx, 0x4c }
	__asm { jmp thunkTarget_00c9bc88 }
}

extern "C" void thunkTarget_00c9bc98();
// FUNCTION: ROBLOXSTUDIO 0x00c9bc98
extern "C" __declspec(naked) void adjustorThunk_00c9bc98()
{
	__asm { sub ecx, 0x4c }
	__asm { jmp thunkTarget_00c9bc98 }
}

extern "C" void thunkTarget_00c9bc90();
// FUNCTION: ROBLOXSTUDIO 0x00c9bc90
extern "C" __declspec(naked) void adjustorThunk_00c9bc90()
{
	__asm { sub ecx, 0x50 }
	__asm { jmp thunkTarget_00c9bc90 }
}

extern "C" void thunkTarget_00c9bca0();
// FUNCTION: ROBLOXSTUDIO 0x00c9bca0
extern "C" __declspec(naked) void adjustorThunk_00c9bca0()
{
	__asm { sub ecx, 0x50 }
	__asm { jmp thunkTarget_00c9bca0 }
}

extern "C" void thunkTarget_007ba60c();
// FUNCTION: ROBLOXSTUDIO 0x007ba60c
extern "C" __declspec(naked) void adjustorThunk_007ba60c()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_007ba60c }
}

extern "C" void thunkTarget_00849c86();
// FUNCTION: ROBLOXSTUDIO 0x00849c86
extern "C" __declspec(naked) void adjustorThunk_00849c86()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00849c86 }
}

extern "C" void thunkTarget_008f5103();
// FUNCTION: ROBLOXSTUDIO 0x008f5103
extern "C" __declspec(naked) void adjustorThunk_008f5103()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_008f5103 }
}

extern "C" void thunkTarget_00939bdc();
// FUNCTION: ROBLOXSTUDIO 0x00939bdc
extern "C" __declspec(naked) void adjustorThunk_00939bdc()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00939bdc }
}

extern "C" void thunkTarget_009b4c7c();
// FUNCTION: ROBLOXSTUDIO 0x009b4c7c
extern "C" __declspec(naked) void adjustorThunk_009b4c7c()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009b4c7c }
}

extern "C" void thunkTarget_009b4ca4();
// FUNCTION: ROBLOXSTUDIO 0x009b4ca4
extern "C" __declspec(naked) void adjustorThunk_009b4ca4()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009b4ca4 }
}

extern "C" void thunkTarget_009b4cbc();
// FUNCTION: ROBLOXSTUDIO 0x009b4cbc
extern "C" __declspec(naked) void adjustorThunk_009b4cbc()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009b4cbc }
}

extern "C" void thunkTarget_009b4cd4();
// FUNCTION: ROBLOXSTUDIO 0x009b4cd4
extern "C" __declspec(naked) void adjustorThunk_009b4cd4()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009b4cd4 }
}

extern "C" void thunkTarget_009d3dab();
// FUNCTION: ROBLOXSTUDIO 0x009d3dab
extern "C" __declspec(naked) void adjustorThunk_009d3dab()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009d3dab }
}

extern "C" void thunkTarget_009f859b();
// FUNCTION: ROBLOXSTUDIO 0x009f859b
extern "C" __declspec(naked) void adjustorThunk_009f859b()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009f859b }
}

extern "C" void thunkTarget_009f85c3();
// FUNCTION: ROBLOXSTUDIO 0x009f85c3
extern "C" __declspec(naked) void adjustorThunk_009f85c3()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009f85c3 }
}

extern "C" void thunkTarget_009fbcf8();
// FUNCTION: ROBLOXSTUDIO 0x009fbcf8
extern "C" __declspec(naked) void adjustorThunk_009fbcf8()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009fbcf8 }
}

extern "C" void thunkTarget_009fbd10();
// FUNCTION: ROBLOXSTUDIO 0x009fbd10
extern "C" __declspec(naked) void adjustorThunk_009fbd10()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009fbd10 }
}

extern "C" void thunkTarget_009fbd30();
// FUNCTION: ROBLOXSTUDIO 0x009fbd30
extern "C" __declspec(naked) void adjustorThunk_009fbd30()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009fbd30 }
}

extern "C" void thunkTarget_009fbd38();
// FUNCTION: ROBLOXSTUDIO 0x009fbd38
extern "C" __declspec(naked) void adjustorThunk_009fbd38()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009fbd38 }
}

extern "C" void thunkTarget_009fbd58();
// FUNCTION: ROBLOXSTUDIO 0x009fbd58
extern "C" __declspec(naked) void adjustorThunk_009fbd58()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009fbd58 }
}

extern "C" void thunkTarget_009fbd68();
// FUNCTION: ROBLOXSTUDIO 0x009fbd68
extern "C" __declspec(naked) void adjustorThunk_009fbd68()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009fbd68 }
}

extern "C" void thunkTarget_009fbd80();
// FUNCTION: ROBLOXSTUDIO 0x009fbd80
extern "C" __declspec(naked) void adjustorThunk_009fbd80()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009fbd80 }
}

extern "C" void thunkTarget_009fcf97();
// FUNCTION: ROBLOXSTUDIO 0x009fcf97
extern "C" __declspec(naked) void adjustorThunk_009fcf97()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_009fcf97 }
}

extern "C" void thunkTarget_00a019e5();
// FUNCTION: ROBLOXSTUDIO 0x00a019e5
extern "C" __declspec(naked) void adjustorThunk_00a019e5()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a019e5 }
}

extern "C" void thunkTarget_00a019fd();
// FUNCTION: ROBLOXSTUDIO 0x00a019fd
extern "C" __declspec(naked) void adjustorThunk_00a019fd()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a019fd }
}

extern "C" void thunkTarget_00a0b047();
// FUNCTION: ROBLOXSTUDIO 0x00a0b047
extern "C" __declspec(naked) void adjustorThunk_00a0b047()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a0b047 }
}

extern "C" void thunkTarget_00a0ba17();
// FUNCTION: ROBLOXSTUDIO 0x00a0ba17
extern "C" __declspec(naked) void adjustorThunk_00a0ba17()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a0ba17 }
}

extern "C" void thunkTarget_00a0c3d7();
// FUNCTION: ROBLOXSTUDIO 0x00a0c3d7
extern "C" __declspec(naked) void adjustorThunk_00a0c3d7()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a0c3d7 }
}

extern "C" void thunkTarget_00a9030f();
// FUNCTION: ROBLOXSTUDIO 0x00a9030f
extern "C" __declspec(naked) void adjustorThunk_00a9030f()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a9030f }
}

extern "C" void thunkTarget_00a95479();
// FUNCTION: ROBLOXSTUDIO 0x00a95479
extern "C" __declspec(naked) void adjustorThunk_00a95479()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a95479 }
}

extern "C" void thunkTarget_00a9549c();
// FUNCTION: ROBLOXSTUDIO 0x00a9549c
extern "C" __declspec(naked) void adjustorThunk_00a9549c()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a9549c }
}

extern "C" void thunkTarget_00a954ca();
// FUNCTION: ROBLOXSTUDIO 0x00a954ca
extern "C" __declspec(naked) void adjustorThunk_00a954ca()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a954ca }
}

extern "C" void thunkTarget_00a954f0();
// FUNCTION: ROBLOXSTUDIO 0x00a954f0
extern "C" __declspec(naked) void adjustorThunk_00a954f0()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a954f0 }
}

extern "C" void thunkTarget_00a95513();
// FUNCTION: ROBLOXSTUDIO 0x00a95513
extern "C" __declspec(naked) void adjustorThunk_00a95513()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a95513 }
}

extern "C" void thunkTarget_00a95541();
// FUNCTION: ROBLOXSTUDIO 0x00a95541
extern "C" __declspec(naked) void adjustorThunk_00a95541()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a95541 }
}

extern "C" void thunkTarget_00a95572();
// FUNCTION: ROBLOXSTUDIO 0x00a95572
extern "C" __declspec(naked) void adjustorThunk_00a95572()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a95572 }
}

extern "C" void thunkTarget_00a955b0();
// FUNCTION: ROBLOXSTUDIO 0x00a955b0
extern "C" __declspec(naked) void adjustorThunk_00a955b0()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a955b0 }
}

extern "C" void thunkTarget_00a955e9();
// FUNCTION: ROBLOXSTUDIO 0x00a955e9
extern "C" __declspec(naked) void adjustorThunk_00a955e9()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a955e9 }
}

extern "C" void thunkTarget_00a95635();
// FUNCTION: ROBLOXSTUDIO 0x00a95635
extern "C" __declspec(naked) void adjustorThunk_00a95635()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00a95635 }
}

extern "C" void thunkTarget_00aaaad0();
// FUNCTION: ROBLOXSTUDIO 0x00aaaad0
extern "C" __declspec(naked) void adjustorThunk_00aaaad0()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00aaaad0 }
}

extern "C" void thunkTarget_00aaee39();
// FUNCTION: ROBLOXSTUDIO 0x00aaee39
extern "C" __declspec(naked) void adjustorThunk_00aaee39()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00aaee39 }
}

extern "C" void thunkTarget_00acd4b0();
// FUNCTION: ROBLOXSTUDIO 0x00acd4b0
extern "C" __declspec(naked) void adjustorThunk_00acd4b0()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00acd4b0 }
}

extern "C" void thunkTarget_00ad124d();
// FUNCTION: ROBLOXSTUDIO 0x00ad124d
extern "C" __declspec(naked) void adjustorThunk_00ad124d()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00ad124d }
}

extern "C" void thunkTarget_00b1b950();
// FUNCTION: ROBLOXSTUDIO 0x00b1b950
extern "C" __declspec(naked) void adjustorThunk_00b1b950()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00b1b950 }
}

extern "C" void thunkTarget_00c9596d();
// FUNCTION: ROBLOXSTUDIO 0x00c9596d
extern "C" __declspec(naked) void adjustorThunk_00c9596d()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00c9596d }
}

extern "C" void thunkTarget_00c95985();
// FUNCTION: ROBLOXSTUDIO 0x00c95985
extern "C" __declspec(naked) void adjustorThunk_00c95985()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00c95985 }
}

extern "C" void thunkTarget_00c9bc80();
// FUNCTION: ROBLOXSTUDIO 0x00c9bc80
extern "C" __declspec(naked) void adjustorThunk_00c9bc80()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00c9bc80 }
}

extern "C" void thunkTarget_00c9f36f();
// FUNCTION: ROBLOXSTUDIO 0x00c9f36f
extern "C" __declspec(naked) void adjustorThunk_00c9f36f()
{
	__asm { sub ecx, 0x64 }
	__asm { jmp thunkTarget_00c9f36f }
}

extern "C" void thunkTarget_008a73d6();
// FUNCTION: ROBLOXSTUDIO 0x008a73d6
extern "C" __declspec(naked) void adjustorThunk_008a73d6()
{
	__asm { sub ecx, 0x7c }
	__asm { jmp thunkTarget_008a73d6 }
}

extern "C" void thunkTarget_00a0cac3();
// FUNCTION: ROBLOXSTUDIO 0x00a0cac3
extern "C" __declspec(naked) void adjustorThunk_00a0cac3()
{
	__asm { sub ecx, 0x7c }
	__asm { jmp thunkTarget_00a0cac3 }
}
