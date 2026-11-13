// Small helper whose body the 2014 build keeps out of line.

// FUNCTION: ROBLOXSTUDIO 0x00411990
bool field14Equals(const void* object, const void* value)
{
	return *(const void* const*)((const char*)object + 0x14) == value;
}
