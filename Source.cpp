#include <iostream>
#include <clocale>
#include <cstdlib>
#include "Phone.h"
#include "Mobile.h"
#include "Simlephone.h"
#include "Smartphone.h"
#include "Stationary.h"
#include "Wireless.h"
#include "Wireline.h"

using namespace std;

int main() {
  
  TPhone iphone15;
  iphone15.SetVolume(100);

  cout << iphone15.GetVolume() << endl;

  TPhone oneplus10(10, 3);
  TPhone nokia3310 = oneplus10;
  
  cout << nokia3310.GetVolume() << " " << nokia3310.GetWeight() << endl;
  cout << endl;

  TSmartphone iphoneX;
  TWireline PanasonicRD2808(100, 255, false, 2.25);

  TPhone* p1 = &iphoneX;
  TPhone* p2 = &PanasonicRD2808;
  p1->info();
  cout << endl;
  p2->info();

  cout << endl;
  TMobile samsung3;
  cout << samsung3.GetVolume() << " " << samsung3.GetWeight() << " " << samsung3.GetDiagDisplay() << endl;

  return 0;
}