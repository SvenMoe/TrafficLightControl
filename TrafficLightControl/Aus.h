/** @file Aus.h*/

#ifndef AUS_H
#define AUS_H

#include "regtypes.h"
#include "UserLEDs.h"
#include "LightControl.h"
#include <iostream>

using namespace std;

class Aus : public LightControl
{
  UserLEDs myLED;
public:
  Aus(){}
  void Handle();
  LightControl* nextstate();
  
};


#endif