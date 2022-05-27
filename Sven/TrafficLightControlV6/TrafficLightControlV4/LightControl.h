/** @file LightControl.h*/

#ifndef LIGHTCONTROL_H
#define LIGHTCONTROL_H

#include "regtypes.h"
#include <iostream>

/**
 * Interface class "LightControl".
 * @author 
 * @date   May 2022
 */
class LightControl
{

public:
  LightControl(){}
  virtual void Handle() = 0;
  virtual LightControl* nextstate() = 0;

};


#endif