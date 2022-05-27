/** @file Off.h*/

#ifndef OFF_H
#define OFF_H

#include "regtypes.h"
#include "UserLEDs.h"
#include "LightControl.h"
#include <iostream>

using namespace std;

class Off : public LightControl
{
  UserLEDs myLED;
public:
  Off(){}
  void Handle();
  LightControl* nextstate();
  
};


#endif