/** @file RedYellow.h*/

#ifndef REDYELLOW_H
#define REDYELLOW_H

#include "regtypes.h"
#include "LightControl.h"
#include "Green.h"
#include "UserLEDs.h"
#include <iostream>

using namespace std;

class RedYellow : public LightControl
{
  UserLEDs myLED;

public:
  RedYellow(){}
  void Handle();
  LightControl* nextstate(); 
};


#endif