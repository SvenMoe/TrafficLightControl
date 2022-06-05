/** @file TrafficLight.cpp*/

#include "TrafficLight.h"

UINT8 TrafficLight::Handle()
{

  if (myInputFormat->getButton() == 'O')
  {
    buttonReset = true;
  }
  if (myInputFormat->getButton() == 'B' && buttonReset == true)
  {
    mystate = mystate->nextstate();
    buttonReset = false;
  }

  if (myInputFormat->getButton() == 'X')
  {
    return 0;
  }

  mystate->Handle();
  return 1;
}

