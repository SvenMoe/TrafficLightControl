/** @file RedAmber.cpp*/

#include "RedAmber.h"

RedAmber *RedAmber::Instance = NULL;

OutputFormat* RedAmber::myOutputFormatRedAmber = NULL;

RedAmber *RedAmber::GetInstance(OutputFormat *myOutputFormat)
{
  myOutputFormatRedAmber = myOutputFormat; 
  if (Instance == NULL)
  {
    Instance = new RedAmber();
  }
  return Instance;
}

void RedAmber::Handle()
{
  myOutputFormatRedAmber->setRedAmber();
}

inline LightControl *RedAmber::nextstate()
{
  LightControl *instance = Green::GetInstance(myOutputFormatRedAmber);
  return instance;
}