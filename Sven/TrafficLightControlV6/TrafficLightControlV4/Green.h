/** @file Green.h*/

#ifndef GREEN_H
#define GREEN_H

#include "regtypes.h"
#include "LightControl.h"
#include "Amber.h"
#include "OutputFormat.h"
#include <iostream>

#include "HardwareOutput.h"
#include "SoftwareOutput.h"

using namespace std;

/**
 * Concrete state of interface class "LightControl".
 * In this state only the green LED is on.
 * @author Cedric Franke
 * @date   May 2022
 */
class Green : public LightControl
{
private:
  static OutputFormat *myOutputFormatGreen;

  /**
   * Singleton instance of "Green"-class.
   * @param  None
   * @return None
   */
  static Green *Instance;

  /**
   * Constructor of "Green"-class.
   * @param  None
   * @return None
   */
  Green() {}

public:
  /**
   * Static singleton access method.
   * @param  None
   * @return None
   */
  static Green *GetInstance(OutputFormat *myOutputFormat);

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
  LightControl *nextstate();
};

#endif