#include <iostream>
#include "Wireline.h"

double TWireline::GetLenghtLine()
{
    return lenghtLine;
}

void TWireline::SetLenghtLine(double lenghtLine_)
{
  lenghtLine = lenghtLine_;
}

void TWireline::info()
{
  std::cout << "Wired landline phone info:" << std::endl;
  std::cout << "Volume = " << volume << " %" << std::endl;
  std::cout << "Weight = " << weight << " gr" << std::endl;
  std::cout << "Display = " << std::boolalpha << display << std::endl;
  std::cout << "Lenght line = "  << lenghtLine << " m" << std::endl;
}

TWireline::TWireline():TStationary()
{
  lenghtLine = 1.2;
}

TWireline::TWireline(int volume_, int weight_, bool display_, double lenghtLine_):TStationary()
{
  SetVolume(volume_);
  if (weight_ > 0) weight = weight_;
  SetDisplay(display_);
  SetLenghtLine(lenghtLine_);
}

TWireline::TWireline(const TWireline& name)
{
  lenghtLine = name.lenghtLine;
}
