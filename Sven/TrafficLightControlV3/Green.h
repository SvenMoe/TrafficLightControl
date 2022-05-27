/** @file Green.h*/

#ifndef GREEN_H
#define GREEN_H

#include "regtypes.h"
#include "LightControl.h"
#include "Amber.h"
#include "UserLEDs.h"
#include <iostream>

using namespace std;

class Green : public LightControl
{
  UserLEDs myLED;

public:
  Green(){}
  void Handle();
  LightControl* nextstate(); 
};


#endif