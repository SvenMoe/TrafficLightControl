/** @file TrafficLight.cpp*/

#include "TrafficLight.h"



void TrafficLight::Handle()
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
  
  mystate->Handle();
  

}