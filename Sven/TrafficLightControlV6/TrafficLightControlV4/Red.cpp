/** @file Red.cpp*/

#include "Red.h"

Red *Red::Instance = NULL;

OutputFormat* Red::myOutputFormatRed = NULL;

Red *Red::GetInstance(OutputFormat *myOutputFormat)
{
  myOutputFormatRed = myOutputFormat; 
  if (Instance == NULL)
  {
    Instance = new Red();
  }
  return Instance;
}


void Red::Handle()
{
  myOutputFormatRed->setRed();
}

inline LightControl *Red::nextstate()
{
  LightControl *instance = RedAmber::GetInstance(myOutputFormatRed);
  return instance;
}