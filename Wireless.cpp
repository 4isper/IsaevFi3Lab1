#include "Wireless.h"

double TWireless::GetComRange()
{
    return comRange;
}

void TWireless::SetComRange(double comRange_)
{
  comRange = comRange_;
}

TWireless::TWireless():TStationary()
{
  comRange = 5.5;
}

TWireless::TWireless(int volume_, int weight_, bool display_, bool comRange_):TStationary()
{
  SetVolume(volume_);
  if (weight_ > 0) weight = weight_;
  SetDisplay(display_);
  SetComRange(comRange_);
}

TWireless::TWireless(const TWireless& name)
{
  comRange = name.comRange;
}
