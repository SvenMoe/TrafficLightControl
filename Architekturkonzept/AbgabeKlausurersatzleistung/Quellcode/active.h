/** @file active.h*/

#ifndef ACTIVE_H
#define ACTIVE_H

#include "regtypes.h"
#include "state.h"
#include "flashing.h"
//#include "HardwareOutput.h"
#include "Red.h"
#include <iostream>


#include "InputFormat.h"
#include "SoftwareInput.h"
#include "HardwareInput.h"

using namespace std;

/**
 * Concrete state of interface class "state".
 * In this state the Traffic Light is in active state.
 * @author Sven Moessner, Cedric Franke
 * @date   June 2022
 */
class active : public state
{
private:
  bool buttonReset = true;
  LightControl *myLightControl;
  static OutputFormat *myOutputFormatActive;
  static InputFormat *myInputFormatActive;

  /**
   * Singleton instance of "active"-class.
   * @param  None
   * @return None
   */
  static active *Instance;

  /**
   * Constructor of "active"-class.
   * @param  "LightControl *myLightControl" gets the current state of LightControl
   * @return None
   */
  active(LightControl *myLightControl = Red::GetInstance(myOutputFormatActive)) : myLightControl(myLightControl) {}

public:
  /**
   * Static singleton access method.
   * @param  None
   * @return None
   */
  static active *GetInstance(OutputFormat *myOutputFormat, InputFormat *myInputFormat);

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
  state *nextstate();
};

#endif