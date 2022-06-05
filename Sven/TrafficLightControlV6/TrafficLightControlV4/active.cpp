/** @file active.cpp*/

#include "active.h"

active *active::Instance = NULL;

OutputFormat* active::myOutputFormatActive = NULL;
InputFormat* active::myInputFormatActive = NULL;

active *active::GetInstance(OutputFormat *myOutputFormat, InputFormat *myInputFormat)
{
  myOutputFormatActive = myOutputFormat;
  myInputFormatActive = myInputFormat;
  if (Instance == NULL)
  {
    Instance = new active();
  }

  return Instance;
}

void active::Handle()
{

  if (myInputFormatActive->getButton() == 'O')
  {
    buttonReset = true;
  }
  if (myInputFormatActive->getButton() == 'F' && buttonReset == true)
  {
    myLightControl = myLightControl->nextstate();
    buttonReset = false;
  }

  myLightControl->Handle();
}

inline state *active::nextstate()
{
  cout << "mode: flashing" << endl;
  state *instance = flashing::GetInstance(myOutputFormatActive, myInputFormatActive);
  return instance;
}