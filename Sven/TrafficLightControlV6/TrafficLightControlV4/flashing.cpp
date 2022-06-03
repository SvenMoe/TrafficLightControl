/** @file flashing.cpp*/

#include "flashing.h"

flashing *flashing::Instance = NULL;

OutputFormat* flashing::myOutputFormatFlashing = NULL;

flashing *flashing::GetInstance(OutputFormat *myOutputFormat)
{
  myOutputFormatFlashing = myOutputFormat;
  if (Instance == NULL)
  {
    Instance = new flashing();
  }
  return Instance;
}



void flashing::Handle()
{
  myLightControl = Off::GetInstance(myOutputFormatFlashing);
  myLightControl->Handle();
  for(int i = 0; i < 500; i++)
  {
  }
  myLightControl = Amber::GetInstance(myOutputFormatFlashing);
  myLightControl->Handle();
}

inline state *flashing::nextstate()
{
  cout << "mode: active" << endl;
  state *instance = active::GetInstance(myOutputFormatFlashing);
  return instance;
}