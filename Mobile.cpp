#include "Mobile.h"

double TMobile::GetDiagDisplay()
{
    return diagDisplay;
}

void TMobile::SetDiagDisplay(double diagDisplay_)
{
  diagDisplay = diagDisplay_;
}

TMobile::TMobile():TPhone()
{
  diagDisplay = 3.5;
}

TMobile::TMobile(int volume_, int weight_, double diagDisplay_):TPhone()
{
  SetVolume(volume_);
  if (weight_ > 0) weight = weight_;
  SetDiagDisplay(diagDisplay_);
}

TMobile::TMobile(const TMobile& name)
{
  diagDisplay = name.diagDisplay;
}
