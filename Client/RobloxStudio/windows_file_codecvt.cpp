#include "windows_file_codecvt.h"

#include "decomp.h"



// FUNCTION: ROBLOXSTUDIO 0x006b6fa0
void windows_file_codecvt::destroyInstance(windows_file_codecvt* p)
{
	if (p) {
		p->onDestroy();
		rbx_free_mem(p);
	}
}

void operator delete(void* ptr);

struct windows_file_codecvt_wstring_storage
{
	union
	{
		wchar_t buf[8];
		wchar_t* ptr;
	} bx;
	unsigned int size;
	unsigned int cap;
};

struct windows_file_codecvt_string_storage
{
	union
	{
		char buf[16];
		char* ptr;
	} bx;
	unsigned int size;
	unsigned int cap;
};

struct windows_file_codecvt_members
{
	windows_file_codecvt_wstring_storage s0; // +0x00
	windows_file_codecvt_wstring_storage s1; // +0x18
	windows_file_codecvt_string_storage  s2; // +0x30
};

// FUNCTION: ROBLOXSTUDIO 0x006b7230
void windows_file_codecvt::onDestroy()
{
	windows_file_codecvt_members* m = (windows_file_codecvt_members*)this;

	if (m->s2.cap >= 0x10)
	{
		::operator delete(m->s2.bx.ptr);
	}
	m->s2.cap = 0x0F;
	m->s2.size = 0;
	m->s2.bx.buf[0] = 0;

	if (m->s1.cap >= 8)
	{
		::operator delete(m->s1.bx.ptr);
	}
	m->s1.cap = 7;
	m->s1.size = 0;
	m->s1.bx.buf[0] = 0;

	if (m->s0.cap >= 8)
	{
		::operator delete(m->s0.bx.ptr);
	}
	m->s0.cap = 7;
	m->s0.size = 0;
	m->s0.bx.buf[0] = 0;
}

// AUTO-GENERATED IMPLEMENTATIONS


