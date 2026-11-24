#include "v8datamodel/lock_error.h"

#include "decomp.h"

namespace boost {

struct lock_error_handler
{
	virtual void dispatch(int arg1, int arg2);
};

// FUNCTION: ROBLOXSTUDIO 0x0040fe40
void __cdecl lock_error::dispatch(int arg1, int arg2)
{
	if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x10) != 0)
	{
		reinterpret_cast<lock_error_handler*>(reinterpret_cast<char*>(this) + 8)->dispatch(arg1, arg2);
	}
}

struct lock_error_init
{
	void __thiscall ctor(int, char const*);
};

// FUNCTION: ROBLOXSTUDIO 0x0040f710
lock_error::lock_error()
{
	((lock_error_init*)this)->ctor(11, "boost::thread_resource_error");
	*(unsigned int*)this = 0x00E1826Cu;
}

struct lock_error_refcount
{
	void __thiscall increment(int);
};

void __cdecl lock_error_refcount_report(int, const char*);

// FUNCTION: ROBLOXSTUDIO 0x0040fbf0
void __cdecl lock_error::grab()
{
	lock_error* self = this;
	char* base;
	if (self)
		base = reinterpret_cast<char*>(self) - 5;
	else
		base = 0;

	lock_error_refcount* refCount = reinterpret_cast<lock_error_refcount*>(base - 8);
	refCount->increment(0);

	unsigned char check = *(unsigned char*)0x012DE657;
	if (check)
	{
		if (*(int*)refCount >= 0x7FFFFFF5)
		{
			typedef unsigned char (__cdecl *AssertFn)(const char*, const char*, int);
			AssertFn fn = *(AssertFn*)0x012DE694;
			if (fn)
			{
				if (fn((const char*)0x00F13920, (const char*)0x010027E0, 0xB0))
					return;
				check = *(unsigned char*)0x012DE657;
			}
			lock_error_refcount_report((int)(unsigned char)check, (const char*)0x00F13958);
		}
	}
}

// AUTO-GENERATED IMPLEMENTATIONS

} // namespace boost
