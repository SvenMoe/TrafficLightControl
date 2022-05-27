/** @file Amber.h*/

#ifndef AMBER_H
#define AMBER_H

#include "regtypes.h"
#include "LightControl.h"
#include "Red.h"
#include "UserLEDs.h"
#include <iostream>

using namespace std;

class Amber : public LightControl
{
  UserLEDs myLED;

public:
  Amber(){}
  void Handle();
  LightControl* nextstate(); 
};


#endif