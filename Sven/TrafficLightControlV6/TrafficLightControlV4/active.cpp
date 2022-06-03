/** @file active.cpp*/

#include "active.h"

active *active::Instance = NULL;

active *active::GetInstance(OutputFormat *myOutputFormat)
{
  myOutputFormatActive = *myOutputFormat;

  if (Instance == NULL)
  {
    Instance = new active();
  }
  return Instance;
}

void active::Handle()
{

  if (button.getButton() == 'O')
  {
    buttonReset = true;
  }
  if (button.getButton() == 'F' && buttonReset == true)
  {
    myLightControl = myLightControl->nextstate();
    buttonReset = false;
  }

  myLightControl->Handle();
}

inline state *active::nextstate()
{
  cout << "mode: flashing" << endl;
  state *instance = flashing::GetInstance();
  return instance;
}