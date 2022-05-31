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
  OutputFormat.off();
}

LightControl *Off::nextstate()
{
  LightControl *instance = Off::GetInstance();
  return instance;
}