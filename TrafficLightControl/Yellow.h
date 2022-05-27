/** @file Yellow.h*/

#ifndef YELLOW_H
#define YELLOW_H

#include "regtypes.h"
#include "LightControl.h"
#include "Red.h"
#include "UserLEDs.h"
#include <iostream>

using namespace std;

class Yellow : public LightControl
{
  UserLEDs myLED;

public:
  Yellow(){}
  void Handle();
  LightControl* nextstate(); 
};


#endif