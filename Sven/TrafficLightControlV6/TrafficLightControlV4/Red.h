/** @file Red.h*/

#ifndef RED_H
#define RED_H

#include "regtypes.h"
#include "LightControl.h"
#include "RedAmber.h"
#include "UserLEDs.h"
#include <iostream>

using namespace std;

/**
 * Concrete state of interface class "LightControl".
 * In this state only the red LED is on.
 * @author
 * @date   May 2022
 */
class Red : public LightControl
{
private:
  UserLEDs myLED;

  /**
   * Singleton instance of "Red"-class.
   * @param  None
   * @return None
   */
  static Red *Instance;

  /**
   * Constructor of "Red"-class.
   * @param  None
   * @return None
   */
  Red();

public:
  /**
   * Static singleton access method.
   * Controls the LED states.
   * @param  None
   * @return None
   */
  static Red *GetInstance();

  /**
   * Handle of concrete state "Red".
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