#include "v8datamodel/concrete_parser.h"

#include "decomp.h"

namespace std {

// FUNCTION: ROBLOXSTUDIO 0x00786180
void* concrete_parser::clone() const
{
	void* mem = ::operator new(0x10);
	if (mem)
	{
		((int*)mem)[0] = 0x00E4FA9C;
		((int*)mem)[1] = ((const int*)this)[1];
		((int*)mem)[2] = ((const int*)this)[2];
		((int*)mem)[3] = ((const int*)this)[3];
		return mem;
	}
	return 0;
}

// FUNCTION: ROBLOXSTUDIO 0x00786d90
typedef void (__thiscall *ConcreteParserThiscallVoidInt)(void*, int);
typedef unsigned char (__thiscall *ConcreteParserThiscallUCharVoid)(void*);
typedef void (__thiscall *ConcreteParserThiscallVoidIntInt)(void*, int, int);

extern ConcreteParserThiscallVoidInt _concreteParser_fn_e10468;
extern ConcreteParserThiscallUCharVoid _concreteParser_fn_e1039c;
extern ConcreteParserThiscallVoidIntInt _concreteParser_fn_e10398;
extern ConcreteParserThiscallVoidInt _concreteParser_fn_e10454;
extern ConcreteParserThiscallUCharVoid _concreteParser_fn_e1044c;
extern ConcreteParserThiscallVoidInt _concreteParser_fn_e10464;
extern int _concreteParser_g_e10470;

void __cdecl concrete_parser::handle(int arg)
{
	_concreteParser_fn_e10468(this, arg);

	if (_concreteParser_fn_e1039c((void*)((char*)this + *(int*)((char*)*(void**)this + 4))))
	{
		_concreteParser_fn_e10398((void*)((char*)this + *(int*)((char*)*(void**)this + 4)), 0, 0);
		_concreteParser_fn_e10454((void*)((char*)this + *(int*)((char*)*(void**)this + 4)), 0x4000);
		_concreteParser_fn_e10468(this, arg);
	}

	if (!_concreteParser_fn_e1044c((void*)((char*)this + *(int*)((char*)*(void**)this + 4))))
	{
		_concreteParser_fn_e10464(this, _concreteParser_g_e10470);
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace std
