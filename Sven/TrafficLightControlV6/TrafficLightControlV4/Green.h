/** @file Green.h*/

#ifndef GREEN_H
#define GREEN_H

#include "regtypes.h"
#include "LightControl.h"
#include "Amber.h"
#include "UserLEDs.h"
#include <iostream>

using namespace std;

/**
 * Concrete state of interface class "LightControl".
 * In this state only the green LED is on.
 * @author 
 * @date   May 2022
 */
class Green : public LightControl
{
private:
  UserLEDs myLED;

public:
/**
 * Constructor of "Green"-class.
 * @param  None
 * @return None
 */
  Green(){}
  
/**
 * Handle of concrete state "Green".
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