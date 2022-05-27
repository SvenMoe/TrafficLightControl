/** @file TrafficLight.cpp*/

#include "TrafficLight.h"



UINT8 TrafficLight::Handle()
{
  cout << button.getButton();
  
  if(button.getButton() == 'O')
  {
    buttonReset = true;
  }
  if(button.getButton() == 'B' && buttonReset == true)
  {
    mystate = mystate->nextstate();
    buttonReset = false;
  }
  
  if(button.getButton() == 'X')
  {
    return 0;
  }
  
  mystate->Handle();
  return 1;
  
  

}