/** @file RedAmber.cpp*/

#include "RedAmber.h"


void RedAmber::Handle()
{
  cout << "LED RedAmber" << endl;
  myLED.redLED(1);
  myLED.amberLED(1);
  myLED.greenLED(0);
}

LightControl* RedAmber::nextstate()
{
  LightControl *instance = new Green();
  return instance;
}