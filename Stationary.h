#pragma once
#include "Phone.h"

class TStationary :public TPhone {
public:
  bool GetDisplay();
  void SetDisplay(bool display_);

  TStationary();
  TStationary(int volume_, int weight_, bool display_);
  TStationary(const TStationary& name);

protected:
  bool display;
};