/** @file RedYellow.cpp*/

#include "RedYellow.h"


void RedYellow::Handle()
{
  cout << "LED REDYELLOW" << endl;
  myLED.redLED(1);
  myLED.amberLED(1);
  myLED.greenLED(0);
}

LightControl* RedYellow::nextstate()
{
  LightControl *instance = new Green();
  return instance;
}