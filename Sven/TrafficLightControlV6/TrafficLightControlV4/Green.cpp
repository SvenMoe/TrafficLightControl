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
  OutputFormat->setGreen();
}

inline LightControl *Green::nextstate()
{
  LightControl *instance = Amber::GetInstance();
  return instance;
}