/** @file Amber.cpp*/

#include "Amber.h"

Amber *Amber::Instance = NULL;

Amber *Amber::GetInstance()
{
  if (Instance == NULL)
  {
    Instance = new Amber();
  }
  return Instance;
}

void Amber::Handle()
{
  cout << "LED AMBER" << endl;
  myLED.redLED(0);
  myLED.amberLED(1);
  myLED.greenLED(0);
}

inline LightControl *Amber::nextstate()
{
  LightControl *instance = Red::GetInstance();
  return instance;
}