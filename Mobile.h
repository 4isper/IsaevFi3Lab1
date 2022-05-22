#pragma once
#include "Phone.h"

class TMobile:public TPhone
{
public:
	double GetDiagDisplay();
	void SetDiagDisplay(double diagDisplay_);

	TMobile();
	TMobile(int volume_, int weight_, double diagDisplay_);
	TMobile(const TMobile& name);

protected:
	double diagDisplay;
};