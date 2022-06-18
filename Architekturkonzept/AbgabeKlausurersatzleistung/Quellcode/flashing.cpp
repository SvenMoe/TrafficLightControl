/** @file flashing.cpp*/

#include "flashing.h"

flashing *flashing::Instance = NULL;

OutputFormat* flashing::myOutputFormatFlashing = NULL;
InputFormat* flashing::myInputFormatFlashing = NULL;

flashing *flashing::GetInstance(OutputFormat *myOutputFormat, InputFormat *myInputFormat)
{
  myOutputFormatFlashing = myOutputFormat;
  myInputFormatFlashing = myInputFormat;
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
  for(UINT32 i = 0; i < 500; i++)
  {
  }
  myLightControl = Amber::GetInstance(myOutputFormatFlashing);
  myLightControl->Handle();
}

inline state *flashing::nextstate()
{
  cout << "mode: active" << endl;
  state *instance = active::GetInstance(myOutputFormatFlashing, myInputFormatFlashing);
  return instance;
}