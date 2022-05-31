/** @file Red.cpp*/

#include "Red.h"

Red *Red::Instance = NULL;

Red *Red::GetInstance()
{
  if (Instance == NULL)
  {
    Instance = new Red();
  }
  return Instance;
}

void Red::Handle()
{
  myLED.redLED(1);
  myLED.amberLED(0);
  myLED.greenLED(0);
}

inline LightControl *Red::nextstate()
{
  LightControl *instance = RedAmber::GetInstance();
  return instance;
}