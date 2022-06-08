/** @file LightControl.h*/

#ifndef LIGHTCONTROL_H
#define LIGHTCONTROL_H

#include "regtypes.h"
#include <iostream>

/**
 * Interface class "LightControl".
 * @author Cedric Franke
 * @date   June 2022
 */
class LightControl
{

public:
  /**
   * Constructor of "LightControl"-class. Is empty.
   * @param  None
   * @return None
   */
  LightControl(){}
  
  /**
   * Virtual Method. Will be overritten.
   * @param  None
   * @return None
   */
  virtual void Handle() = 0;
  
  /**
   * Virtual Method. Will be overritten.
   * @param  None
   * @return None
   */
  virtual LightControl* nextstate() = 0;

};


#endif