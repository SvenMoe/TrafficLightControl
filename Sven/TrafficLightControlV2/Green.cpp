/** @file Geen.cpp*/

#include "Green.h"


void Green::Handle()
{
  cout << "LED GREEN" << endl;
  myLED.redLED(0);
  myLED.amberLED(0);
  myLED.greenLED(1);
}

LightControl* Green::nextstate()
{
  LightControl *instance = new Yellow();
  return instance;
}