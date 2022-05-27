/** @file Off.cpp*/

#include "Off.h"


void Off::Handle()
{
  cout << "LED AUS" << endl;
  myLED.redLED(0);
  myLED.amberLED(0);
  myLED.greenLED(0);
}

LightControl* Off::nextstate()
{
  LightControl *instance = new Off();
  return instance;
}