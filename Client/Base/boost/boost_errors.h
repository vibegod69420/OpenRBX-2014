#pragma once

namespace boost {

class bad_weak_ptr
{
public:
	virtual const char* what() const;
};

class bad_lexical_cast
{
public:
	virtual const char* what() const;
};

namespace io {

class format_error
{
public:
	virtual const char* what() const;
};

class bad_format_string : public format_error
{
public:
	const char* what() const;
};

class too_few_args : public format_error
{
public:
	const char* what() const;
};

class too_many_args : public format_error
{
public:
	const char* what() const;
};

} // namespace io
} // namespace boost
