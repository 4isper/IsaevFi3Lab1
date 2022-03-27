#pragma once
class TPhone
{
public:
	int GetVolume();
	void SetVolume(int v);
	int GetWeight();
	virtual void info();
	
	TPhone();
	TPhone(int volume_, int weight_);
	TPhone(const TPhone& name);


protected:
	int volume;
	int weight;
};
