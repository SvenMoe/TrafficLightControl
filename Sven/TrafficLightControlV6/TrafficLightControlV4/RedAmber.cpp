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
  OutputFormat.setRedAmber();
}

inline LightControl *RedAmber::nextstate()
{
  LightControl *instance = Green::GetInstance();
  return instance;
}