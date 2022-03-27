#include "Stationary.h"

bool TStationary::GetDisplay()
{
  return display;
}

void TStationary::SetDisplay(bool display_)
{
  display = display_;
}

TStationary::TStationary():TPhone()
{
  display = true;
}

TStationary::TStationary(int volume_, int weight_, bool display_):TPhone()
{
  SetVolume(volume_);
  if (weight_ > 0) weight = weight_;
  SetDisplay(display_);
}

TStationary::TStationary(const TStationary& name)
{
  display = name.display;
}
