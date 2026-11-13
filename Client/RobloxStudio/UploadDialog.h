#pragma once

struct UploadDialogPair
{
	int first;
	int second;
};

// The dialog returns a pair struct held at +0x30.
class UploadDialog
{
public:
	UploadDialogPair getPair() const;

private:
	char _pad[0x30];
	UploadDialogPair pair;
};
