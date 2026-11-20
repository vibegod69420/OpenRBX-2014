#ifndef CLIENT_APP_INCLUDE_SCRIPT_SCRIPTCONTEXT_H
#define CLIENT_APP_INCLUDE_SCRIPT_SCRIPTCONTEXT_H

#include "decomp.h"

namespace RBX {

// AUTO-GENERATED HELPERS

class ScriptContext
{
public:
	union
	{
		int _vtable_or_head;
		// AUTO-GENERATED FIELDS
	};

	void closeState();
	void close();
	void __cdecl reportError();
	void __cdecl reportError(void* /*unused*/);
	void __cdecl reportError(struct lua_State* /*unused*/);
	void __cdecl reportError(int /*unused*/);
	void __cdecl reportError(unsigned int /*unused*/);
	void __cdecl reportError(unsigned long /*unused*/);
	void __cdecl reportError(long /*unused*/);
	void __cdecl reportError(const void* /*unused*/);
	void __cdecl reportError(const char* /*unused*/);
	void __cdecl reportError(char* /*unused*/);
	void __cdecl reportError(unsigned char* /*unused*/);
	void __cdecl reportError(const unsigned char* /*unused*/);
	void __cdecl reportError(signed char* /*unused*/);
	void __cdecl reportError(const signed char* /*unused*/);
	void __cdecl reportError(unsigned short /*unused*/);
	void __cdecl reportError(short /*unused*/);
	int __cdecl reportError(bool /*unused*/);
	int __cdecl reportError(char /*unused*/);
	int __cdecl reportError(signed char /*unused*/);
	int __cdecl reportError(unsigned char /*unused*/);
	int __cdecl reportError(wchar_t /*unused*/);
	int __cdecl reportError(double /*unused*/);
	int __cdecl reportError(float /*unused*/);
	int __cdecl reportError(int* /*unused*/);
	int __cdecl reportError(unsigned int* /*unused*/);
	int __cdecl reportError(long* /*unused*/);
	int __cdecl reportError(unsigned long* /*unused*/);
	int __cdecl reportError(short* /*unused*/);
	int __cdecl reportError(unsigned short* /*unused*/);
	int __cdecl reportError(__int64* /*unused*/);
	int __cdecl reportError(unsigned __int64* /*unused*/);
	int __cdecl reportError(wchar_t* /*unused*/);
	int __cdecl reportError(float* /*unused*/);
	int __cdecl reportError(double* /*unused*/);
	int __cdecl reportError(const double* /*unused*/);
	int __cdecl reportError(const float* /*unused*/);
	int __cdecl reportError(const unsigned __int64* /*unused*/);
	void clearState();
	int __cdecl reportError(const __int64* /*unused*/);
	void __cdecl releaseSharedCount(void* ptr);
	// AUTO-GENERATED METHODS
};

} // namespace RBX

#endif // CLIENT_APP_INCLUDE_SCRIPT_SCRIPTCONTEXT_H
