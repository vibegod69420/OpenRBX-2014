// FUNCTION: ROBLOXSTUDIO 0x006b89b0
// The binary keeps this class in an anonymous namespace, as <codecvt> does.
namespace {

class codecvt_error_cat
{
public:
	virtual const char* name() const;
};

const char* codecvt_error_cat::name() const
{
	return "codecvt";
}

} // anonymous namespace
