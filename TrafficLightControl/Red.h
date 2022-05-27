/** @file Red.h*/

#ifndef RED_H
#define RED_H

#include "regtypes.h"
#include "LightControl.h"
#include "RedYellow.h"
#include "UserLEDs.h"
#include <iostream>

using namespace std;

class Red : public LightControl
{
  UserLEDs myLED;

public:
  Red(){}
  void Handle();
  LightControl* nextstate(); 
};


#endif