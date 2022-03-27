#pragma once
//проводной 
#include "Stationary.h"

class TWireline : public TStationary
{
public:
	double GetLenghtLine();
	void SetLenghtLine(double lenghtLine_);
	void info();

	TWireline();
	TWireline(int volume_, int weight_, bool display_, double lenghtLine_);
	TWireline(const TWireline& name);
protected:
	double lenghtLine;
};
