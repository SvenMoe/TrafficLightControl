/** @file Amber.cpp*/

#include "Amber.h"

Amber *Amber::Instance = NULL;

Amber *Amber::GetInstance(OutputFormat *myOutputFormat)
{
  myOutputFormatAmber = myOutputFormat; 
  if (Instance == NULL)
  {
    Instance = new Amber();
  }
  return Instance;
}

void Amber::Handle()
{
  OutputFormat.setAmber();
}

inline LightControl *Amber::nextstate()
{
  LightControl *instance = Red::GetInstance();
  return instance;
}