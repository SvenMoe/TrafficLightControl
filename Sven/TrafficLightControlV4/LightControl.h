/** @file LightControl.h*/

#ifndef LIGHTCONTROL_H
#define LIGHTCONTROL_H

#include "regtypes.h"
#include <iostream>

class LightControl
{

public:
  LightControl(){}
  virtual void Handle() = 0;
  virtual LightControl* nextstate() = 0;

};


#endif