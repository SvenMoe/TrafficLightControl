/** @file RedAmber.cpp*/

#include "RedAmber.h"

RedAmber *RedAmber::Instance = NULL;

RedAmber *RedAmber::GetInstance()
{
  if (Instance == NULL)
  {
    Instance = new RedAmber();
  }
  return Instance;
}

void RedAmber::Handle()
{
  myLED.redLED(1);
  myLED.amberLED(1);
  myLED.greenLED(0);
}

inline LightControl *RedAmber::nextstate()
{
  LightControl *instance = Green::GetInstance();
  return instance;
}