/** @file Green.cpp*/

#include "Green.h"

Green *Green::Instance = NULL;

Green *Green::GetInstance()
{
  if (Instance == NULL)
  {
    Instance = new Green();
  }
  return Instance;
}

void Green::Handle()
{
  myLED.redLED(0);
  myLED.amberLED(0);
  myLED.greenLED(1);
}

inline LightControl *Green::nextstate()
{
  LightControl *instance = Amber::GetInstance();
  return instance;
}