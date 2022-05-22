#pragma once

#include "Mobile.h"

class TSmartphone : public TMobile
{
public:
	bool GetNFC();
	void SetNFC(bool nfc_);
	void info();

	TSmartphone();
	TSmartphone(int volume_, int weight_, double diagDisplay_, bool nfc_);
	TSmartphone(const TSmartphone& name);

protected:
	bool nfc;
};