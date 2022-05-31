/** @file RedAmber.h*/

#ifndef REDAMBER_H
#define REDAMBER_H

#include "regtypes.h"
#include "LightControl.h"
#include "Green.h"
#include "UserLEDs.h"
#include <iostream>

using namespace std;

/**
 * Concrete state of interface class "LightControl".
 * In this state only the red and the amber LED are on.
 * @author Cedric Franke
 * @date   May 2022
 */
class RedAmber : public LightControl
{
private:
  UserLEDs myLED;

  /**
   * Singleton instance of "RedAmber"-class.
   * @param  None
   * @return None
   */
  static RedAmber *Instance;

  /**
   * Constructor of "RedAmber"-class.
   * @param  None
   * @return None
   */
  RedAmber() {}

public:
  /**
   * Static singleton access method.
   * @param  None
   * @return None
   */
  static RedAmber *GetInstance();

  /**
   * Handle of concrete state "RedAmber".
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
  LightControl *nextstate();
};

#endif