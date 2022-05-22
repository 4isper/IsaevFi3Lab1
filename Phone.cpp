#include "Phone.h"

int TPhone::GetVolume()
{
  return volume;
}

void TPhone::SetVolume(int v)
{
  if ((v >= 0) && (v <= 100))
    volume = v;
}

int TPhone::GetWeight()
{
  return weight;
}

void TPhone::info()
{
}

TPhone::TPhone()
{
  volume = 50;
  weight = 500;
}

TPhone::TPhone(int volume_, int weight_)
{
  SetVolume(volume_);
  if (weight_ > 0) weight = weight_;
}

TPhone::TPhone(const TPhone& name)
{
  volume = name.volume;
  weight = name.weight;
}
