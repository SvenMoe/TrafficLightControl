/** @file Amber.cpp*/

#include "Amber.h"


void Amber::Handle()
{
  cout << "LED AMBER" << endl;
  myLED.redLED(0);
  myLED.amberLED(1);
  myLED.greenLED(0);
}

inline LightControl* Amber::nextstate()
{
  LightControl *instance = new Red();
  return instance;
}