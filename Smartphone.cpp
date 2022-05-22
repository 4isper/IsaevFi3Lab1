#include <iostream>
#include "Smartphone.h"

bool TSmartphone::GetNFC()
{
    return nfc;
}

void TSmartphone::SetNFC(bool nfc_)
{
  nfc = nfc_;
}

void TSmartphone::info()
{
  std::cout << "Smartphone info:" << std::endl;
  std::cout << "Volume = " << volume << " %" << std::endl;
  std::cout << "Weight = " << weight << " gr" << std::endl;
  std::cout << "Display diagonal = " << diagDisplay << " inches" << std::endl;
  std::cout << "NFC = " << std::boolalpha << nfc << std::endl;
}

TSmartphone::TSmartphone():TMobile()
{
  nfc = true;
}

TSmartphone::TSmartphone(int volume_, int weight_, double diagDisplay_, bool nfc_):TMobile()
{
  SetVolume(volume_);
  if (weight_ > 0) weight = weight_;
  SetDiagDisplay(diagDisplay_);
  SetNFC(nfc_);
}

TSmartphone::TSmartphone(const TSmartphone& name)
{
  nfc = name.nfc;
}
