/** @file Off.cpp*/

#include "Off.h"

Off *Off::Instance = NULL;

Off *Off::GetInstance()
{
  if (Instance == NULL)
  {
    Instance = new Off();
  }
  return Instance;
}

void Off::Handle()
{
  cout << "LED AUS" << endl;
  myLED.redLED(0);
  myLED.amberLED(0);
  myLED.greenLED(0);
}

LightControl *Off::nextstate()
{
  LightControl *instance = Off::GetInstance();
  return instance;
}