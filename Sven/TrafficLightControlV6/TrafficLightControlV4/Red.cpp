/** @file Red.cpp*/

#include "Red.h"

void Red::Handle()
{
  cout << "LED RED" << endl;
  myLED.redLED(1);
  myLED.amberLED(0);
  myLED.greenLED(0);
}
// hallo
inline LightControl *Red::nextstate()
{
  LightControl *instance = new RedAmber();
  return instance;
}