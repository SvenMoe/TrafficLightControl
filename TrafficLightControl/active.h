/** @file active.h*/

#ifndef ACTIVE_H
#define ACTIVE_H

#include "regtypes.h"
#include "state.h"
#include "flashing.h"
#include "UserButtons.h"
#include <iostream>

using namespace std;

class active : public state
{
  bool buttonReset = true;
  UserButtons button;
  LightControl *myLightControl;
public:
  active(LightControl *myLightControl = new Red()) : myLightControl(myLightControl) {}
  void Handle();
  state* nextstate();

  
};


#endif