#pragma once

// Minimal reconstruction of the MSVC 11 <system_error> category classes: only
// the name() override each vtable proves is declared.
namespace std {

class _Generic_error_category
{
public:
	virtual const char* name() const;
};

class _Iostream_error_category
{
public:
	virtual const char* name() const;
};

class _System_error_category
{
public:
	virtual const char* name() const;
};

} // namespace std
