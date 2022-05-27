/** @file RedAmber.h*/

#ifndef REDAMBER_H
#define REDAMBER_H

#include "regtypes.h"
#include "LightControl.h"
#include "Green.h"
#include "UserLEDs.h"
#include <iostream>

using namespace std;

class RedAmber : public LightControl
{
  UserLEDs myLED;

public:
  RedAmber(){}
  void Handle();
  LightControl* nextstate(); 
};


#endif