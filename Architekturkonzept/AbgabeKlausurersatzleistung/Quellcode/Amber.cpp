/** @file Amber.cpp*/

#include "Amber.h"

Amber *Amber::Instance = NULL;

OutputFormat* Amber::myOutputFormatAmber = NULL;

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
  myOutputFormatAmber->setAmber();
}

inline LightControl *Amber::nextstate()
{
  LightControl *instance = Red::GetInstance(myOutputFormatAmber);
  return instance;
}