// FLAGS: /nologo /c /O2 /Ob2 /Oi /Ot /Oy /GS /EHsc /GR /Gy /fp:precise /arch:SSE /Zc:wchar_t /Zc:forScope

extern "C" void targetCharacterMesh();
extern "C" void targetBody();

class CharacterMesh
{
public:
	void invoke(int) const;
};

class Body
{
public:
	void invoke(int) const;
};

// FUNCTION: ROBLOXSTUDIO 0x009fd3c0
void CharacterMesh::invoke(int) const
{
	targetCharacterMesh();
}

// FUNCTION: ROBLOXSTUDIO 0x00ba9880
void Body::invoke(int) const
{
	targetBody();
}
