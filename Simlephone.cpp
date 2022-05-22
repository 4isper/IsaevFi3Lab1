#include "Simlephone.h"

bool TSimplephone::GetButtonSOS()
{
    return buttonSOS;
}

void TSimplephone::SetButtonSOS(bool buttonSOS_)
{
  buttonSOS = buttonSOS_;
}

TSimplephone::TSimplephone():TMobile()
{
  buttonSOS = true;
}

TSimplephone::TSimplephone(int volume_, int weight_, double diagDisplay_, bool buttonSOS_):TMobile()
{
  SetVolume(volume_);
  if (weight_ > 0) weight = weight_;
  SetDiagDisplay(diagDisplay_);
  SetButtonSOS(buttonSOS_);
}

TSimplephone::TSimplephone(const TSimplephone& name)
{
  buttonSOS = name.buttonSOS;
}
