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
  OutputFormat.setRed();
}

inline LightControl *Red::nextstate()
{
  LightControl *instance = RedAmber::GetInstance();
  return instance;
}