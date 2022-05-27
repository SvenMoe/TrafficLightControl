/** @file Amber.h*/

#ifndef AMBER_H
#define AMBER_H

#include "regtypes.h"
#include "LightControl.h"
#include "Red.h"
#include "UserLEDs.h"
#include <iostream>

using namespace std;

/**
 * Concrete state of interface class LightControl.
 * In this state only the amber LED is on.
 * @author 
 * @date   May 2022
 */
class Amber : public LightControl
{
private:
  UserLEDs myLED;

public:
/**
 * Constructor of "Amber"-class.
 * @param  None
 * @return None
 */
  Amber(){}
  
/**
 * Handle of concrete state "Amber".
 * Controls the LED states.
 * @param  None
 * @return None
 */
  void Handle();
  
/**
 * Takes over to the next active state.
 * @param  None
 * @return Instance for next state
 */
  LightControl* nextstate(); 
};


#endif