/** @file Amber.h*/

#ifndef AMBER_H
#define AMBER_H

#include "regtypes.h"
#include "LightControl.h"
#include "Red.h"
#include "OutputFormat.h"
#include <iostream>

#include "HardwareOutput.h"
#include "SoftwareOutput.h"

using namespace std;

/**
 * Concrete state of interface class LightControl.
 * In this state only the amber LED is on.
 * @author Cedric Franke
 * @date   May 2022
 */
class Amber : public LightControl
{
private:
  static OutputFormat *myOutputFormatAmber;

  /**
   * Singleton instance of "Amber"-class.
   * @param  None
   * @return None
   */
  static Amber *Instance;

  /**
   * Constructor of "Amber"-class.
   * @param  None
   * @return None
   */
  Amber() {}

public:
  /**
   * Static singleton access method.
   * @param  None
   * @return None
   */
  static Amber *GetInstance(OutputFormat *myOutputFormat);

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
  LightControl *nextstate();
};

#endif