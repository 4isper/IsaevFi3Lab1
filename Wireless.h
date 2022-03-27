#pragma once

#include "Stationary.h"

class TWireless:public TStationary
{
public:
	double GetComRange();
	void SetComRange(double comRange_);

	TWireless();
	TWireless(int volume_, int weight_, bool display_, bool comRange_);
	TWireless(const TWireless& name);

protected:
	double comRange;
};