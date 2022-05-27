/** @file Yellow.cpp*/

#include "Yellow.h"


void Yellow::Handle()
{
  cout << "LED YELLOW" << endl;
  myLED.redLED(0);
  myLED.amberLED(1);
  myLED.greenLED(0);
}

LightControl* Yellow::nextstate()
{
  LightControl *instance = new Red();
  return instance;
}