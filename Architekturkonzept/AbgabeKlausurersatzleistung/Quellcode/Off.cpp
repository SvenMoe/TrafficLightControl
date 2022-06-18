/** @file Off.cpp*/

#include "Off.h"

Off *Off::Instance = NULL;

OutputFormat* Off::myOutputFormatOff = NULL;

Off *Off::GetInstance(OutputFormat *myOutputFormat)
{
  myOutputFormatOff = myOutputFormat; 
  if (Instance == NULL)
  {
    Instance = new Off();
  }
  return Instance;
}

void Off::Handle()
{
  myOutputFormatOff->off();
}

LightControl *Off::nextstate()
{
  LightControl *instance = Off::GetInstance(myOutputFormatOff);
  return instance;
}