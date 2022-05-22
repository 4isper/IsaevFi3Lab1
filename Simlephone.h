#pragma once

#include "Mobile.h"

class TSimplephone : public TMobile
{
public:
	bool GetButtonSOS();
	void SetButtonSOS(bool buttonSOS_);

	TSimplephone();
	TSimplephone(int volume_, int weight_, double diagDisplay_, bool buttonSOS_);
	TSimplephone(const TSimplephone& name);

protected:
	bool buttonSOS;
};