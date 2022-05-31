/** @file flashing.cpp*/

#include "flashing.h"

flashing *flashing::Instance = NULL;

flashing *flashing::GetInstance()
{
  if (Instance == NULL)
  {
    Instance = new flashing();
  }
  return Instance;
}

void flashing::Handle()
{
  cout << "mode: flashing" << endl;
  myLightControl = Off::GetInstance();
  myLightControl->Handle();
  for (int i = 0; i < 5000; i++)
  {
  }
  myLightControl = Amber::GetInstance();
  myLightControl->Handle();
}

inline state *flashing::nextstate()
{
  state *instance = active::GetInstance();
  return instance;
}