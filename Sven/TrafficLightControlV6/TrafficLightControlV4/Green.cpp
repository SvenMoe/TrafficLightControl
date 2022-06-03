/** @file Green.cpp*/

#include "Green.h"

Green *Green::Instance = NULL;

OutputFormat* Green::myOutputFormatGreen = NULL;

Green *Green::GetInstance(OutputFormat *myOutputFormat)
{
  myOutputFormatGreen = myOutputFormat; 
  if (Instance == NULL)
  {
    Instance = new Green();
  }
  return Instance;
}

void Green::Handle()
{
  myOutputFormatGreen->setGreen();
}

inline LightControl *Green::nextstate()
{
  LightControl *instance = Amber::GetInstance(myOutputFormatGreen);
  return instance;
}