/** @file active.cpp*/

#include "active.h"

void active::Handle()
{
  cout << "mode: active" << endl;
  
  if(button.getButton() == 'O')
  {
    buttonReset = true;
  }
  if(button.getButton() == 'F' && buttonReset == true)
  {
    myLightControl = myLightControl->nextstate();
    buttonReset = false;
  }
  
  myLightControl->Handle();
}

state* active::nextstate()
{
  state *instance = new flashing();
  return instance;
}