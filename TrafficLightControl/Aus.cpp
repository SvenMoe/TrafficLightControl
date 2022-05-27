/** @file Aus.cpp*/

#include "Aus.h"


void Aus::Handle()
{
  cout << "LED AUS" << endl;
  myLED.redLED(0);
  myLED.amberLED(0);
  myLED.greenLED(0);
}

LightControl* Aus::nextstate()
{
  LightControl *instance = new Aus();
  return instance;
}