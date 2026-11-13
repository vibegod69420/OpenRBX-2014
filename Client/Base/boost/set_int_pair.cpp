// Engine support code in this tree was built with frame-pointer omission, so the
// body addresses its arguments through esp instead of ebp.
// FLAGS: /nologo /c /O2 /Ob2 /Oi /Ot /Oy /GS /EHsc /GR /Gy /fp:precise /arch:SSE /Zc:wchar_t /Zc:forScope

// FUNCTION: ROBLOXSTUDIO 0x0072a2c0
void setIntPairIfNonNull(int* out, int first, int second)
{
	if (out)
	{
		out[0] = first;
		out[1] = second;
	}
}
