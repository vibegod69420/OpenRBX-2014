struct S5 { int a, b, c, d, e; };
// FUNCTION: ROBLOXSTUDIO 0x005ebef0
void copyLoop10(S5* first, S5* last, S5* out)
{
	while (first != last) {
		*out = *first;
		++first;
		++out;
	}
}

struct P2 { void* a; void* b; };
// FUNCTION: ROBLOXSTUDIO 0x00420cb0
P2* moveLoop10(P2* first, P2* last, P2* out)
{
	if (first == last)
		return out;
	do {
		if (out) {
			out->a = first->a;
			out->b = first->b;
			first->a = 0;
			first->b = 0;
		}
		++first;
		++out;
	} while (first != last);
	return out;
}
