/** @file Red.h*/

#ifndef RED_H
#define RED_H

#include "regtypes.h"
#include "LightControl.h"
#include "RedAmber.h"
#include "UserLEDs.h"
#include "OutputFormat.h"
#include <iostream>

#include "HardwareOutput.h"
#include "SoftwareOutput.h"

using namespace std;

/**
 * Concrete state of interface class "LightControl".
 * In this state only the red LED is on.
 * @author Cedric Franke
 * @date   May 2022
 */
class Red : public LightControl
{
private:
  UserLEDs myLED;
  static OutputFormat *myOutputFormatRed;

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
  Red(){};

public:
  /**
   * Static singleton access method.
   * @param  None
   * @return None
   */
  static Red *GetInstance(OutputFormat *myOutputFormat);


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