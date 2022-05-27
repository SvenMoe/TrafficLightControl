/** @file Off.h*/

#ifndef OFF_H
#define OFF_H

#include "regtypes.h"
#include "UserLEDs.h"
#include "LightControl.h"
#include <iostream>

using namespace std;

/**
 * Concrete state of interface class "LightControl".
 * In this state all LEDs are off.
 * @author 
 * @date   May 2022
 */
class Off : public LightControl
{
private:
  UserLEDs myLED;
public:
/**
 * Constructor of "Off"-class.
 * @param  None
 * @return None
 */
  Off(){}
  
/**
 * Handle of concrete state "Off".
 * Controls the LED states.
 * @param  None
 * @return None
 */
  void Handle();
  
/**
 * Takes over to the next active state.
 * @param  None
 * @return Instance for next state.
 */
  LightControl* nextstate();
  
};


#endif