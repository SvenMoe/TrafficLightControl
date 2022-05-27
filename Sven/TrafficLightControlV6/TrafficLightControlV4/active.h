/** @file active.h*/

#ifndef ACTIVE_H
#define ACTIVE_H

#include "regtypes.h"
#include "state.h"
#include "flashing.h"
#include "UserButtons.h"
#include <iostream>

using namespace std;

/**
 * Concrete state of interface class "state".
 * In this state the Traffic Light is in active state.
 * @author 
 * @date   May 2022
 */
class active : public state
{
private:
  bool buttonReset = true;
  UserButtons button;
  LightControl *myLightControl;
public:
/**
 * Constructor of "active"-class.
 * @param  "LightControl *myLightControl" gets the current state of LightControl
 * @return None
 */
  active(LightControl *myLightControl = new Red()) : myLightControl(myLightControl) {}
  
/**
 * Handle of concrete state "active".
 * Handles the concrete states of "active" state.
 * @param  None
 * @return None
 */
  void Handle();
  
/**
 * Takes over to flashing state.
 * @param  None
 * @return Instance for next state.
 */
  state* nextstate();

  
};


#endif